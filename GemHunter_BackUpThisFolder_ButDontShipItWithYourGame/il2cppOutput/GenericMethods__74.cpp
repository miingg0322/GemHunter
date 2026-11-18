#include "pch-cpp.hpp"





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

struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct ICollectionPropertyBag_2_t946344F882AD952ACC10604C33DF98E93843064E;
struct ICollectionPropertyBag_2_t0BF9187725021381B07CBDFEC3FFD41EE18A42EC;
struct ICollectionPropertyBag_2_tFA0382467AE5F48FF20A2F869D990A6E278C0F59;
struct ICollectionPropertyBag_2_tF8E65215C0D21E3360A2A4A8479B5A09418A157E;
struct IEnumerable_1_t2A9DB2D9C8631EF0D20870B49EFDD221C16EE8C8;
struct IEnumerable_1_t832D2CFD282EC39695E3B29382469CBBDAC20A4C;
struct IEnumerator_1_t7572EF96A1518C90794D399CFA58C1782FD11E9D;
struct IEnumerator_1_tDDDBB7ABA430F82E4DFAE7DA7F371E6C1BCD880D;
struct IIndexedCollectionPropertyBagEnumerator_1_t742D5F57F0308D51693EA216AA95834E0019231B;
struct IIndexedCollectionPropertyBagEnumerator_1_tA368F0DEE5E66BBDE4BD9BB25B9EBBC13B4DE29E;
struct IProperty_1_t59E20F90DB98F2BBAE67DF5CD980664BC258AEB0;
struct IProperty_1_t6AA278E9A50B043976B850FE4B27820B8629D4FD;
struct List_1_t64B203526C63CA8DB966EDA0525A489D0502013A;
struct List_1_tE4889F8AF825806887F4988C7FF6C96EEB166916;
struct List_1_t534D2333B268A3580A409E37E69D1D54668A35DB;
struct List_1_t69A0640F36B14B8E895AD59C7F718F1693FA9DE8;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct UnsafeList_1_t823260CC648D4FAB5E8934C1D8E387F44BD66497;
struct UnsafeList_1_t238C6D0E6E21F9806AB40612F33B2EFD63244113;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct JsonAdapter_t4387298CACEC425123A5D8C620C8888E8D4BD6C8;
struct JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E;
struct JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A;
struct UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct SerializedIdProperty_tC288BDFA559889145732E5D454D0477B0F30047F;
struct SerializedTypeProperty_tCF1F8B9984C9FCA9FBFF60D17A3264429A481AA7;
struct SerializedVersionProperty_t7BD2B75FCD30579F5D6090EA270A2594F8B65724;
struct Data_tD9ADCCDFFF56E03AA0A5E567D30C64F4A2A55D44;

IL2CPP_EXTERN_C RuntimeClass* IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043;
IL2CPP_EXTERN_C const RuntimeType* JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var;
struct Data_tD9ADCCDFFF56E03AA0A5E567D30C64F4A2A55D44;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct TypeTraits_1_t50A802605DEECAC604087278D28F6DAD1D87E594  : public RuntimeObject
{
};
struct TypeTraits_1_t1491D809E3CFB56C6E6DD462BC974F41DF443C5C  : public RuntimeObject
{
};
struct TypeTraits_1_t9A92FED6D60DACE8C551B7F9D3A8C19FFD695D8A  : public RuntimeObject
{
};
struct TypeTraits_1_t60DBEABEEE02A3331508FC00671BB1516A847773  : public RuntimeObject
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
struct TypeTraits_1_tABB3973C656C1AC89B87A6B51853058513CA93E5  : public RuntimeObject
{
};
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE  : public RuntimeObject
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
struct TypeTraits_1_tB824D69C311C2A17E50137889AB594DDC1E7D8D2  : public RuntimeObject
{
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
struct Enumerator_tCAB1F69661F786E9644AC9075D555EF05DF5DE6E 
{
	List_1_t64B203526C63CA8DB966EDA0525A489D0502013A* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t0FE68B3AEE4A39E247DC9D49886B843C18F82CD0 
{
	List_1_tE4889F8AF825806887F4988C7FF6C96EEB166916* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct IndexedCollectionPropertyBagEnumerable_1_t1BD56226604D3B1BFF3B0204345FF7CD24927B29 
{
	RuntimeObject* ___m_Impl;
	Il2CppSharedGenericObject* ___m_Container;
};
struct NativeList_1_t02979B0A0A691EACBC37CD045D33C72C1904C5B6 
{
	UnsafeList_1_t823260CC648D4FAB5E8934C1D8E387F44BD66497* ___m_ListData;
};
struct NativeList_1_t6B350AE4E09DCADC9C2673572317CF843DC720AC 
{
	UnsafeList_1_t238C6D0E6E21F9806AB40612F33B2EFD63244113* ___m_ListData;
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
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
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
struct EnumeratorType_tC4B4D92A4AB8FA3307F332E28AA7F52DC348C571 
{
	int32_t ___value__;
};
struct EnumeratorType_tD06F704D33C56B09E962E5CE8C44AB1358BD892F 
{
	int32_t ___value__;
};
struct IndexedCollectionPropertyBagEnumerator_1_t8B90FBE4DE9436541FA7AE4DE0ACC2959E2A3A27 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Il2CppSharedGenericObject* ___m_Container;
	int32_t ___m_Position;
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
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Overrides_tC9B103FDC9701E9AEC24EF9791E329C3FB131D5C 
{
	int32_t ___value__;
};
struct Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t0FE68B3AEE4A39E247DC9D49886B843C18F82CD0 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t8B90FBE4DE9436541FA7AE4DE0ACC2959E2A3A27 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct IndexedCollectionPropertyBagEnumerable_1_t1B4AB563426381F873B0F551735C8EB5EE1CFB78 
{
	RuntimeObject* ___m_Impl;
	SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD ___m_Container;
};
struct IndexedCollectionPropertyBagEnumerator_1_tFEDA2061734E77249DAAB5F7AF05A67BD5C7C5BA 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD ___m_Container;
	int32_t ___m_Position;
};
struct PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_tE4889F8AF825806887F4988C7FF6C96EEB166916* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t1BD56226604D3B1BFF3B0204345FF7CD24927B29 ___m_IndexedCollectionPropertyBag;
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
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_tCAB1F69661F786E9644AC9075D555EF05DF5DE6E ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tFEDA2061734E77249DAAB5F7AF05A67BD5C7C5BA ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct PropertyCollection_1_t040617B38F223B50227895985451E256506B34FF 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerable;
	List_1_t64B203526C63CA8DB966EDA0525A489D0502013A* ___m_Properties;
	IndexedCollectionPropertyBagEnumerable_1_t1B4AB563426381F873B0F551735C8EB5EE1CFB78 ___m_IndexedCollectionPropertyBag;
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
struct ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 
{
	JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3 ___Writer;
};
struct ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7_marshaled_pinvoke
{
	JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3_marshaled_pinvoke ___Writer;
};
struct ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7_marshaled_com
{
	JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3_marshaled_com ___Writer;
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
struct TypeTraits_1_t60DBEABEEE02A3331508FC00671BB1516A847773_StaticFields
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
struct TypeTraits_1_tABB3973C656C1AC89B87A6B51853058513CA93E5_StaticFields
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
struct TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields
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
struct TypeTraits_1_tB824D69C311C2A17E50137889AB594DDC1E7D8D2_StaticFields
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
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue;
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
struct PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0_StaticFields
{
	PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0 ___U3CEmptyU3Ek__BackingField;
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
struct PropertyCollection_1_t040617B38F223B50227895985451E256506B34FF_StaticFields
{
	PropertyCollection_1_t040617B38F223B50227895985451E256506B34FF ___U3CEmptyU3Ek__BackingField;
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m91BC8626D79E7B4C9D4A9980B0631651325DE31F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DF819650B3509475FF723759D53D05F23C6999 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA7D0A6B7D07116F35A4BF94D3C23B25757F14DC3 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m5CB3F617F2C76F727BAE0EAA00E1849C6B787932 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2B312E1148312DC6D476005F841535D41A9F9327_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA1F4A158D3CDE6CA0326AF6AE196F4296A902198 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE651736FFB9D2F9E2A6EBC3AEB89F31CEC4FC30D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBFB2AD144330663C18B55DD1FC2A8EF526EBA025_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC6A2E63A68E51944068061F612EE638E72BC8E7B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m8F7CA8C1377860B4F47CC0D6A28525E64D9517A6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m273AD0D18397D56AF315DAF57DFB27DD4FD1C1D3 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0A6B9FF2C17F6D0FC03E49E1820FFFDF376C2E0D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m93B9BE89D187CE4DE54655FC8E79C21A80067FDB (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD3A0269A333398104B2D8BB2FCBB9FD047A119C0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m9CF39153BC92C19681B92DEA9B300FDCD2DDC2F9 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00FFC0A7290C37C26F56C73B18CD79C03035B227 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC2ABCDBBBBA113675F0402269842FE70B678FD71_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mDAEE35FA896DB629D75141A5AC36618AF0B03AFA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mAA42EE9D99D441D880836C05651372A866971D32 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m2F389ADB2267E3D419A9AD2DA126B5290BF3ACDF (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mBFBF5726A2C5497D9D1DE07C70CCC29919323352 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA3A83B0AB6B296273AE2BDDEB3B9AF841A456880_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBCF956B347277A96F21D9EECE797BC66BFB83804 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m091EB2DAD4CD6350137CA320679128187FDB06BD (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2A50DCF82433DFCE492486D6F3004A4EC66BD8C1 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4CBBE403C9FAEB237D906E8A4C7BFA9D6E8F9D7E (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE7F2A82238BE5DD04149904E4AD61A14F6C7085 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m40060AFB3AF94BC2B971081CB3B2975A14278759 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m283BAA739BE2D12707F064FF6DF9B394EAA8D12D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m14B85EF53C1274C65E96AAABF6A95ABEA1E98871 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisIl2CppSharedGenericObject_mF099C179BB78F2CCC212F24F0C2DF1C892BE2AD7_gshared (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m0F4E74047BB13DB771C3BAE852BFCE0D924FE0F8_gshared (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m0E14D06FF7273D8E63F7317E565E783A475AD128 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyWriter_WriteSerializedContainerMetadata_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m72B969FD5CE30E994FB71B0EB616D7BEFA48CDE6 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_container, SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 ___1_metadata, int32_t* ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E PropertyCollection_1_GetEnumerator_m910CE7806ED013225B564281DC5F2C0B079E660F (PropertyCollection_1_t040617B38F223B50227895985451E256506B34FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m80BD377ACFAD4C65291987EC687C319D20EA8713 (Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD657CB5BE97EC044573CE0DB5F090695B16EE855_inline (Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8BD1C2961323408445D4B846A1628207CBF0F23D (Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisIl2CppSharedGenericObject_m4369FC9C592AF0F1FBE04B92C5E35E2E29B5658B_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Il2CppSharedGenericObject** ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyWriter_WriteSerializedContainerMetadata_TisIl2CppSharedGenericObject_m6B502AE5EDA42F8CE45085E1862BF0D0516B9476_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Il2CppSharedGenericObject** ___0_container, SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 ___1_metadata, int32_t* ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F PropertyCollection_1_GetEnumerator_mD110577846A15E927B81678F5AC469DCD48BBD15_gshared (PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0CAB6135FEBBB6D7AB7EA4043D8388C2B0811649_gshared (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m22994A3CA91C18DE48E5750DD8D785739BC90B25_gshared_inline (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m11512CF8D275BC9709AD84A8E46D9A512E56B689_gshared (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m91BC8626D79E7B4C9D4A9980B0631651325DE31F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599 (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, RuntimeObject* ___0_value, int32_t* ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB (SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline (JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DF819650B3509475FF723759D53D05F23C6999 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA7D0A6B7D07116F35A4BF94D3C23B25757F14DC3 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m5CB3F617F2C76F727BAE0EAA00E1849C6B787932 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2B312E1148312DC6D476005F841535D41A9F9327_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA1F4A158D3CDE6CA0326AF6AE196F4296A902198 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE651736FFB9D2F9E2A6EBC3AEB89F31CEC4FC30D (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mBFB2AD144330663C18B55DD1FC2A8EF526EBA025_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC6A2E63A68E51944068061F612EE638E72BC8E7B (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m8F7CA8C1377860B4F47CC0D6A28525E64D9517A6_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m273AD0D18397D56AF315DAF57DFB27DD4FD1C1D3 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m0A6B9FF2C17F6D0FC03E49E1820FFFDF376C2E0D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m93B9BE89D187CE4DE54655FC8E79C21A80067FDB (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD3A0269A333398104B2D8BB2FCBB9FD047A119C0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m9CF39153BC92C19681B92DEA9B300FDCD2DDC2F9 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00FFC0A7290C37C26F56C73B18CD79C03035B227 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC2ABCDBBBBA113675F0402269842FE70B678FD71_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mDAEE35FA896DB629D75141A5AC36618AF0B03AFA (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mAA42EE9D99D441D880836C05651372A866971D32 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m2F389ADB2267E3D419A9AD2DA126B5290BF3ACDF (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mBFBF5726A2C5497D9D1DE07C70CCC29919323352 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA3A83B0AB6B296273AE2BDDEB3B9AF841A456880_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBCF956B347277A96F21D9EECE797BC66BFB83804 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m091EB2DAD4CD6350137CA320679128187FDB06BD (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2A50DCF82433DFCE492486D6F3004A4EC66BD8C1 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4CBBE403C9FAEB237D906E8A4C7BFA9D6E8F9D7E (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE7F2A82238BE5DD04149904E4AD61A14F6C7085 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m40060AFB3AF94BC2B971081CB3B2975A14278759 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m283BAA739BE2D12707F064FF6DF9B394EAA8D12D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMigrationCollection_TryGetSerializedVersion_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m14B85EF53C1274C65E96AAABF6A95ABEA1E98871 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method) ;
inline bool TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_TisIl2CppSharedGenericObject_mF099C179BB78F2CCC212F24F0C2DF1C892BE2AD7 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_TisIl2CppSharedGenericObject_mF099C179BB78F2CCC212F24F0C2DF1C892BE2AD7_gshared)(__this, ___0_version, method);
}
inline bool TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_inline (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_gshared_inline)(method);
}
inline bool JsonMigrationCollection_TryGetSerializedVersion_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m0F4E74047BB13DB771C3BAE852BFCE0D924FE0F8 (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* __this, int32_t* ___0_version, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*, int32_t*, const RuntimeMethod*))JsonMigrationCollection_TryGetSerializedVersion_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m0F4E74047BB13DB771C3BAE852BFCE0D924FE0F8_gshared)(__this, ___0_version, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m0E14D06FF7273D8E63F7317E565E783A475AD128 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyWriter_WriteSerializedReference_m9B9B3A6E77C2DDD6E98AD87324031D9D0BF033E7 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, int32_t ___0_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06 (SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteBeginObject_m81F3D6666CC0F032193EFBC6437A783B5794B783 (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyWriter_WriteSerializedContainerMetadata_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m72B969FD5CE30E994FB71B0EB616D7BEFA48CDE6 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_container, SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 ___1_metadata, int32_t* ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteKey_m2FFF47385173E4F4CF341EFCC24FDFC5E8BDAF67 (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 JsonWriter_WriteArrayScope_m2747938413A5F2BC5AA4E8B4491964944B62E7EF (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* __this, String_t* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayScope_Dispose_mD86106F0E27AD77A8D2E88184FB6D950CB493E5F (ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E PropertyCollection_1_GetEnumerator_m910CE7806ED013225B564281DC5F2C0B079E660F (PropertyCollection_1_t040617B38F223B50227895985451E256506B34FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m80BD377ACFAD4C65291987EC687C319D20EA8713 (Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD657CB5BE97EC044573CE0DB5F090695B16EE855_inline (Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C (JsonPropertyVisitor_t27B9275C12D510546E4B38827377643BB3B1856E* __this, RuntimeObject* ___0_property, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946 (PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8BD1C2961323408445D4B846A1628207CBF0F23D (Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEndObject_m30A906403C776CCC63988F1937068B7DB70055A6 (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* __this, const RuntimeMethod* method) ;
inline SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadata_TisIl2CppSharedGenericObject_m4369FC9C592AF0F1FBE04B92C5E35E2E29B5658B (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Il2CppSharedGenericObject** ___0_container, const RuntimeMethod* method)
{
	return ((  SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 (*) (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231*, Il2CppSharedGenericObject**, const RuntimeMethod*))JsonPropertyWriter_GetSerializedContainerMetadata_TisIl2CppSharedGenericObject_m4369FC9C592AF0F1FBE04B92C5E35E2E29B5658B_gshared)(__this, ___0_container, method);
}
inline void JsonPropertyWriter_WriteSerializedContainerMetadata_TisIl2CppSharedGenericObject_m6B502AE5EDA42F8CE45085E1862BF0D0516B9476 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Il2CppSharedGenericObject** ___0_container, SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 ___1_metadata, int32_t* ___2_count, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231*, Il2CppSharedGenericObject**, SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98, int32_t*, const RuntimeMethod*))JsonPropertyWriter_WriteSerializedContainerMetadata_TisIl2CppSharedGenericObject_m6B502AE5EDA42F8CE45085E1862BF0D0516B9476_gshared)(__this, ___0_container, ___1_metadata, ___2_count, method);
}
inline Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F PropertyCollection_1_GetEnumerator_mD110577846A15E927B81678F5AC469DCD48BBD15 (PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F (*) (PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mD110577846A15E927B81678F5AC469DCD48BBD15_gshared)(__this, method);
}
inline void Enumerator_Dispose_m0CAB6135FEBBB6D7AB7EA4043D8388C2B0811649 (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F*, const RuntimeMethod*))Enumerator_Dispose_m0CAB6135FEBBB6D7AB7EA4043D8388C2B0811649_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m22994A3CA91C18DE48E5750DD8D785739BC90B25_inline (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F*, const RuntimeMethod*))Enumerator_get_Current_m22994A3CA91C18DE48E5750DD8D785739BC90B25_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m11512CF8D275BC9709AD84A8E46D9A512E56B689 (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F*, const RuntimeMethod*))Enumerator_MoveNext_m11512CF8D275BC9709AD84A8E46D9A512E56B689_gshared)(__this, method);
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mA048CC6621B9A87306F71F880E8D7A2EDF591B19 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m91BC8626D79E7B4C9D4A9980B0631651325DE31F_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_17 = ___0_container;
		Il2CppFakeBox<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_21 = ___0_container;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DF819650B3509475FF723759D53D05F23C6999(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m90F6FC8DC1D9D8BE218D2CDE8D06A40D169E962E (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mEDABDCDB8DF7B9D5EF12FF99326AEDDAE212E7C0_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_17 = ___0_container;
		Il2CppFakeBox<Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_21 = ___0_container;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_22 = (*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_21);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mA7D0A6B7D07116F35A4BF94D3C23B25757F14DC3(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m4837F548252CC3B7907FEEDC5130EDDF66FBFEAC (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mFD19BE22C91DFC05260F1AA812448E708E0FAFE3_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_17 = ___0_container;
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_21 = ___0_container;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_22 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_21);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m5CB3F617F2C76F727BAE0EAA00E1849C6B787932(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5BC1F3C3A6B09C5C666DDBC3AD6CE1B1C9555644 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, int8_t* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	int8_t V_5 = 0x0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	int8_t* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		int8_t* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(int8_t));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<int8_t> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m2B312E1148312DC6D476005F841535D41A9F9327_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		int8_t* L_17 = ___0_container;
		Il2CppFakeBox<int8_t> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		int8_t* L_21 = ___0_container;
		int8_t L_22 = (*(int8_t*)L_21);
		int8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA1F4A158D3CDE6CA0326AF6AE196F4296A902198(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m5FA4AF50CFA9A14A27B5DD31569D456A00B0D54D (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mC7D50F5D193AA2EF3F84648A392176B9A906180A_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_17 = ___0_container;
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_21 = ___0_container;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_22 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_21);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE651736FFB9D2F9E2A6EBC3AEB89F31CEC4FC30D(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m4149594C8C62312A73A61B38380AF9E09588DE62 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mBFB2AD144330663C18B55DD1FC2A8EF526EBA025_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_17 = ___0_container;
		Il2CppFakeBox<SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_21 = ___0_container;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_22 = (*(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C*)L_21);
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mC6A2E63A68E51944068061F612EE638E72BC8E7B(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m0F744B1DE5A6B83CF9E2C7EF13C124C1F00E8108 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m8F7CA8C1377860B4F47CC0D6A28525E64D9517A6_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_17 = ___0_container;
		Il2CppFakeBox<SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_21 = ___0_container;
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_22 = (*(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD*)L_21);
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m273AD0D18397D56AF315DAF57DFB27DD4FD1C1D3(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m3A56B8E77E291AC47B1C779B7A98823423A0663E (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m0A6B9FF2C17F6D0FC03E49E1820FFFDF376C2E0D_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_17 = ___0_container;
		Il2CppFakeBox<SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_21 = ___0_container;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_22 = (*(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A*)L_21);
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m93B9BE89D187CE4DE54655FC8E79C21A80067FDB(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_mD3B6FCDF93E83A9F344822CC4FC5BDF966F4D944 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mD3A0269A333398104B2D8BB2FCBB9FD047A119C0_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* L_17 = ___0_container;
		Il2CppFakeBox<SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* L_21 = ___0_container;
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_22 = (*(SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F*)L_21);
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m9CF39153BC92C19681B92DEA9B300FDCD2DDC2F9(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDFC8115EB621C3B90DAEEBAA9DEEC8E9B952B603 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, float* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	float* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		float* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(float));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<float> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		float* L_17 = ___0_container;
		Il2CppFakeBox<float> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		float* L_21 = ___0_container;
		float L_22 = (*(float*)L_21);
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00FFC0A7290C37C26F56C73B18CD79C03035B227(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m26F874CDAD0189117AE10F6ADBD694144C944222 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m73DDE09E2C01B3DF5142420E2426E2A515C308C8_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_17 = ___0_container;
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_21 = ___0_container;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_22 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_21);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mDD61931C1B047D44EFD1C54158194AFE517CEEAA(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mFF5CAEA1EA5258297FA5476ED39022DF454039F5 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m056052FE7567159FC8E6E245B57CCF22EAFB9A0C_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_17 = ___0_container;
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_21 = ___0_container;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_22 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_21);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m83FC6ADAF40A2737CFC01503A6E925AEF1F2D820(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m3F77B7D602A4199B3C7738AC5E3FC2EA761FB531 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mCF6752FCDB191E6473D9F399BF25CE84E02C61B3_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_17 = ___0_container;
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_21 = ___0_container;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_22 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_21);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m7386FE58D1B6D5928CAAFFB503CD812A45542428(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mC28F8DD698660D5415C143B1BE263A5B1A10FAE4 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m56D7A6A534892EC5D12D9A62CF04B0A27D3BD35B_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_17 = ___0_container;
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_21 = ___0_container;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_22 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_21);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m98E585835D34CCB96B16F30DD0220D0BD78658B2(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_mF9E2572F6A0F96CBCCC46D15B3BCC092F7F2C6F6 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m914EFA8D02D4B138FB957D9FFF73248121E5D2C0_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_17 = ___0_container;
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_21 = ___0_container;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_22 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_21);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m1B6AB5F94246287C5D81FF26E57AC66133EDC960(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mF41B4EF2F701A1CBB75E4A87C61111A9440FF237 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mC864FBD8DC0E7F1EA00C328D2FDEACC7CD9DF1A4_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_17 = ___0_container;
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_21 = ___0_container;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_22 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_21);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m33FB5DB5DD3B2970869A7DE90B38ED0930E2002C(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m56B46DB1BDD1BC9C8422368C0D4BF179E9FD4D13 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m071C355797B42D5CCB33F14B83229C2C0D11580A_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_17 = ___0_container;
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_21 = ___0_container;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_22 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_21);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m8E45D555F23AF25A0D9ED79700D2FEECB7CF7872(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mEB1792D144B4331E4C97454E4A627F838EA5AECD (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m9BCC29E05C59AD59DAE817B570638E3899BD6523_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_17 = ___0_container;
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_21 = ___0_container;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_22 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_21);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mB7431DCBEDEFF111011CA9517BBB631428308519(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m5E4FBAAFB00BEB4C268C9BE3B05520470D010BB0 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m0F180F5B26765420CF3E3E12F04CA3225153AFCA_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_17 = ___0_container;
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_21 = ___0_container;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_22 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_21);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m1B8BFA4C9BD8DFC817394CD997A8F159C7A3FD81(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m12046EC658E8AF005EB1B5604AF009A9E114C463 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mE15BF77911B4BEB5D3725CFAC54F480025A030CE_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_17 = ___0_container;
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_21 = ___0_container;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_22 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_21);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m0D6C5E742F85F1575A901E2CDB3769A270CAB113(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m2AC54FD166656FDECD9C28B0DD877A230F3493D6 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m434194C02E674305D5939C3FB4388F1A60128356_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_17 = ___0_container;
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_21 = ___0_container;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_22 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_21);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m012405968D1304341EE78DE223F7A48FB5451B7D(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mCFDF3B11723AB7CFD675796502286F585AA7D825 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m2CE32CECBCD3926785800F99E788E1D2699B50EE_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_17 = ___0_container;
		Il2CppFakeBox<StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_21 = ___0_container;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_22 = (*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_21);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m8E777BA813D4666A35C41D9A5387DE4DB9F4C3F6(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mA9E31B4979680B174DA58B0F0B7CA68E1173DFA7 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mB64CD1414AA6476F61F0C3568F12424180F97654_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_17 = ___0_container;
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_21 = ___0_container;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_22 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_21);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m30A270989DB143BC69EBDA624ECFAA0C04EE7C05(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mB649EB6961699F1B2D7E0626A853E49DDEEBEA81 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m0C992DEC9905066BAE5FF2F1639512D639290CE0_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_17 = ___0_container;
		Il2CppFakeBox<StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_21 = ___0_container;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_22 = (*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_21);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m1A3F8F7F986E5F79443EA32C0B2BA0B0685CF714(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mF36215A7E507CE34D1621F6BE7AACF38D571843A (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m2E1C8DF463CE67BB42937B640C27F546CAB0DE93_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_17 = ___0_container;
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_21 = ___0_container;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_22 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_21);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m32C6D30C386B6E438683C0360696117CDD1E20F8(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m378A63286A88F2FFF409C3908B9AA9240699281C (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m98BDAC1965215084D492BD054E3438503B1F8176_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_17 = ___0_container;
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_21 = ___0_container;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_22 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_21);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m4D2A18658522FE673F4E477CAF4878C2DD1C702E(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA6F6089731B8BCBD08AF5E9DCD150C7B24606140 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mED374436C1B6E9A3F918CA701AF2A6827FF19678_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_17 = ___0_container;
		Il2CppFakeBox<StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_21 = ___0_container;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_22 = (*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_21);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mB30352A507841B59CEEE6FBF7D3B081736DB8269(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m476CDF6B288150FE6E0D964821094D55AF786D6C (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mD7AD2570031FF055D5EB8EC2F245A5A638022D20_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_17 = ___0_container;
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_21 = ___0_container;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_22 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_21);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mE01733076CC927D6624527037712FC3C52E98CCD(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m61109E4ABDB25C383BE303D58C54684945A81749 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m772EE1B98C79503AD94637C553736BDDA5E113E4_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_17 = ___0_container;
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_21 = ___0_container;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_22 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_21);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m2EAD1BBCEBC9B3ECCC8A058D7A2BF5EAE3F283DF(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m5F54885C2C79ED2986994104928855521D526BA4 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m472AD8D1120723C7E282C958A563BAB1A9843EB4_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_17 = ___0_container;
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_21 = ___0_container;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_22 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_21);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m830983F662C903FF252D67F2135458E8871225BA(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m94CCB373D4137A14519690DA851F2C64DF6CDFE7 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mE959270386DDBD289CF70FAC36A02D47138982E7_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_17 = ___0_container;
		Il2CppFakeBox<StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_21 = ___0_container;
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_22 = (*(StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_21);
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mF5494B869B8E56F9584715B5A503AF52938ACC9B(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m6D903076FEC732A7E5884D93291831E1BC0A1E6F (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m15B1AE289464971DBDC830413B4BE396233A5A28_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_17 = ___0_container;
		Il2CppFakeBox<TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_21 = ___0_container;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_22 = (*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_21);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m09DC351DA422FB2626B12838F5FFED98C5EC4F48(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m5289F8389658E70A49267A52EDB87B402CE33AC9 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m6D68904DCEC1B9E468B23D863D622ED2F08B3ACB_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_17 = ___0_container;
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_21 = ___0_container;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_22 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_21);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m618608405C88E438B580204CACF3CC4009F87AAE(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m6897CBFC745AA16136B5BBA6A14415FAED9987CB (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mC2ABCDBBBBA113675F0402269842FE70B678FD71_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_17 = ___0_container;
		Il2CppFakeBox<TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21 = ___0_container;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_22 = (*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_21);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mDAEE35FA896DB629D75141A5AC36618AF0B03AFA(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m7B313102C19E2F3A636CB40E965DF71D7A0C2A16 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_17 = ___0_container;
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_21 = ___0_container;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_22 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_21);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mAA42EE9D99D441D880836C05651372A866971D32(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC17F142018D15A8C24180EE1CCAD0941EDB48203 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_17 = ___0_container;
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_21 = ___0_container;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_22 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_21);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m2F389ADB2267E3D419A9AD2DA126B5290BF3ACDF(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m1DE367FE2CD50128A85FE15E344A9ABF0CB8685E (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_17 = ___0_container;
		Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_21 = ___0_container;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_22 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_21);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_mBFBF5726A2C5497D9D1DE07C70CCC29919323352(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFCE41B411FA06E41B27C89149128B932C97D0E4C (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, uint16_t* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	uint16_t V_5 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	uint16_t* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		uint16_t* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(uint16_t));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<uint16_t> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mA3A83B0AB6B296273AE2BDDEB3B9AF841A456880_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		uint16_t* L_17 = ___0_container;
		Il2CppFakeBox<uint16_t> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		uint16_t* L_21 = ___0_container;
		uint16_t L_22 = (*(uint16_t*)L_21);
		uint16_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBCF956B347277A96F21D9EECE797BC66BFB83804(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m908644B899295FC4FDB137FDBE5E32473C6002D0 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, uint32_t* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	uint32_t* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		uint32_t* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(uint32_t));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<uint32_t> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		uint32_t* L_17 = ___0_container;
		Il2CppFakeBox<uint32_t> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		uint32_t* L_21 = ___0_container;
		uint32_t L_22 = (*(uint32_t*)L_21);
		uint32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m091EB2DAD4CD6350137CA320679128187FDB06BD(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBADE98B162B005FD87104D7515CBBA7FFB04681C (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, uint64_t* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	uint64_t V_5 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	uint64_t* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		uint64_t* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(uint64_t));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<uint64_t> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		uint64_t* L_17 = ___0_container;
		Il2CppFakeBox<uint64_t> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		uint64_t* L_21 = ___0_container;
		uint64_t L_22 = (*(uint64_t*)L_21);
		uint64_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2A50DCF82433DFCE492486D6F3004A4EC66BD8C1(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mC304F8ECF561D75AB769424C7CB65E5EB656BFF0 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = ___0_container;
		Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = ___0_container;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4CBBE403C9FAEB237D906E8A4C7BFA9D6E8F9D7E(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m05D048A29E0E5A2805F55E10950A42486D9EFD26 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___0_container;
		Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___0_container;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mFE7F2A82238BE5DD04149904E4AD61A14F6C7085(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m53C850D2E94F345EE90C96BF19DC6AEFDA175C4C (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_17 = ___0_container;
		Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_21 = ___0_container;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_22 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_21);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m40060AFB3AF94BC2B971081CB3B2975A14278759(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB462B4A420EECF9F9773198E97B279F45157F530 (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B3_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_m283BAA739BE2D12707F064FF6DF9B394EAA8D12D_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_17 = ___0_container;
		Il2CppFakeBox<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_21 = ___0_container;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_21);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m14B85EF53C1274C65E96AAABF6A95ABEA1E98871(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisIl2CppSharedGenericObject_mF7B3821E9D536EA6FB94714718C91ECBF7D58746_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Il2CppSharedGenericObject** ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Il2CppSharedGenericObject* V_5 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Il2CppSharedGenericObject** G_B3_0 = NULL;
	Il2CppSharedGenericObject** G_B1_0 = NULL;
	Il2CppSharedGenericObject** G_B2_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Il2CppSharedGenericObject** L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_5;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_0028;
		}
		G_B1_0 = L_0;
	}
	{
		Il2CppSharedGenericObject* L_2 = (*(Il2CppSharedGenericObject**)G_B1_0);
		V_5 = L_2;
		Il2CppSharedGenericObject* L_3 = V_5;
		if (L_3)
		{
			G_B3_0 = (&V_5);
			goto IL_0028;
		}
		G_B2_0 = (&V_5);
	}
	{
		G_B4_0 = ((Type_t*)(NULL));
		goto IL_0033;
	}

IL_0028:
	{
		NullCheck((RuntimeObject*)(*G_B3_0));
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0033:
	{
		Type_t* L_5 = G_B4_0;
		if (L_5)
		{
			G_B6_0 = L_5;
			goto IL_0041;
		}
		G_B5_0 = L_5;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		G_B6_0 = L_7;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_8 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (L_11)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_16 = V_6;
		return L_16;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_17;
		L_17 = TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_17)
		{
			goto IL_00f7;
		}
	}
	{
		Il2CppSharedGenericObject** L_18 = ___0_container;
		NullCheck((RuntimeObject*)(*L_18));
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((RuntimeObject*)(*L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		Il2CppSharedGenericObject** L_21 = ___0_container;
		Il2CppSharedGenericObject* L_22 = (*(Il2CppSharedGenericObject**)L_21);
		V_7 = (RuntimeObject*)L_22;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_23 = __this->___m_SerializedReferences;
		if (!L_23)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_24 = __this->___m_SerializedReferences;
		RuntimeObject* L_25 = V_7;
		NullCheck(L_24);
		bool L_26;
		L_26 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_24, L_25, (&V_8), NULL);
		if (!L_26)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_27 = __this->___m_SerializedReferences;
		RuntimeObject* L_28 = V_7;
		NullCheck(L_27);
		bool L_29;
		L_29 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_27, L_28, NULL);
		if (L_29)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_30 = V_8;
		(&V_6)->___SerializedId = L_30;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_31 = V_6;
		return L_31;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_32 = V_8;
		(&V_1)->___SerializedId = L_32;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_33;
		L_33 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_33, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_34 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_35;
		L_35 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_34, NULL);
		G_B20_0 = ((int32_t)(L_35));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_36;
		L_36 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_36);
		Type_t* L_37;
		L_37 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_36);
		V_3 = L_37;
		Type_t* L_38 = V_0;
		Type_t* L_39 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_40;
		L_40 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_38, L_39, NULL);
		if (!L_40)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_41 = V_2;
		if (L_41)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_42 = V_3;
		Type_t* L_43;
		L_43 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_42, NULL);
		Type_t* L_44 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_45;
		L_45 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_43, L_44, NULL);
		G_B24_0 = ((int32_t)(L_45));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_46 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_47;
		L_47 = JsonMigrationCollection_TryGetSerializedVersion_TisIl2CppSharedGenericObject_mF099C179BB78F2CCC212F24F0C2DF1C892BE2AD7(L_46, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_47;
		int32_t L_48 = V_4;
		(&V_1)->___SerializedVersion = L_48;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_49 = V_1;
		return L_49;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_TisIl2CppFullySharedGenericAny_m0701336EBA5D6E74A6C42C97EA62365363F8513D_fshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, Il2CppFullySharedGenericAny* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	const Il2CppFullySharedGenericAny L_32 = L_1;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
	memset(V_5, 0, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
	memset(G_B2_0, 0, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
		il2cpp_codegen_memcpy(L_1, V_5, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		if (L_2)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)L_0);
			goto IL_0028;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)L_0);
	}
	{
		il2cpp_codegen_memcpy(L_3, G_B1_0, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
		il2cpp_codegen_memcpy(V_5, L_3, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
		il2cpp_codegen_memcpy(L_4, V_5, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_5);
			goto IL_0028;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
	}
	{
		G_B4_0 = ((Type_t*)(NULL));
		goto IL_0033;
	}

IL_0028:
	{
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)G_B3_0, &L_7, L_6);
		typedef Type_t* ( *func_L_9)(void*,const RuntimeMethod*);
		Type_t* L_10 = ((func_L_9)L_8)(L_7.thisPtr,L_7.method);
		G_B4_0 = L_10;
	}

IL_0033:
	{
		Type_t* L_11 = G_B4_0;
		if (L_11)
		{
			G_B6_0 = L_11;
			goto IL_0041;
		}
		G_B5_0 = L_11;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		G_B6_0 = L_13;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		if (L_17)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_22 = V_6;
		return L_22;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_23;
		L_23 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_23)
		{
			goto IL_00f7;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_24 = ___0_container;
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)L_24, &L_26, L_25);
		typedef Type_t* ( *func_L_28)(void*,const RuntimeMethod*);
		Type_t* L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		NullCheck(L_29);
		bool L_30;
		L_30 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_29, NULL);
		if (L_30)
		{
			goto IL_00f7;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_31 = ___0_container;
		il2cpp_codegen_memcpy(L_32, L_31, SizeOf_TContainer_t3B8A268BBBFEC018C7C4254D44027C8EE7CEE954);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_32);
		V_7 = L_33;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_34 = __this->___m_SerializedReferences;
		if (!L_34)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_35 = __this->___m_SerializedReferences;
		RuntimeObject* L_36 = V_7;
		NullCheck(L_35);
		bool L_37;
		L_37 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_35, L_36, (&V_8), NULL);
		if (!L_37)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_38 = __this->___m_SerializedReferences;
		RuntimeObject* L_39 = V_7;
		NullCheck(L_38);
		bool L_40;
		L_40 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_38, L_39, NULL);
		if (L_40)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_41 = V_8;
		(&V_6)->___SerializedId = L_41;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_42 = V_6;
		return L_42;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_43 = V_8;
		(&V_1)->___SerializedId = L_43;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_44;
		L_44 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_44, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_45 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_46;
		L_46 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_45, NULL);
		G_B20_0 = ((int32_t)(L_46));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_47;
		L_47 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_47);
		Type_t* L_48;
		L_48 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_47);
		V_3 = L_48;
		Type_t* L_49 = V_0;
		Type_t* L_50 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_51;
		L_51 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_49, L_50, NULL);
		if (!L_51)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_52 = V_2;
		if (L_52)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_53 = V_3;
		Type_t* L_54;
		L_54 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_53, NULL);
		Type_t* L_55 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_56;
		L_56 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_54, L_55, NULL);
		G_B24_0 = ((int32_t)(L_56));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_57 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_58;
		L_58 = ((  bool (*) (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_57, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_58;
		int32_t L_59 = V_4;
		(&V_1)->___SerializedVersion = L_59;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_60 = V_1;
		return L_60;
	}
}
// Method Definition Index: 87486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 JsonPropertyWriter_GetSerializedContainerMetadataCustomWithAllocation_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mAFAB23D2B12AD62EA90D142827EA6FC4E5CC3B5B_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, int32_t* ___0_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit);
	//<source_info:<no-source>:1>
	Type_t* V_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Type_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t* G_B3_0 = 0;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	int32_t G_B20_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B23_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B21_0 = NULL;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98* G_B24_1 = NULL;
	{
		int32_t* L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
		G_B3_0 = L_0;
		goto IL_0028;
	}

IL_0028:
	{
		Il2CppFakeBox<int32_t> L_2(il2cpp_rgctx_data(method->rgctx_data, 0), *G_B3_0);
		Type_t* L_3;
		L_3 = il2cpp_codegen_object_get_type((&L_2));
		G_B4_0 = L_3;
	}

IL_0033:
	{
		Type_t* L_4 = G_B4_0;
		if (L_4)
		{
			G_B6_0 = L_4;
			goto IL_0041;
		}
		G_B5_0 = L_4;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonObject_t135E6574C0D49F99B0C128A0E3898CDD52480F7A_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (L_10)
		{
			goto IL_0066;
		}
	}
	{
		Type_t* L_11 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (JsonArray_tBDE7DCDC5FBAF2B3EEF6FE1E307A0C8F192EF406_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}

IL_0066:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_15 = V_6;
		return L_15;
	}

IL_0071:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		CHECKED_LOCAL_INIT(TypeTraits_1_t06D5D3D16EFC75AFFF54CE7CDDE9A46A6D32EBB1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 4)),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		if (L_16)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t* L_17 = ___0_container;
		Il2CppFakeBox<int32_t> L_18(il2cpp_rgctx_data(method->rgctx_data, 0), *L_17);
		Type_t* L_19;
		L_19 = il2cpp_codegen_object_get_type((&L_18));
		NullCheck(L_19);
		bool L_20;
		L_20 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_19, NULL);
		if (L_20)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t* L_21 = ___0_container;
		int32_t L_22 = (*(int32_t*)L_21);
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_23);
		V_7 = L_24;
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_25 = __this->___m_SerializedReferences;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_26 = __this->___m_SerializedReferences;
		RuntimeObject* L_27 = V_7;
		NullCheck(L_26);
		bool L_28;
		L_28 = SerializedReferences_TryGetSerializedReference_m776E27E8E162F94DC5FF858E408D323BBE44C599(L_26, L_27, (&V_8), NULL);
		if (!L_28)
		{
			goto IL_00ff;
		}
	}
	{
		SerializedReferences_tC41F0FB04D792BE272F8049DC48557C7350AD750* L_29 = __this->___m_SerializedReferences;
		RuntimeObject* L_30 = V_7;
		NullCheck(L_29);
		bool L_31;
		L_31 = SerializedReferences_SetSerialized_mCA94A5CC8ABA4BC989929DDF0ACC88E8663DEBCB(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00e4;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98));
		(&V_6)->___IsSerializedReference = (bool)1;
		int32_t L_32 = V_8;
		(&V_6)->___SerializedId = L_32;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_33 = V_6;
		return L_33;
	}

IL_00e4:
	{
		(&V_1)->___HasSerializedId = (bool)1;
		int32_t L_34 = V_8;
		(&V_1)->___SerializedId = L_34;
		goto IL_00ff;
	}

IL_00f7:
	{
		(&V_1)->___SerializedId = (-1);
	}

IL_00ff:
	{
		RuntimeObject* L_35;
		L_35 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPropertyWrapper_t1F45B0B148C92FD6744777E3027003D946E510B3_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		Type_t* L_36 = __this->___m_SerializedType;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172((Type_t*)NULL, L_36, NULL);
		G_B20_0 = ((int32_t)(L_37));
		goto IL_011b;
	}

IL_011a:
	{
		G_B20_0 = 0;
	}

IL_011b:
	{
		V_2 = (bool)G_B20_0;
		RuntimeObject* L_38;
		L_38 = JsonPropertyVisitor_get_Property_m7B8F07B85AAB78FB78F477C0A4B8C75052EC3E9B_inline(__this, NULL);
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, L_38);
		V_3 = L_39;
		Type_t* L_40 = V_0;
		Type_t* L_41 = V_3;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_42;
		L_42 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_40, L_41, NULL);
		if (!L_42)
		{
			G_B23_0 = (&V_1);
			goto IL_0144;
		}
		G_B21_0 = (&V_1);
	}
	{
		bool L_43 = V_2;
		if (L_43)
		{
			G_B23_0 = G_B21_0;
			goto IL_0144;
		}
		G_B22_0 = G_B21_0;
	}
	{
		Type_t* L_44 = V_3;
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		Type_t* L_46 = V_0;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_47;
		L_47 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_45, L_46, NULL);
		G_B24_0 = ((int32_t)(L_47));
		G_B24_1 = G_B22_0;
		goto IL_0145;
	}

IL_0144:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
	}

IL_0145:
	{
		G_B24_1->___HasSerializedType = (bool)G_B24_0;
		JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548* L_48 = (JsonMigrationCollection_tC3E7474943217BF0A93EF290E6E172CA4B074548*)(&__this->___m_Migrations);
		bool L_49;
		L_49 = JsonMigrationCollection_TryGetSerializedVersion_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m0F4E74047BB13DB771C3BAE852BFCE0D924FE0F8(L_48, (&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
		(&V_1)->___HasSerializedVersion = L_49;
		int32_t L_50 = V_4;
		(&V_1)->___SerializedVersion = L_50;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_51 = V_1;
		return L_51;
	}
}
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87486
// Method Definition Index: 87492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyWriter_Unity_Properties_ICollectionPropertyBagVisitor_Visit_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m8B16A345A4679464D977E74F6713A6AA724E3F9F (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, RuntimeObject* ___0_properties, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E V_3;
	memset((&V_3), 0, sizeof(V_3));
	PropertyCollection_1_t040617B38F223B50227895985451E256506B34FF V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_0 = ___1_container;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_1;
		L_1 = JsonPropertyWriter_GetSerializedContainerMetadata_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m0E14D06FF7273D8E63F7317E565E783A475AD128(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_2 = V_0;
		bool L_3 = L_2.___IsSerializedReference;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_4 = V_0;
		int32_t L_5 = L_4.___SerializedId;
		JsonPropertyWriter_WriteSerializedReference_m9B9B3A6E77C2DDD6E98AD87324031D9D0BF033E7(__this, L_5, NULL);
		return;
	}

IL_001d:
	{
		V_1 = 0;
		bool L_6;
		L_6 = SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06((&V_0), NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_7 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteBeginObject_m81F3D6666CC0F032193EFBC6437A783B5794B783(L_7, (String_t*)NULL, NULL);
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_8 = ___1_container;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_9 = V_0;
		JsonPropertyWriter_WriteSerializedContainerMetadata_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m72B969FD5CE30E994FB71B0EB616D7BEFA48CDE6(__this, L_8, L_9, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_10 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteKey_m2FFF47385173E4F4CF341EFCC24FDFC5E8BDAF67(L_10, _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
	}

IL_004e:
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_11 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 L_12;
		L_12 = JsonWriter_WriteArrayScope_m2747938413A5F2BC5AA4E8B4491964944B62E7EF(L_11, (String_t*)NULL, NULL);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				ArrayScope_Dispose_mD86106F0E27AD77A8D2E88184FB6D950CB493E5F((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeObject* L_13 = ___0_properties;
				SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_14 = ___1_container;
				NullCheck(L_13);
				PropertyCollection_1_t040617B38F223B50227895985451E256506B34FF L_15;
				L_15 = InterfaceFuncInvoker1< PropertyCollection_1_t040617B38F223B50227895985451E256506B34FF, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_13, L_14);
				V_4 = L_15;
				Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E L_16;
				L_16 = PropertyCollection_1_GetEnumerator_m910CE7806ED013225B564281DC5F2C0B079E660F((&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
				V_3 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a5_1:
					{
						Enumerator_Dispose_m80BD377ACFAD4C65291987EC687C319D20EA8713((&V_3), il2cpp_rgctx_method(method->rgctx_data, 11));
						return;
					}
				});
				try
				{
					{
						goto IL_009a_2;
					}

IL_006e_2:
					{
						RuntimeObject* L_17;
						L_17 = Enumerator_get_Current_mD657CB5BE97EC044573CE0DB5F090695B16EE855_inline((&V_3), NULL);
						V_5 = L_17;
						RuntimeObject* L_18 = V_5;
						PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_19;
						L_19 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, L_18, NULL);
						V_6 = L_19;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008c_2:
							{
								PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_6), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_20 = V_5;
							SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_21 = ___1_container;
							NullCheck(L_20);
							InterfaceActionInvoker2< RuntimeObject*, SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 8), L_20, __this, L_21);
							goto IL_009a_2;
						}
						catch(Il2CppNativeThreadAbortException&)
						{
							__finallyBlock.SetNativeThreadAbortOccurred();
						}
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_009a_2:
					{
						bool L_22;
						L_22 = Enumerator_MoveNext_m8BD1C2961323408445D4B846A1628207CBF0F23D((&V_3), il2cpp_rgctx_method(method->rgctx_data, 10));
						if (L_22)
						{
							goto IL_006e_2;
						}
					}
					{
						goto IL_00c1;
					}
				}
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

IL_00c1:
	{
		bool L_23;
		L_23 = SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06((&V_0), NULL);
		if (!L_23)
		{
			goto IL_00d5;
		}
	}
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_24 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteEndObject_m30A906403C776CCC63988F1937068B7DB70055A6(L_24, NULL);
	}

IL_00d5:
	{
		return;
	}
}
// Method Definition Index: 87492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyWriter_Unity_Properties_ICollectionPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m6E350B7F36889AE87BCE3B98549A6662A4AB79A8_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F V_3;
	memset((&V_3), 0, sizeof(V_3));
	PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		Il2CppSharedGenericObject** L_0 = ___1_container;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_1;
		L_1 = JsonPropertyWriter_GetSerializedContainerMetadata_TisIl2CppSharedGenericObject_m4369FC9C592AF0F1FBE04B92C5E35E2E29B5658B(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_2 = V_0;
		bool L_3 = L_2.___IsSerializedReference;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_4 = V_0;
		int32_t L_5 = L_4.___SerializedId;
		JsonPropertyWriter_WriteSerializedReference_m9B9B3A6E77C2DDD6E98AD87324031D9D0BF033E7(__this, L_5, NULL);
		return;
	}

IL_001d:
	{
		V_1 = 0;
		bool L_6;
		L_6 = SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06((&V_0), NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_7 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteBeginObject_m81F3D6666CC0F032193EFBC6437A783B5794B783(L_7, (String_t*)NULL, NULL);
		Il2CppSharedGenericObject** L_8 = ___1_container;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_9 = V_0;
		JsonPropertyWriter_WriteSerializedContainerMetadata_TisIl2CppSharedGenericObject_m6B502AE5EDA42F8CE45085E1862BF0D0516B9476(__this, L_8, L_9, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_10 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteKey_m2FFF47385173E4F4CF341EFCC24FDFC5E8BDAF67(L_10, _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
	}

IL_004e:
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_11 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 L_12;
		L_12 = JsonWriter_WriteArrayScope_m2747938413A5F2BC5AA4E8B4491964944B62E7EF(L_11, (String_t*)NULL, NULL);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				ArrayScope_Dispose_mD86106F0E27AD77A8D2E88184FB6D950CB493E5F((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeObject* L_13 = ___0_properties;
				Il2CppSharedGenericObject** L_14 = ___1_container;
				NullCheck((RuntimeObject*)L_13);
				PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0 L_15;
				L_15 = InterfaceFuncInvoker1< PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0, Il2CppSharedGenericObject** >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_13, L_14);
				V_4 = L_15;
				Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F L_16;
				L_16 = PropertyCollection_1_GetEnumerator_mD110577846A15E927B81678F5AC469DCD48BBD15((&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
				V_3 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a5_1:
					{
						Enumerator_Dispose_m0CAB6135FEBBB6D7AB7EA4043D8388C2B0811649((&V_3), il2cpp_rgctx_method(method->rgctx_data, 11));
						return;
					}
				});
				try
				{
					{
						goto IL_009a_2;
					}

IL_006e_2:
					{
						RuntimeObject* L_17;
						L_17 = Enumerator_get_Current_m22994A3CA91C18DE48E5750DD8D785739BC90B25_inline((&V_3), NULL);
						V_5 = L_17;
						RuntimeObject* L_18 = V_5;
						PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_19;
						L_19 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_18, NULL);
						V_6 = L_19;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008c_2:
							{
								PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_6), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_20 = V_5;
							Il2CppSharedGenericObject** L_21 = ___1_container;
							NullCheck((RuntimeObject*)L_20);
							InterfaceActionInvoker2< RuntimeObject*, Il2CppSharedGenericObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 8), (RuntimeObject*)L_20, __this, L_21);
							goto IL_009a_2;
						}
						catch(Il2CppNativeThreadAbortException&)
						{
							__finallyBlock.SetNativeThreadAbortOccurred();
						}
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_009a_2:
					{
						bool L_22;
						L_22 = Enumerator_MoveNext_m11512CF8D275BC9709AD84A8E46D9A512E56B689((&V_3), il2cpp_rgctx_method(method->rgctx_data, 10));
						if (L_22)
						{
							goto IL_006e_2;
						}
					}
					{
						goto IL_00c1;
					}
				}
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

IL_00c1:
	{
		bool L_23;
		L_23 = SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06((&V_0), NULL);
		if (!L_23)
		{
			goto IL_00d5;
		}
	}
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_24 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteEndObject_m30A906403C776CCC63988F1937068B7DB70055A6(L_24, NULL);
	}

IL_00d5:
	{
		return;
	}
}
// Method Definition Index: 87492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyWriter_Unity_Properties_ICollectionPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m9652436D4989C8D862C7230E88E4B552F878CEB7_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F V_3;
	memset((&V_3), 0, sizeof(V_3));
	PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		Il2CppSharedGenericObject** L_0 = ___1_container;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_1;
		L_1 = JsonPropertyWriter_GetSerializedContainerMetadata_TisIl2CppSharedGenericObject_m4369FC9C592AF0F1FBE04B92C5E35E2E29B5658B(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_2 = V_0;
		bool L_3 = L_2.___IsSerializedReference;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_4 = V_0;
		int32_t L_5 = L_4.___SerializedId;
		JsonPropertyWriter_WriteSerializedReference_m9B9B3A6E77C2DDD6E98AD87324031D9D0BF033E7(__this, L_5, NULL);
		return;
	}

IL_001d:
	{
		V_1 = 0;
		bool L_6;
		L_6 = SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06((&V_0), NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_7 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteBeginObject_m81F3D6666CC0F032193EFBC6437A783B5794B783(L_7, (String_t*)NULL, NULL);
		Il2CppSharedGenericObject** L_8 = ___1_container;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_9 = V_0;
		JsonPropertyWriter_WriteSerializedContainerMetadata_TisIl2CppSharedGenericObject_m6B502AE5EDA42F8CE45085E1862BF0D0516B9476(__this, L_8, L_9, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_10 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteKey_m2FFF47385173E4F4CF341EFCC24FDFC5E8BDAF67(L_10, _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
	}

IL_004e:
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_11 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 L_12;
		L_12 = JsonWriter_WriteArrayScope_m2747938413A5F2BC5AA4E8B4491964944B62E7EF(L_11, (String_t*)NULL, NULL);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				ArrayScope_Dispose_mD86106F0E27AD77A8D2E88184FB6D950CB493E5F((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeObject* L_13 = ___0_properties;
				Il2CppSharedGenericObject** L_14 = ___1_container;
				NullCheck((RuntimeObject*)L_13);
				PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0 L_15;
				L_15 = InterfaceFuncInvoker1< PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0, Il2CppSharedGenericObject** >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_13, L_14);
				V_4 = L_15;
				Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F L_16;
				L_16 = PropertyCollection_1_GetEnumerator_mD110577846A15E927B81678F5AC469DCD48BBD15((&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
				V_3 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a5_1:
					{
						Enumerator_Dispose_m0CAB6135FEBBB6D7AB7EA4043D8388C2B0811649((&V_3), il2cpp_rgctx_method(method->rgctx_data, 11));
						return;
					}
				});
				try
				{
					{
						goto IL_009a_2;
					}

IL_006e_2:
					{
						RuntimeObject* L_17;
						L_17 = Enumerator_get_Current_m22994A3CA91C18DE48E5750DD8D785739BC90B25_inline((&V_3), NULL);
						V_5 = L_17;
						RuntimeObject* L_18 = V_5;
						PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_19;
						L_19 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_18, NULL);
						V_6 = L_19;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008c_2:
							{
								PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_6), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_20 = V_5;
							Il2CppSharedGenericObject** L_21 = ___1_container;
							NullCheck((RuntimeObject*)L_20);
							InterfaceActionInvoker2< RuntimeObject*, Il2CppSharedGenericObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 8), (RuntimeObject*)L_20, __this, L_21);
							goto IL_009a_2;
						}
						catch(Il2CppNativeThreadAbortException&)
						{
							__finallyBlock.SetNativeThreadAbortOccurred();
						}
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_009a_2:
					{
						bool L_22;
						L_22 = Enumerator_MoveNext_m11512CF8D275BC9709AD84A8E46D9A512E56B689((&V_3), il2cpp_rgctx_method(method->rgctx_data, 10));
						if (L_22)
						{
							goto IL_006e_2;
						}
					}
					{
						goto IL_00c1;
					}
				}
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

IL_00c1:
	{
		bool L_23;
		L_23 = SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06((&V_0), NULL);
		if (!L_23)
		{
			goto IL_00d5;
		}
	}
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_24 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteEndObject_m30A906403C776CCC63988F1937068B7DB70055A6(L_24, NULL);
	}

IL_00d5:
	{
		return;
	}
}
// Method Definition Index: 87492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyWriter_Unity_Properties_ICollectionPropertyBagVisitor_Visit_TisIl2CppSharedGenericObject_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_mD3004DCD20FDF71E9D9913CF39D9730E3C11A9C9_gshared (JsonPropertyWriter_t04A064DAFEFA4938B42DF50F1884C1720E302231* __this, RuntimeObject* ___0_properties, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043);
		il2cpp_rgctx_method_init(method);
	}
	//<source_info:<no-source>:1>
	SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F V_3;
	memset((&V_3), 0, sizeof(V_3));
	PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* V_5 = NULL;
	PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		Il2CppSharedGenericObject** L_0 = ___1_container;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_1;
		L_1 = JsonPropertyWriter_GetSerializedContainerMetadata_TisIl2CppSharedGenericObject_m4369FC9C592AF0F1FBE04B92C5E35E2E29B5658B(__this, L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_2 = V_0;
		bool L_3 = L_2.___IsSerializedReference;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_4 = V_0;
		int32_t L_5 = L_4.___SerializedId;
		JsonPropertyWriter_WriteSerializedReference_m9B9B3A6E77C2DDD6E98AD87324031D9D0BF033E7(__this, L_5, NULL);
		return;
	}

IL_001d:
	{
		V_1 = 0;
		bool L_6;
		L_6 = SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06((&V_0), NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_7 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteBeginObject_m81F3D6666CC0F032193EFBC6437A783B5794B783(L_7, (String_t*)NULL, NULL);
		Il2CppSharedGenericObject** L_8 = ___1_container;
		SerializedContainerMetadata_t63E2EB21BE1D9CFD7F9786B7579136C0FFC71F98 L_9 = V_0;
		JsonPropertyWriter_WriteSerializedContainerMetadata_TisIl2CppSharedGenericObject_m6B502AE5EDA42F8CE45085E1862BF0D0516B9476(__this, L_8, L_9, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_10 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteKey_m2FFF47385173E4F4CF341EFCC24FDFC5E8BDAF67(L_10, _stringLiteral75CE75F6E407D5671F53AFAEA8DEACB462872043, NULL);
	}

IL_004e:
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_11 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		ArrayScope_tD6A4502098CF44F8FAB03F6D4DCA8052777FD4D7 L_12;
		L_12 = JsonWriter_WriteArrayScope_m2747938413A5F2BC5AA4E8B4491964944B62E7EF(L_11, (String_t*)NULL, NULL);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				ArrayScope_Dispose_mD86106F0E27AD77A8D2E88184FB6D950CB493E5F((&V_2), NULL);
				return;
			}
		});
		try
		{
			{
				RuntimeObject* L_13 = ___0_properties;
				Il2CppSharedGenericObject** L_14 = ___1_container;
				NullCheck((RuntimeObject*)L_13);
				PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0 L_15;
				L_15 = InterfaceFuncInvoker1< PropertyCollection_1_t23DE48FAF5C5689D19497BA2E5686CD09C942EB0, Il2CppSharedGenericObject** >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 2), (RuntimeObject*)L_13, L_14);
				V_4 = L_15;
				Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F L_16;
				L_16 = PropertyCollection_1_GetEnumerator_mD110577846A15E927B81678F5AC469DCD48BBD15((&V_4), il2cpp_rgctx_method(method->rgctx_data, 5));
				V_3 = L_16;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a5_1:
					{
						Enumerator_Dispose_m0CAB6135FEBBB6D7AB7EA4043D8388C2B0811649((&V_3), il2cpp_rgctx_method(method->rgctx_data, 11));
						return;
					}
				});
				try
				{
					{
						goto IL_009a_2;
					}

IL_006e_2:
					{
						RuntimeObject* L_17;
						L_17 = Enumerator_get_Current_m22994A3CA91C18DE48E5750DD8D785739BC90B25_inline((&V_3), NULL);
						V_5 = L_17;
						RuntimeObject* L_18 = V_5;
						PropertyScope_tC28ADF6AB27DB012815A8AD6824AF0EBA06B0D23 L_19;
						L_19 = JsonPropertyVisitor_CreatePropertyScope_m45014D0115464A3E55EB556937A63918614D9A8C(__this, (RuntimeObject*)L_18, NULL);
						V_6 = L_19;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_008c_2:
							{
								PropertyScope_Dispose_m34AEF1095045CAEB0B83FCD9AF11EDCFF7858946((&V_6), NULL);
								return;
							}
						});
						try
						{
							RuntimeObject* L_20 = V_5;
							Il2CppSharedGenericObject** L_21 = ___1_container;
							NullCheck((RuntimeObject*)L_20);
							InterfaceActionInvoker2< RuntimeObject*, Il2CppSharedGenericObject** >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 8), (RuntimeObject*)L_20, __this, L_21);
							goto IL_009a_2;
						}
						catch(Il2CppNativeThreadAbortException&)
						{
							__finallyBlock.SetNativeThreadAbortOccurred();
						}
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}

IL_009a_2:
					{
						bool L_22;
						L_22 = Enumerator_MoveNext_m11512CF8D275BC9709AD84A8E46D9A512E56B689((&V_3), il2cpp_rgctx_method(method->rgctx_data, 10));
						if (L_22)
						{
							goto IL_006e_2;
						}
					}
					{
						goto IL_00c1;
					}
				}
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

IL_00c1:
	{
		bool L_23;
		L_23 = SerializedContainerMetadata_get_Exists_m5EB13F11849F4D14BB80DADB1959604A55290B06((&V_0), NULL);
		if (!L_23)
		{
			goto IL_00d5;
		}
	}
	{
		JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3* L_24 = (JsonWriter_t67CFC3312514260BC14537A9C065D144266B4BD3*)(&__this->___m_Writer);
		JsonWriter_WriteEndObject_m30A906403C776CCC63988F1937068B7DB70055A6(L_24, NULL);
	}

IL_00d5:
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2B312E1148312DC6D476005F841535D41A9F9327_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t60DBEABEEE02A3331508FC00671BB1516A847773_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD3A0269A333398104B2D8BB2FCBB9FD047A119C0_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tABB3973C656C1AC89B87A6B51853058513CA93E5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mE0107930FB17433A36E048CFF09C97DDDED87752_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t489E41DF3938E924D32457D7DE82598F4FD0A2DE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
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
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC2ABCDBBBBA113675F0402269842FE70B678FD71_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB824D69C311C2A17E50137889AB594DDC1E7D8D2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m83BB11321A8205868232E6A9791231FCCAEE17E9_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t863F95920EE834C0519085F7BDCA06C58BCD1DE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m908C71E0F54A69691D54C444E2C23EF5C540FD1F_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t621E3790C21984BE382EC32D6FE8EF59F9C81E4F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m468FD08CF92AA9CE1355826B4E5A8A7B92647567_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t3FA85198159658E010E08BB434B6F0D95CCF4310_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mA3A83B0AB6B296273AE2BDDEB3B9AF841A456880_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB0FBD395D266A0DC452EFC005EED000A76F2D728_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m7EC7DB4728C77BEAC1A8D8EA31A8EB1AA4DBA109_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tC8921FDA28D28FEA6D91C40FFFA103B90A1E4EF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m32E8A3756EFDBA1824C3FEED336094ACF95DE362_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t2C470FCD3078C378DA07D1FCDFD8E3BF2EBD4751_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mC876849E832B2360A89D63D4816C6D9EF7994527_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t12A4EFA4F288B8AEB9D8AF24C08B0E6BEC4A5283_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m64554136176110FBD6D5948F7A8593317282D43D_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB2BACC988B95FD4748EEAD9E106CEA7F11DBBE4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m2E3E7C39FB0C7BFCE1F3BBFCA4135DF4945EAB8E_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tE403F840B1E4A05D3004758D60018F70BE11D92D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m283BAA739BE2D12707F064FF6DF9B394EAA8D12D_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tB439768C3A79904448564C831E2894C0B5B57EAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_m6A75BB8CD9B2B4B0910DC782C45A8CA5753DC102_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_tFDC3DFB18A42D9B07C179959EF081E93C3CBF445_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90438
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_1_get_IsValueType_mD5817FDD9AC014D03C12B9915B441436AAD5215E_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TypeTraits_1_t31E0BD871531FA1AC46F0126260E83EF64BD836B_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0 = ((TypeTraits_1_t22D058C62F813979FB7E7DEFFA435A9AACECD7ED_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CIsValueTypeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90321
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD657CB5BE97EC044573CE0DB5F090695B16EE855_inline (Enumerator_tF6C1489FBE2B1F56FB8C3305288F5ABBCA6B4B1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 90321
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m22994A3CA91C18DE48E5750DD8D785739BC90B25_gshared_inline (Enumerator_t3CA9C8C0330C78E7A20184D8002CD7B7A9354E5F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField;
		return L_0;
	}
}
