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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*,T1,T2,T3,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,p3,invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84;
struct Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5;
struct Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24;
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
struct Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47;
struct Action_4_tA67702EEB9BDC6251AAA7845C0E7947A21B1BDD6;
struct ConcurrentDictionary_2_t757100E73346E434E85BF6361924BEAED9C7D1C9;
struct ConcurrentDictionary_2_t2D94ABC97F58DB7EBDDF1AD189846BD53C21C189;
struct Dictionary_2_t29FB78C9E5DF443E2A5880E4E9B7C86E516670E0;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE;
struct DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D;
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0;
struct Func_2_t51E0796D1DBB8E902BF230CE88C097AAC81A799E;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C;
struct Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA;
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
struct List_1_tE7FB077B3CEA6371A27F72CC60962491AB71490B;
struct List_1_tBD2E4781BB0BD1FCD30E6D3586CA13AFD0ABE6F7;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t491347B1404617671B39DA9325642B0DB8748CB3;
struct List_1_tD6F1685FEE5A196B3002ACC649A1DF5C65162268;
struct List_1_t437B6C3879E969156A381BDC3C459CF809D39DDF;
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
struct SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D;
struct SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D;
struct SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6;
struct Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631;
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct Action_1U5BU5D_tE4E06618063C3EF89781BEB4DF47D183654040E6;
struct Action_1U5BU5D_tE8E24911F5A60E39CF0E3C88A25BB212E1B0D42E;
struct Action_1U5BU5D_t0DC77ABC87566C75CD9F20B4F73420DC6A2CB5E3;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct Action_2U5BU5D_tD9E8BC0EF65B2E9680D8BAD13A17B772ACAFE87A;
struct Action_2U5BU5D_tAEA94BCAED7F1FAC1E23A2ECD3989C918E7E720A;
struct Action_2U5BU5D_t3519214D03DD5A48DDE694B87171587286BC8469;
struct Action_2U5BU5D_t91BC0D22B5FBF80722DC31149915DB78F807DD05;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct Func_2U5BU5D_tDB35E65A9494F01B98EB35389191829269F63BDA;
struct Func_2U5BU5D_t6BC505CD1D60C2E1E663F707760ED776AD9076D5;
struct Func_3U5BU5D_t9FF52C8529EA5AAF83FF439C25D8AF9E7E81EE19;
struct Func_3U5BU5D_tF4076276709EF6EB64C1CD6EDCD5C946803BA7E5;
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5;
struct SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EntryPreProcessor_t5185B320A01563FA2265B9E43F20C4E89B45605D;
struct Exception_t;
struct FilterFunctionDefinition_tFE41DB19FFB74F4D2B54BF44D1D2051B57FC82F2;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8;
struct ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4;
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct RenderTreeManager_tC48E33C23CCD40D5EFFF3CCA3D822893AD1C016E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A;
struct UnsafePackedBinaryStream_tB7D7A26EE7BC2AA076A294EE8854D575EB210AE4;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;

IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0EBA42AB09C80F1F9FA91F86CDC4CE3B9EA3A1;
IL2CPP_EXTERN_C String_t* _stringLiteral12471D02007E13A9D0C17395294B8CC6341439A9;
IL2CPP_EXTERN_C String_t* _stringLiteral23B0E5D7B911C28D8185E9BA0551A9BA06E51093;
IL2CPP_EXTERN_C String_t* _stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1;
IL2CPP_EXTERN_C String_t* _stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5;
IL2CPP_EXTERN_C String_t* _stringLiteral3DC1753B689CCD7602479D3D3FADF4ACD8E3D9B3;
IL2CPP_EXTERN_C String_t* _stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12;
IL2CPP_EXTERN_C String_t* _stringLiteral5FAA581856938B9069E7F6A0D506133DF1483405;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD;
IL2CPP_EXTERN_C String_t* _stringLiteral86DDD9337840A2E461AAC60E4994422F0C35F6AB;
IL2CPP_EXTERN_C String_t* _stringLiteral9ECF1F1B022D71E7E628EFFE52A97528A39F8996;
IL2CPP_EXTERN_C String_t* _stringLiteralB8958F544AEFFC47D7A14E3B14CB55E3267F0328;
IL2CPP_EXTERN_C String_t* _stringLiteralC24E06835A8DBA9F87DD9CB84BB603434C2453E4;
IL2CPP_EXTERN_C String_t* _stringLiteralC8BF77F9641897892CACE882F8B56ADC1617E79D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F;
struct ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE  : public RuntimeObject
{
	HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
};
struct DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
};
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA  : public RuntimeObject
{
	SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct DefaultTypeConstruction_t0D6B522242C3B8DFC557A755D1579FF380F1C056  : public RuntimeObject
{
};
struct DelegateHelpers_t4FACB851FC2A983B0459251C5FB2088705DCEEF0  : public RuntimeObject
{
};
struct DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E  : public RuntimeObject
{
};
struct DocumentationUtils_t28FBC323107B47A3D56412C289C1ED6DAF1381E8  : public RuntimeObject
{
};
struct DynamicArrayExtensions_t0BD0D5C0D72DBF08F82FFC8D4AAC2DEC25F81176  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C  : public RuntimeObject
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
struct HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	Il2CppSharedGenericObject* ___compiledGraph;
};
struct InlinedArray_1_tC5A6273BF5A8642C3615223409DC9A7AE2856C8D 
{
	int32_t ___length;
	Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C* ___firstValue;
	Action_1U5BU5D_tE4E06618063C3EF89781BEB4DF47D183654040E6* ___additionalValues;
};
struct InlinedArray_1_t46372C3CC57DC6F74D152477F01A7063992B26E9 
{
	int32_t ___length;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___firstValue;
	Action_1U5BU5D_tE8E24911F5A60E39CF0E3C88A25BB212E1B0D42E* ___additionalValues;
};
struct InlinedArray_1_tDBC5F0DF958E1B039E704733260833948AED6995 
{
	int32_t ___length;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___firstValue;
	Action_1U5BU5D_t0DC77ABC87566C75CD9F20B4F73420DC6A2CB5E3* ___additionalValues;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct InlinedArray_1_tE28CB641788EFF63BAAE8F95BB341816A93A1065 
{
	int32_t ___length;
	Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84* ___firstValue;
	Action_2U5BU5D_tD9E8BC0EF65B2E9680D8BAD13A17B772ACAFE87A* ___additionalValues;
};
struct InlinedArray_1_tE008F4A9096F2C8EB29BA3EC2E914322B12121CD 
{
	int32_t ___length;
	Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5* ___firstValue;
	Action_2U5BU5D_tAEA94BCAED7F1FAC1E23A2ECD3989C918E7E720A* ___additionalValues;
};
struct InlinedArray_1_t59F1382AA813DFBBEEF7D13B7D3A29CD5BD4A0A9 
{
	int32_t ___length;
	Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24* ___firstValue;
	Action_2U5BU5D_t3519214D03DD5A48DDE694B87171587286BC8469* ___additionalValues;
};
struct InlinedArray_1_t02F98EA12C93F41D771B4B65613C8DDB5004019E 
{
	int32_t ___length;
	Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* ___firstValue;
	Action_2U5BU5D_t91BC0D22B5FBF80722DC31149915DB78F807DD05* ___additionalValues;
};
struct InlinedArray_1_t94E83C92613F1D5D06A127062E35BBFCE254B192 
{
	int32_t ___length;
	Func_2_t51E0796D1DBB8E902BF230CE88C097AAC81A799E* ___firstValue;
	Func_2U5BU5D_tDB35E65A9494F01B98EB35389191829269F63BDA* ___additionalValues;
};
struct InlinedArray_1_tAA23DAFE19D55052647C09BB0770B8BE1E72A105 
{
	int32_t ___length;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___firstValue;
	Func_2U5BU5D_t6BC505CD1D60C2E1E663F707760ED776AD9076D5* ___additionalValues;
};
struct InlinedArray_1_t81B81E2C96DFD64DE8397EDA92D67C2B5EE17C9E 
{
	int32_t ___length;
	Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C* ___firstValue;
	Func_3U5BU5D_t9FF52C8529EA5AAF83FF439C25D8AF9E7E81EE19* ___additionalValues;
};
struct InlinedArray_1_tB717C1BBC0B9C69D74BD4CCBB226AD89B1A39D61 
{
	int32_t ___length;
	Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* ___firstValue;
	Func_3U5BU5D_tF4076276709EF6EB64C1CD6EDCD5C946803BA7E5* ___additionalValues;
};
struct InlinedArray_1_t8CE52FBBA222869F6C434A4D185D438C48D0E503 
{
	int32_t ___length;
	Il2CppSharedGenericObject* ___firstValue;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___additionalValues;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
typedef Il2CppFullySharedGenericStruct SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239;
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
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	String_t* ___m_Url;
	bool ___m_Dispatcher;
	String_t* ___m_DispatchingFieldName;
};
struct IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___indices;
	RuntimeArray* ___entries;
	int32_t ___dictionaryCountWhenRecorded;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___duplicateKeyIndices;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___nullKeyIndices;
};
struct IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84_marshaled_pinvoke
{
	Il2CppSafeArray* ___indices;
	RuntimeArray* ___entries;
	int32_t ___dictionaryCountWhenRecorded;
	Il2CppSafeArray* ___duplicateKeyIndices;
	Il2CppSafeArray* ___nullKeyIndices;
};
struct IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84_marshaled_com
{
	Il2CppSafeArray* ___indices;
	RuntimeArray* ___entries;
	int32_t ___dictionaryCountWhenRecorded;
	Il2CppSafeArray* ___duplicateKeyIndices;
	Il2CppSafeArray* ___nullKeyIndices;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct RawSlice_t8512E18D23DE01C7FCF7249BCF43911D4138CE9A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_Stride;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
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
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A 
{
	intptr_t ____value;
};
struct ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC5A6273BF5A8642C3615223409DC9A7AE2856C8D ___m_Callbacks;
	InlinedArray_1_tC5A6273BF5A8642C3615223409DC9A7AE2856C8D ___m_CallbacksToAdd;
	InlinedArray_1_tC5A6273BF5A8642C3615223409DC9A7AE2856C8D ___m_CallbacksToRemove;
};
struct CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t46372C3CC57DC6F74D152477F01A7063992B26E9 ___m_Callbacks;
	InlinedArray_1_t46372C3CC57DC6F74D152477F01A7063992B26E9 ___m_CallbacksToAdd;
	InlinedArray_1_t46372C3CC57DC6F74D152477F01A7063992B26E9 ___m_CallbacksToRemove;
};
struct CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tDBC5F0DF958E1B039E704733260833948AED6995 ___m_Callbacks;
	InlinedArray_1_tDBC5F0DF958E1B039E704733260833948AED6995 ___m_CallbacksToAdd;
	InlinedArray_1_tDBC5F0DF958E1B039E704733260833948AED6995 ___m_CallbacksToRemove;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tE28CB641788EFF63BAAE8F95BB341816A93A1065 ___m_Callbacks;
	InlinedArray_1_tE28CB641788EFF63BAAE8F95BB341816A93A1065 ___m_CallbacksToAdd;
	InlinedArray_1_tE28CB641788EFF63BAAE8F95BB341816A93A1065 ___m_CallbacksToRemove;
};
struct CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tE008F4A9096F2C8EB29BA3EC2E914322B12121CD ___m_Callbacks;
	InlinedArray_1_tE008F4A9096F2C8EB29BA3EC2E914322B12121CD ___m_CallbacksToAdd;
	InlinedArray_1_tE008F4A9096F2C8EB29BA3EC2E914322B12121CD ___m_CallbacksToRemove;
};
struct CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t59F1382AA813DFBBEEF7D13B7D3A29CD5BD4A0A9 ___m_Callbacks;
	InlinedArray_1_t59F1382AA813DFBBEEF7D13B7D3A29CD5BD4A0A9 ___m_CallbacksToAdd;
	InlinedArray_1_t59F1382AA813DFBBEEF7D13B7D3A29CD5BD4A0A9 ___m_CallbacksToRemove;
};
struct CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t02F98EA12C93F41D771B4B65613C8DDB5004019E ___m_Callbacks;
	InlinedArray_1_t02F98EA12C93F41D771B4B65613C8DDB5004019E ___m_CallbacksToAdd;
	InlinedArray_1_t02F98EA12C93F41D771B4B65613C8DDB5004019E ___m_CallbacksToRemove;
};
struct CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t94E83C92613F1D5D06A127062E35BBFCE254B192 ___m_Callbacks;
	InlinedArray_1_t94E83C92613F1D5D06A127062E35BBFCE254B192 ___m_CallbacksToAdd;
	InlinedArray_1_t94E83C92613F1D5D06A127062E35BBFCE254B192 ___m_CallbacksToRemove;
};
struct CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tAA23DAFE19D55052647C09BB0770B8BE1E72A105 ___m_Callbacks;
	InlinedArray_1_tAA23DAFE19D55052647C09BB0770B8BE1E72A105 ___m_CallbacksToAdd;
	InlinedArray_1_tAA23DAFE19D55052647C09BB0770B8BE1E72A105 ___m_CallbacksToRemove;
};
struct CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t81B81E2C96DFD64DE8397EDA92D67C2B5EE17C9E ___m_Callbacks;
	InlinedArray_1_t81B81E2C96DFD64DE8397EDA92D67C2B5EE17C9E ___m_CallbacksToAdd;
	InlinedArray_1_t81B81E2C96DFD64DE8397EDA92D67C2B5EE17C9E ___m_CallbacksToRemove;
};
struct CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tB717C1BBC0B9C69D74BD4CCBB226AD89B1A39D61 ___m_Callbacks;
	InlinedArray_1_tB717C1BBC0B9C69D74BD4CCBB226AD89B1A39D61 ___m_CallbacksToAdd;
	InlinedArray_1_tB717C1BBC0B9C69D74BD4CCBB226AD89B1A39D61 ___m_CallbacksToRemove;
};
struct CallbackArray_1_t37C926822B80D7FF93519477FB3567AEBFC3746A 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t8CE52FBBA222869F6C434A4D185D438C48D0E503 ___m_Callbacks;
	InlinedArray_1_t8CE52FBBA222869F6C434A4D185D438C48D0E503 ___m_CallbacksToAdd;
	InlinedArray_1_t8CE52FBBA222869F6C434A4D185D438C48D0E503 ___m_CallbacksToRemove;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct BackgroundSizeType_tD194B20FF5086D494ABF8D799124D2FC4FFCC674 
{
	int32_t ___value__;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor;
	float ___m_ColorMultiplier;
	float ___m_FadeDuration;
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
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
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
struct ExtraVertexChannels_t4E3FCA4F40D59436026CE26E25ABCBA1F0454C87 
{
	int32_t ___value__;
};
struct FilterFunctionType_tF29290365A61009BE6F2EF6C6C6218E72CB9F64A 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
struct LayoutUnit_tF18EC17FE8588A01C72784546410EA0D9B1D2F22 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct OwnedState_t0957CA36E21DE8A443B616EBE83B25CCCA70B5A4 
{
	uint8_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
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
struct VertexFlags_t4332E863C191870E63009EBE5F6E77D6D176C4FF 
{
	uint16_t ___value__;
};
struct Unit_t21DCD5C095F7DC1A0B9A47CAF8CAD3E7776CD3DB 
{
	int32_t ___value__;
};
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	int32_t ___value__;
};
struct AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 
{
	intptr_t ___m_Ptr;
};
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	int32_t ___value__;
};
struct Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A ____pointer;
	int32_t ____length;
};
struct Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 
{
	ByReference_1_tEED41D1AC554E613B3A63A7B351E3101C0DEDA09 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
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
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page;
	uint16_t ___pageLine;
	uint8_t ___bitIndex;
	uint8_t ___ownedState;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
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
struct Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};
struct Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84  : public MulticastDelegate_t
{
};
struct Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5  : public MulticastDelegate_t
{
};
struct Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24  : public MulticastDelegate_t
{
};
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8  : public MulticastDelegate_t
{
};
struct Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47  : public MulticastDelegate_t
{
};
struct Action_4_tA67702EEB9BDC6251AAA7845C0E7947A21B1BDD6  : public MulticastDelegate_t
{
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct Func_2_t51E0796D1DBB8E902BF230CE88C097AAC81A799E  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C  : public MulticastDelegate_t
{
};
struct Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A  : public MulticastDelegate_t
{
};
struct SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D  : public MulticastDelegate_t
{
};
struct SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D  : public MulticastDelegate_t
{
};
struct SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6  : public MulticastDelegate_t
{
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
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
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct EntryProcessor_t9FF21D7C004D95D3BD631DD8DF810707C8D15AC4  : public RuntimeObject
{
	EntryPreProcessor_t5185B320A01563FA2265B9E43F20C4E89B45605D* ___m_PreProcessor;
	RenderTreeManager_tC48E33C23CCD40D5EFFF3CCA3D822893AD1C016E* ___m_RenderTreeManager;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___m_CurrentRenderData;
	int32_t ___m_PanelExtras;
	intptr_t ___m_NoUserExtrasTemplatePtr;
	int32_t ___m_MaskDepth;
	int32_t ___m_MaskDepthPopped;
	int32_t ___m_MaskDepthPushed;
	int32_t ___m_StencilRef;
	int32_t ___m_StencilRefPopped;
	int32_t ___m_StencilRefPushed;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___m_ClipRectId;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___m_ClipRectIdPopped;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___m_ClipRectIdPushed;
	bool ___m_IsDrawingMask;
	Stack_1_tAE809352224B7904D166288D1476FD4C2ED0D631* ___m_MaskMeshes;
	bool ___m_RequestedElementId;
	bool ___m_ElementIdValid;
	uint16_t ___m_TextCoreId;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___m_Mesh;
	RawSlice_t8512E18D23DE01C7FCF7249BCF43911D4138CE9A ___m_Verts;
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___m_Indices;
	uint16_t ___m_IndexOffset;
	int32_t ___m_AllocVertexCount;
	int32_t ___m_AllocIndex;
	int32_t ___m_VertsFilled;
	int32_t ___m_IndicesFilled;
	uint16_t ___m_RenderType;
	bool ___m_RemapUVs;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_AtlasRect;
	uint16_t ___m_GradientSettingIndexOffset;
	bool ___m_IsTail;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___m_FirstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___m_LastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___U3CfirstHeadCommandU3Ek__BackingField;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___U3ClastHeadCommandU3Ek__BackingField;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___U3CfirstTailCommandU3Ek__BackingField;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___U3ClastTailCommandU3Ek__BackingField;
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
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
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
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	bool ___m_EnableCalled;
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation;
	int32_t ___m_Transition;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState;
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers;
	bool ___m_Interactable;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic;
	bool ___m_GroupsAllowInteraction;
	int32_t ___m_CurrentIndex;
	bool ___U3CisPointerInsideU3Ek__BackingField;
	bool ___U3CisPointerDownU3Ek__BackingField;
	bool ___U3ChasSelectionU3Ek__BackingField;
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache;
};
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage;
	int32_t ___m_Value;
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options;
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged;
	float ___m_AlphaFadeSpeed;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker;
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items;
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner;
	bool ___validTemplate;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA_StaticFields
{
	SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticFields
{
	RuntimeObject* ___U3Cs_IgnoredEntriesForDictionariesU3Ek__BackingField;
	Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* ___U3Cs_PostDictionaryKeyWarningU3Ek__BackingField;
	MethodInfo_t* ___s_SetEntriesTypedInfo;
	ConcurrentDictionary_2_t2D94ABC97F58DB7EBDDF1AD189846BD53C21C189* ___s_SetEntriesTypedCache;
	MethodInfo_t* ___s_GetEntriesTypedInfo;
	ConcurrentDictionary_2_t757100E73346E434E85BF6361924BEAED9C7D1C9* ___s_GetEntriesTypedCache;
	MethodInfo_t* ___s_CreateEmptyDictionaryTypedInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTransformMatrixMarker;
	String_t* ___k_DefaultShaderName;
	bool ___k_ProfilerSupported;
	ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* ___k_ExtrasChannelOrder;
};
struct UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_ThreadStaticFields
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___s_ThreadIndex;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
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
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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
struct ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m676AC6493B4E7C9435AE4D5B3CCD88CA82F0FEAC (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF3F78B9E94843CD28EC5DDAF0BD693E759666D14 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mB855FAB6AF0A5CA09C9ABBC302B7EF4C260249F2 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mEAB24B0BE2395E92D716C55C47FE4E0C2702DB30 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m64655D4B23A6345C99CDA88F2C09CD4BA5701114 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m9D3CE39F08B2E5DB645CB5C2BBC3236EAF921AC5 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m96E9F2F809C013795D66B8C9E80F6403683BE7B4 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m00E8E315807018A3C5C84079A1A61C1D0882D245 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_InstantiateArray_TisGuid_t_mECFCBA4EA93F443946274B9433836876E91A1984 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6535404DC61AE11D53BF23670652144E127FBE2 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF4FD17FF3040D19F1C64154A84088275CAE4390F (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7D04EB848C9F153C75F938B8E6A205C7AE51E3CB (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4B9956DC88B27A3420B374A86934A1580F95E641 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m228F432AA230B8A1D129A86B4282CDEBFF0E8FF1 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TypeUtility_InstantiateArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC5B9A8BAFE4CCBA19BDC72EE7A419435D51B8242 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m65CECBA19C2C6A630F400B878D9A92233A17655A (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m194E3DA741BDEBF25A3C60B0FC34EF1F3B195181 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m1C21A325511C1DFF6CBC5E48BCFE2D3535E79222 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mBDCDF7D0BC6E47B30BE64EA588236670B5C24471 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C TypeUtility_InstantiateArray_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m2B9D063D00637D0447A4C11FB47B09941B363403 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD TypeUtility_InstantiateArray_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_mD63E9647B8CA975B336FAE4CE52FF194C4AFE7DF (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A TypeUtility_InstantiateArray_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_mA269B78B9BD562F17BDE27B8EDB5060ACC56BBCB (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F TypeUtility_InstantiateArray_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m46E9275DB4A9C928D434E13A1BFD19B1FE062815 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDF31B5C8D4CF6F63DBC402F93A4902BB41AF617A (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2BACF7BFD6126FA92934886441023C14606E4D8C (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m46250B5C56ACB8D9C79870A7B547FB2700AF15B3 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m5D38FA37D87EAA704CFB58AEA11F3EC39AEFF1E7 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3637F91F0F17A00FA935D28B4E541C9B060C9BA6 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m259ED3223591E91BEB1F81712D52CCC8D3BAC6A2 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m6DEE07D679CA855AFD3A5419D9392C42D17B2DBB (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mEB25031BEABB5F3EA90DCA5BB3F5BCF1640CC094 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mF6CC1C6523FEC87FC4FE2C056B2EA79FF9D86A99 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mD207EE98CF8D058E65D12DB022E33A4B5E4DBF37 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m6FFB4DCD0AF1BEB615B3D00D50BF35CB0B9342C1 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mF9A7C0989CE2A8051406819F505D0BA6C5D50838 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4CDC2E13990212E21BC38FB599391C977775D485 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m2191540D865D5C6B6E89077C71F21A78C85DA981 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m0C16A19AA37F598E96FC43BAC034C1CE27D61FB4 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m1C4E73EB209FC1E0BEB6E7B43C34FC4D6D65F174 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1ABB8FA4111774E4DB8BF236FE133FC3B853EB31 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA634FD62CD696DF6FA017D329A422645957FD156 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mF96AA496A11ADAECDE405B0CBA3473D8F5EE6619 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD8DB6F2EA0ADB994693DD77768291584174A4DE9 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8F366B3C02A71BF04557B18BB55876D5CD8B5729 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 TypeUtility_InstantiateArray_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m92E90C7EB64467D0614BDD9A33D92D8D26F2D617 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m32FBFE43FB00D4EE2A5BEECD7F1917EE537F64C1 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB61B6A4D7F0D0D8484013630AEFBA149769B6FE7 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mBE6CC421D48125AE28A56D9CEB17E48BC28B0BD7 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mBA193AA99BF2D7E99E6046F941E05C99A235A63B (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mF91B67E9FF2B0279DCF329767CEB8D6414F146BB (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3225CACF659C94C96CDD6A17CA6748484119CFF4 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA5679E431BDBAE50B0DFC594932302085A788F09 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1DCF9C5D3E23A02EEEA6B3E35B7E443E9DA28CEA (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF97DADA2889CD0267F74DF9C277E80F0381E68B4 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1D21AED87DD63F2A4BD2CD895FD0C931821C1514 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m52C36F69CCBFAD459D6F20B67E282EAD24432F7E (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2D2C323EE1D18FF02FAA35EA6FB3610F2FCD9DB9 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TypeUtility_InstantiateArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m51DCC7AC226863673B0709F9AEA2FF04698BB788 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m64BFA247074E3BD4CA40998405ACDF4B28A91917_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m559F8B91A5CEB5A1CF45EC74D2B00C554A77A026_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m30A329BA1FE97C0064BF91006EE5EEC33C8EF052_gshared (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD0E93B95180130DDAAB5700C477CAA98F398846B_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_Instantiate_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED5BFDFF34F0D6E704E76BBBC4B393D26EF282A9_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m7D416EDF62FA540300D922F41F90E080EAC49A3D_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_Instantiate_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC68B301A6F1A4268203DD742B57E4EC46A819877_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m281CED37618A25573CC4D58C97152E6FCA744AE8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_Instantiate_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m7AF6959248FE34418A7CE3EE5E78680F237F3A41 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m4DF96EFBE097C17BF62272A0C6340D8AE72C657C (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_Instantiate_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE8A1AB2E9E9B49488A93FCD2B86F77A25893346E (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m0D77DD60514ABFC7B1C56B2D56111E61FEA6FA82 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_Instantiate_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE2FC596D6CE7CB8E9659399EE4C9DABC8D871103 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m159E2BD6FEBA9EDAE6D74A117DC4FFAA5042E3D0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_Instantiate_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m946658B27C78F1B41B7C365D2C412A2C0C4768D1 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m9A5215A4152CEC4DF1A24F59B24399473DA7F261 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_Instantiate_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAEC3FBA39DEC930DDDEF597E464BD7C804C5D05C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF8C1E97193ECF4B53A44C3C1ECDAFE16C67B8647 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_Instantiate_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m6DF338468D32365904E0B2DBDC664DB97D1B0291 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE6DA1D7AC2CE4B25EF152A21566CB5ADA6D8F295 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_Instantiate_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m54D4189802174B0AA0E99B59BAD924E484A80696 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m6AC0170455B90A67CBAACCDD442DC95ABFD6D519 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_Instantiate_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m0C69A18A43A2E44105889800F21D1215AA8A5E1D (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFDEDCB17D521CA4B385F04161EBEA9EA14D95F6E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_Instantiate_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m55C8EBC82EDFA8FAFB924ECE0705DB118140972F (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2D61874C339DFDB87955AA8F5662B167D5E769C1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_Instantiate_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m61658CC7B6E2962DF750E9611E884DE58CBD7CF1 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C80F9E94423A3E2D1E82D97BFCB0A36BB9C8DC7 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeUtility_Instantiate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m019581577126A0BB6BC129144339350367173F2C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDC60F7CBC30F8F1CDB241602647982EFB70B4049 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_Instantiate_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4E69CBE571B420D4739367A1A684594E9176FA57 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m59565BEA037538F9616274F0904A21A92E505410 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_Instantiate_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6F30A60D4188472BE371258A1BFDB523943245EC (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF998B0C8639046CB042624DD1E8E2EEE41483A20 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_Instantiate_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m231C619D716B7251BE7A56BCB128745D7A365C19 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2A5D0D0C5D4BF967B0002C561CE2B0AC076C0403 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_Instantiate_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m9FEFFAEBA7DDF77EF7BC781305AF1B539557A7B5 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEFAE44987A1E68F504981A4CDC33EE7BF2DE9A88 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_Instantiate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4E3F11E66287C360381FDCB1DA2CA86725108774 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA76F2DBF6B6D348502A244EED660C295B53699C8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_Instantiate_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mBD4D352377EE256EE21A9E2178B41FCB240019FF (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m45593409D374AE79EA5A1F2A4B6F52B61EE002F8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_Instantiate_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m463CF737CEC740B04F54A12BE8980E180E704C25 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m7B72C49E6CAE91CFB6C5A545808672BB4FD6A4B8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_Instantiate_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB244C132A6AC508484D18A78E401891F6D04B921 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_InstantiateArray_TisGuid_t_mAE74D365457CE44D013FBD6F5C8910BA1685DE5F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_Instantiate_TisGuid_t_mA90DC3C8C09A7C9E6568E92268FBFEC92D9DD32C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m77243DEB812D7D2296B1AF569812F8312273A29C (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_Instantiate_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCDB0D19649FB27FA7581762E8F49F57B9B7CDFA3 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m21D4F0D04451F49CAA1F911345ACECF52DC69E78 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_Instantiate_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED72462427639D9AEE6A910BD83F37CA49CC7C7 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2EF2E3C13101502B574BC39E2715C72FB8459364 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_Instantiate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA517D386045B05E3C434AF7A8670DD6AE7817C6F (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4F8CDB2A2F64850B2325B9FE8089EAFB41DB7CEF (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_Instantiate_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m24AD2F55FB14086FC4CB1F422B3F4B1CAC7C424C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDF64A60F47F7DA7BF9766BA49DFE19C0380CBA02 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_Instantiate_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m60B5595B39DAF4209FF6D63C7848715A38C2BB74 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TypeUtility_InstantiateArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m59CC56915E920CEDF16960F1B5A869AB5CB35ED0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TypeUtility_Instantiate_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m142BB88A0A8A3503825DBD5D83FFA4458BD41F93 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mC74924F19E1B4FE89E11350F5E4359CAC02E9031 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_Instantiate_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAA23957AACEC7AAEEDBC4CC0C62EBBB1CE44AF7E (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m535DE2604C90D93B5EF29E60563BF287510E68CD (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_Instantiate_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m7580D6813951CBE8AFDD15F8F0A4518B3AE2C17C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9AF7AFAE2BC8E88458985B397188B65D6429F15 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_Instantiate_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m0E989570F78731ED52B034096038E7CE0D3CCF2F (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mC2966E423F30D5B816EFD749C8D82415F1A4CB9E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_Instantiate_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE05F2EAF164B530101B9452875662EA603AF0943 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C TypeUtility_InstantiateArray_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m60BB798A7533909CA0A3A833D208126CD497D11E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C TypeUtility_Instantiate_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m58CA6A5DFC70A805D59CC4B058C5F3737B65AA50 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD TypeUtility_InstantiateArray_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m18622F949DD2494A2902C656688DBFAAA09DE889 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD TypeUtility_Instantiate_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_mD2D1D87D985C7F8E8AE4C0F89393B73BB54D73D5 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A TypeUtility_InstantiateArray_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m7DCCE0975E173B8051950502D238411E46131D94 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A TypeUtility_Instantiate_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m33A0548230E126FB99AB62EB15504589363F7487 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F TypeUtility_InstantiateArray_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m64BEA7B8E49DF0E85F6F57D005CEE70420D9EC3D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F TypeUtility_Instantiate_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_mEAC075C3D90846893BBBE556EE5407A4A2F7D198 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF09E7466EBA4308168509A2F9728A7EA9E6CED6 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_Instantiate_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m250E596A76F4E90F0DA755803C33EBDBFE539487 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m57B789863DAB7572F3BD82A3E4725BABADD7EEF1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_Instantiate_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8135215FC2AB524181F24E66F7435414D834E2BB (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m8CC06B652F2EDCE2EC3632D5DF1D101B2926EBC9 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_Instantiate_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE343813C9CA5A97BC75783CB6DAF2F616B3B55AE (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0A1D4C8D7477CED01A3F834003DB6E501DCFDE69 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_Instantiate_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA0D45D320F2FF075FAC8E7D1DC59525229D3725B (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m6063BE63BFEE553B550EDAA3CF5EB963962631DB (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_Instantiate_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m87FB8CC317081B9CDD71674EB3781C942CC548DA (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m34A0EBBE05C15B267EBD94EEBB155A53A0FDA121 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_Instantiate_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m0FA12EC0938963C3D515A0E51C10A1361572DE60 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m014366206E3CB9987B29A33B4C65423A04C1F7F2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_Instantiate_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m70E21575B0F6E9AD50345A82D64B3CFB514689F9 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF7E17FA9A5CF34996D23E79DDB9E5A20927DB9FB (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_Instantiate_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m50EDC2B685C7A805F736D71A9F2C53718CBD0A15 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6B000117BFE4A9051BFE17BFA36CB9757F702219 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_Instantiate_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m0F2B5235B5E057586363B03F727359967889C90B (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8A0C7DB3A87350D4B09D2895CC4E63DEB2B848F2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_Instantiate_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8ABF236CBC8462A860F41962378F343ED976194A (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBF031D97952C18A00E5BDEB0721BF94BF16CD11A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_Instantiate_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mAE76E5A7A00036D7B4F5F084D60FD3A552229EAF (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m3D788ADEA04B7BE35B443C002B92D07035EF0DC4 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_Instantiate_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m60378479ECF71A3A591DCD4BA34761B4F0C3DE9A (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mE590319AC35556C5E5507A5A2FABB8063FE182A5 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_Instantiate_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1837276E59C8F890FA9BD44A8E51670023ECE350 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDEE17C84F12ED15070F7EBBEE81874E3E0C6818D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_Instantiate_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m46FB416B10EDE0BAF84497C1B05A233320C5B6F7 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mA756B0A0DC07FEF686A4B6DD4B65E8B8DBDE19E7 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_Instantiate_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m29FD1830C307E4141B84C66A9C31AFC09D375C16 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m5374D0E9476392FC56CA0A195B4DE560BFF8E25B (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_Instantiate_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mADFA8E2A5519178DEFEA9FC206101B9A6A935215 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m29B340D26E10C35961DE46EA02E9B226747BDB03 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_Instantiate_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m89DC23C50C35515832873025FB64E06C08178C78 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m48BB0241A4C98023239CF2CF4F989F4A3486EB73 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_Instantiate_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mBFFBE5F19DBF010277EEACCE9F31DCE0F9E6735D (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mC60437D4258CCC0EED436E2308135742FFA1A486 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_Instantiate_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m31926283C0C84C3057DC37C1DA770840CC661F47 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3B0C8A2D533799DB7C894ED49FD99469A4F30379 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_Instantiate_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m20C781C9BF6F5A1A4976D3FB3307BBB54013A22D (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m5391C278FF0A30D77C5BA81B4DC8FA234AD0DBB1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_Instantiate_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8674710498BB040D77CD5485B6159C2E4CB1C905 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 TypeUtility_InstantiateArray_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mD9474F4D9CEED391C97F340328493802FF114F52 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 TypeUtility_Instantiate_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mF263E8645E025A85F46D85D7A85D3B967C63FA6A (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m0D082C6C1E325E8A3094CECE4109FA2B6BC845B0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_Instantiate_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m967DD2CBFA6BC947E4DE2E707BCBFFC9C3934E17 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m356574AB280892F8D70F84B2A9B57B31DFDCE6A2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_Instantiate_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB6BA523635A2359078BF52FEA9788A0A4B8AA298 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m75AB3D5EF5305A5B9290D155687FCF8E45EF3A7E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_Instantiate_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mFCE31CF4FFACE349B84F71ABF91EA5C7C023D562 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m8C67F670872FC5934653ADE5A00B1A82E371381A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_Instantiate_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0812591A8DD4A523E6213E0EC9E2E87E2603C8BE (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC144E3A67D34A3ADC811A1450B274DF968B1532A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_Instantiate_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mBFDF9F0C56F5150550EC0074D77E66CF3931BA2E (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8F81C8DA8CF30FA56CE13BDA4ED0CABE5A33632A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_Instantiate_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m2BA2550AF563D560E55F3DD1D75E13BDC7B215AF (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAE4D88E99CFBCB527FDB8A69CFC234FFAB8BDC64 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_Instantiate_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1888A6DF19F8A7D8B0EC95CEB7684676AD7B53A2 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m350E3A1013B8463C9CAC39E8CAAAEC2FE3BC4AA0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_Instantiate_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m60A7F02D1165DBD7B8A86C32223D074AC470A12D (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF99178F8ACBC316A69EF45E4E708AC636A43E18E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_Instantiate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA4762190B1329BFA260B76486E12EB9C8DC3C395 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m339A593FE002ECA805FFE4B0CF0B40013569EA0F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_Instantiate_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1F23C60E2F94481CDFA8152E9150C1FB9368DB35 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDD9287DF4B3A05EEAF8E5E0011397A74BBB01006 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_Instantiate_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7600CA1EB0951E940C81BF9344258E59D94968A0 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3946F03FE277A0176B3FB92619571D84765E225D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_Instantiate_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m11FA35B9D91781E74463462DA6F839E3DD0A9C79 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TypeUtility_InstantiateArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAF5DA6DB52919078C14D9C2C22D25D0FBED3F042 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TypeUtility_Instantiate_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6CBC46773D78078C98E9B2D76E2FA8C53D004310 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m5B52B348F62E628ABBC44D31571F29438607576F_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m64C5BBC9DEE2DFFA085224F695C9F344BD96DC56_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCACA68A5025C94A86BEBB68CA028105035F4339F_gshared (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_Instantiate_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCF68FB6FF6542EE0E2B81B9DC5C7DE5C6552EA3B_gshared (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared (CallbackArray_1_t37C926822B80D7FF93519477FB3567AEBFC3746A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared (CallbackArray_1_t37C926822B80D7FF93519477FB3567AEBFC3746A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared (CallbackArray_1_t37C926822B80D7FF93519477FB3567AEBFC3746A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m30D56EDF2807EF309EEF182BA63A3F0EF0B08A15_inline (Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared (CallbackArray_1_t37C926822B80D7FF93519477FB3567AEBFC3746A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mC9D2864A52CF07F93C51935D9DCDF73E96FED543_inline (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m312AE472FD3B24244802F7163C20C407727A37A4_gshared_inline (Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m9D812FF2BD9184B9649F4FEF3C24A5C462A3DCC9_gshared_inline (Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5* __this, Il2CppSharedGenericObject* ___0_arg1, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m5BD5405988E0E37A73DE7067708A7E8C4E3C7FB0_gshared_inline (Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m4BC5CB4D8DB16449345D3F066DE90DDFCFE569E6_gshared_inline (Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C* __this, Il2CppSharedGenericObject* ___0_arg1, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializedKeyValue_2__ctor_mFB9E6B469C84CAE0804D7D8CE13D96B2A26EE4F1_fshared (SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_mAD44BB2F676DE19646EAF08F99C0AC6B04E4E228_gshared_inline (Action_4_tA67702EEB9BDC6251AAA7845C0E7947A21B1BDD6* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, bool ___2_arg3, bool ___3_arg4, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* GameObject_GetComponent_TisIl2CppSharedGenericObject_m2326F15B03AC79F0FF91C22873C9679752F372D0_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortComparer_Invoke_mCFB297D1C3819FD5A4B2001EDC2ED981AFFD61B7_gshared_inline (SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* __this, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 ___0_x, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortComparer_Invoke_m2DE06F31530E494852B44F0A69E0EA62E6029D44_gshared_inline (SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* __this, Il2CppSharedGenericObject* ___0_x, Il2CppSharedGenericObject* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 DynamicArray_1_op_Implicit_m483FFDD62B46579837A31BD77AAD4786581B2FDC_gshared (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_mBFA552C2BAEB0A60A784B0489459EE12432DBD80_gshared (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_BumpVersion_m805F9A1491DEF04139B29760942E112E238387A3_fshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 DynamicArray_1_op_Implicit_mAFFF65049A686A3F0E8BB9EDC86DD4D277E3D5DE_gshared (DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mCBEAD9085CA4E536B727FA88F9CBEC4F8AD3B71C_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_m38ED5C7119F4DF05C8E768A4B24B42F719B562D0_gshared (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_mB663CF7BB76FB01A3CCF3DFDDEFC64C12A1B7F53_gshared (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArrayExtensions_Partition_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mE82BD3B0E32835BBE673E2B0F2579DEC49602C9B_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_m03B3ED2FE469210FB254E015D290DBF0FFE753E7_gshared (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m676AC6493B4E7C9435AE4D5B3CCD88CA82F0FEAC (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF3F78B9E94843CD28EC5DDAF0BD693E759666D14 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mB855FAB6AF0A5CA09C9ABBC302B7EF4C260249F2 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mEAB24B0BE2395E92D716C55C47FE4E0C2702DB30 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m64655D4B23A6345C99CDA88F2C09CD4BA5701114 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m9D3CE39F08B2E5DB645CB5C2BBC3236EAF921AC5 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m96E9F2F809C013795D66B8C9E80F6403683BE7B4 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m00E8E315807018A3C5C84079A1A61C1D0882D245 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_InstantiateArray_TisGuid_t_mECFCBA4EA93F443946274B9433836876E91A1984 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6535404DC61AE11D53BF23670652144E127FBE2 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF4FD17FF3040D19F1C64154A84088275CAE4390F (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7D04EB848C9F153C75F938B8E6A205C7AE51E3CB (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4B9956DC88B27A3420B374A86934A1580F95E641 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m228F432AA230B8A1D129A86B4282CDEBFF0E8FF1 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TypeUtility_InstantiateArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC5B9A8BAFE4CCBA19BDC72EE7A419435D51B8242 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m65CECBA19C2C6A630F400B878D9A92233A17655A (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m194E3DA741BDEBF25A3C60B0FC34EF1F3B195181 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m1C21A325511C1DFF6CBC5E48BCFE2D3535E79222 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mBDCDF7D0BC6E47B30BE64EA588236670B5C24471 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C TypeUtility_InstantiateArray_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m2B9D063D00637D0447A4C11FB47B09941B363403 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD TypeUtility_InstantiateArray_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_mD63E9647B8CA975B336FAE4CE52FF194C4AFE7DF (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A TypeUtility_InstantiateArray_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_mA269B78B9BD562F17BDE27B8EDB5060ACC56BBCB (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F TypeUtility_InstantiateArray_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m46E9275DB4A9C928D434E13A1BFD19B1FE062815 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDF31B5C8D4CF6F63DBC402F93A4902BB41AF617A (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2BACF7BFD6126FA92934886441023C14606E4D8C (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m46250B5C56ACB8D9C79870A7B547FB2700AF15B3 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m5D38FA37D87EAA704CFB58AEA11F3EC39AEFF1E7 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3637F91F0F17A00FA935D28B4E541C9B060C9BA6 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m259ED3223591E91BEB1F81712D52CCC8D3BAC6A2 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m6DEE07D679CA855AFD3A5419D9392C42D17B2DBB (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mEB25031BEABB5F3EA90DCA5BB3F5BCF1640CC094 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mF6CC1C6523FEC87FC4FE2C056B2EA79FF9D86A99 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mD207EE98CF8D058E65D12DB022E33A4B5E4DBF37 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m6FFB4DCD0AF1BEB615B3D00D50BF35CB0B9342C1 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mF9A7C0989CE2A8051406819F505D0BA6C5D50838 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4CDC2E13990212E21BC38FB599391C977775D485 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m2191540D865D5C6B6E89077C71F21A78C85DA981 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m0C16A19AA37F598E96FC43BAC034C1CE27D61FB4 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m1C4E73EB209FC1E0BEB6E7B43C34FC4D6D65F174 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1ABB8FA4111774E4DB8BF236FE133FC3B853EB31 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA634FD62CD696DF6FA017D329A422645957FD156 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mF96AA496A11ADAECDE405B0CBA3473D8F5EE6619 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD8DB6F2EA0ADB994693DD77768291584174A4DE9 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8F366B3C02A71BF04557B18BB55876D5CD8B5729 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 TypeUtility_InstantiateArray_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m92E90C7EB64467D0614BDD9A33D92D8D26F2D617 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m32FBFE43FB00D4EE2A5BEECD7F1917EE537F64C1 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB61B6A4D7F0D0D8484013630AEFBA149769B6FE7 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mBE6CC421D48125AE28A56D9CEB17E48BC28B0BD7 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mBA193AA99BF2D7E99E6046F941E05C99A235A63B (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mF91B67E9FF2B0279DCF329767CEB8D6414F146BB (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3225CACF659C94C96CDD6A17CA6748484119CFF4 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA5679E431BDBAE50B0DFC594932302085A788F09 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1DCF9C5D3E23A02EEEA6B3E35B7E443E9DA28CEA (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF97DADA2889CD0267F74DF9C277E80F0381E68B4 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1D21AED87DD63F2A4BD2CD895FD0C931821C1514 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m52C36F69CCBFAD459D6F20B67E282EAD24432F7E (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2D2C323EE1D18FF02FAA35EA6FB3610F2FCD9DB9 (int32_t ___0_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TypeUtility_InstantiateArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m51DCC7AC226863673B0709F9AEA2FF04698BB788 (int32_t ___0_count, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m64BFA247074E3BD4CA40998405ACDF4B28A91917 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m64BFA247074E3BD4CA40998405ACDF4B28A91917_gshared)(___0_count, method);
}
inline Il2CppSharedGenericObject* TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m559F8B91A5CEB5A1CF45EC74D2B00C554A77A026 (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m559F8B91A5CEB5A1CF45EC74D2B00C554A77A026_gshared)(method);
}
inline int32_t TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m30A329BA1FE97C0064BF91006EE5EEC33C8EF052 (int32_t ___0_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m30A329BA1FE97C0064BF91006EE5EEC33C8EF052_gshared)(___0_count, method);
}
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD0E93B95180130DDAAB5700C477CAA98F398846B (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD0E93B95180130DDAAB5700C477CAA98F398846B_gshared)(___0_derivedType, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 TypeUtility_Instantiate_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED5BFDFF34F0D6E704E76BBBC4B393D26EF282A9 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED5BFDFF34F0D6E704E76BBBC4B393D26EF282A9_gshared)(___0_derivedType, method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m7D416EDF62FA540300D922F41F90E080EAC49A3D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m7D416EDF62FA540300D922F41F90E080EAC49A3D_gshared)(___0_derivedType, ___1_count, method);
}
inline StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 TypeUtility_Instantiate_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC68B301A6F1A4268203DD742B57E4EC46A819877 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC68B301A6F1A4268203DD742B57E4EC46A819877_gshared)(___0_derivedType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m281CED37618A25573CC4D58C97152E6FCA744AE8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F TypeUtility_Instantiate_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m7AF6959248FE34418A7CE3EE5E78680F237F3A41 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m4DF96EFBE097C17BF62272A0C6340D8AE72C657C (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 TypeUtility_Instantiate_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE8A1AB2E9E9B49488A93FCD2B86F77A25893346E (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m0D77DD60514ABFC7B1C56B2D56111E61FEA6FA82 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C TypeUtility_Instantiate_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE2FC596D6CE7CB8E9659399EE4C9DABC8D871103 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m159E2BD6FEBA9EDAE6D74A117DC4FFAA5042E3D0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 TypeUtility_Instantiate_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m946658B27C78F1B41B7C365D2C412A2C0C4768D1 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m9A5215A4152CEC4DF1A24F59B24399473DA7F261 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC TypeUtility_Instantiate_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAEC3FBA39DEC930DDDEF597E464BD7C804C5D05C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF8C1E97193ECF4B53A44C3C1ECDAFE16C67B8647 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 TypeUtility_Instantiate_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m6DF338468D32365904E0B2DBDC664DB97D1B0291 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE6DA1D7AC2CE4B25EF152A21566CB5ADA6D8F295 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 TypeUtility_Instantiate_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m54D4189802174B0AA0E99B59BAD924E484A80696 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m6AC0170455B90A67CBAACCDD442DC95ABFD6D519 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F TypeUtility_Instantiate_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m0C69A18A43A2E44105889800F21D1215AA8A5E1D (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFDEDCB17D521CA4B385F04161EBEA9EA14D95F6E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 TypeUtility_Instantiate_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m55C8EBC82EDFA8FAFB924ECE0705DB118140972F (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2D61874C339DFDB87955AA8F5662B167D5E769C1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_Instantiate_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m61658CC7B6E2962DF750E9611E884DE58CBD7CF1 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C80F9E94423A3E2D1E82D97BFCB0A36BB9C8DC7 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TypeUtility_Instantiate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m019581577126A0BB6BC129144339350367173F2C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDC60F7CBC30F8F1CDB241602647982EFB70B4049 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TypeUtility_Instantiate_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4E69CBE571B420D4739367A1A684594E9176FA57 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m59565BEA037538F9616274F0904A21A92E505410 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TypeUtility_Instantiate_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6F30A60D4188472BE371258A1BFDB523943245EC (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF998B0C8639046CB042624DD1E8E2EEE41483A20 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 TypeUtility_Instantiate_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m231C619D716B7251BE7A56BCB128745D7A365C19 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2A5D0D0C5D4BF967B0002C561CE2B0AC076C0403 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D TypeUtility_Instantiate_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m9FEFFAEBA7DDF77EF7BC781305AF1B539557A7B5 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEFAE44987A1E68F504981A4CDC33EE7BF2DE9A88 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TypeUtility_Instantiate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4E3F11E66287C360381FDCB1DA2CA86725108774 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA76F2DBF6B6D348502A244EED660C295B53699C8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 TypeUtility_Instantiate_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mBD4D352377EE256EE21A9E2178B41FCB240019FF (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m45593409D374AE79EA5A1F2A4B6F52B61EE002F8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF TypeUtility_Instantiate_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m463CF737CEC740B04F54A12BE8980E180E704C25 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m7B72C49E6CAE91CFB6C5A545808672BB4FD6A4B8 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C TypeUtility_Instantiate_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB244C132A6AC508484D18A78E401891F6D04B921 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_InstantiateArray_TisGuid_t_mAE74D365457CE44D013FBD6F5C8910BA1685DE5F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t TypeUtility_Instantiate_TisGuid_t_mA90DC3C8C09A7C9E6568E92268FBFEC92D9DD32C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m77243DEB812D7D2296B1AF569812F8312273A29C (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t TypeUtility_Instantiate_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCDB0D19649FB27FA7581762E8F49F57B9B7CDFA3 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m21D4F0D04451F49CAA1F911345ACECF52DC69E78 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeUtility_Instantiate_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED72462427639D9AEE6A910BD83F37CA49CC7C7 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2EF2E3C13101502B574BC39E2715C72FB8459364 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TypeUtility_Instantiate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA517D386045B05E3C434AF7A8670DD6AE7817C6F (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4F8CDB2A2F64850B2325B9FE8089EAFB41DB7CEF (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 TypeUtility_Instantiate_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m24AD2F55FB14086FC4CB1F422B3F4B1CAC7C424C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDF64A60F47F7DA7BF9766BA49DFE19C0380CBA02 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD TypeUtility_Instantiate_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m60B5595B39DAF4209FF6D63C7848715A38C2BB74 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TypeUtility_InstantiateArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m59CC56915E920CEDF16960F1B5A869AB5CB35ED0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TypeUtility_Instantiate_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m142BB88A0A8A3503825DBD5D83FFA4458BD41F93 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mC74924F19E1B4FE89E11350F5E4359CAC02E9031 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 TypeUtility_Instantiate_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAA23957AACEC7AAEEDBC4CC0C62EBBB1CE44AF7E (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m535DE2604C90D93B5EF29E60563BF287510E68CD (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 TypeUtility_Instantiate_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m7580D6813951CBE8AFDD15F8F0A4518B3AE2C17C (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9AF7AFAE2BC8E88458985B397188B65D6429F15 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t TypeUtility_Instantiate_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m0E989570F78731ED52B034096038E7CE0D3CCF2F (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mC2966E423F30D5B816EFD749C8D82415F1A4CB9E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 TypeUtility_Instantiate_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE05F2EAF164B530101B9452875662EA603AF0943 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C TypeUtility_InstantiateArray_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m60BB798A7533909CA0A3A833D208126CD497D11E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C TypeUtility_Instantiate_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m58CA6A5DFC70A805D59CC4B058C5F3737B65AA50 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD TypeUtility_InstantiateArray_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m18622F949DD2494A2902C656688DBFAAA09DE889 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD TypeUtility_Instantiate_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_mD2D1D87D985C7F8E8AE4C0F89393B73BB54D73D5 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A TypeUtility_InstantiateArray_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m7DCCE0975E173B8051950502D238411E46131D94 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A TypeUtility_Instantiate_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m33A0548230E126FB99AB62EB15504589363F7487 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F TypeUtility_InstantiateArray_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m64BEA7B8E49DF0E85F6F57D005CEE70420D9EC3D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F TypeUtility_Instantiate_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_mEAC075C3D90846893BBBE556EE5407A4A2F7D198 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF09E7466EBA4308168509A2F9728A7EA9E6CED6 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TypeUtility_Instantiate_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m250E596A76F4E90F0DA755803C33EBDBFE539487 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m57B789863DAB7572F3BD82A3E4725BABADD7EEF1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B TypeUtility_Instantiate_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8135215FC2AB524181F24E66F7435414D834E2BB (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m8CC06B652F2EDCE2EC3632D5DF1D101B2926EBC9 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 TypeUtility_Instantiate_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE343813C9CA5A97BC75783CB6DAF2F616B3B55AE (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0A1D4C8D7477CED01A3F834003DB6E501DCFDE69 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 TypeUtility_Instantiate_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA0D45D320F2FF075FAC8E7D1DC59525229D3725B (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m6063BE63BFEE553B550EDAA3CF5EB963962631DB (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 TypeUtility_Instantiate_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m87FB8CC317081B9CDD71674EB3781C942CC548DA (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m34A0EBBE05C15B267EBD94EEBB155A53A0FDA121 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 TypeUtility_Instantiate_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m0FA12EC0938963C3D515A0E51C10A1361572DE60 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m014366206E3CB9987B29A33B4C65423A04C1F7F2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 TypeUtility_Instantiate_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m70E21575B0F6E9AD50345A82D64B3CFB514689F9 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF7E17FA9A5CF34996D23E79DDB9E5A20927DB9FB (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 TypeUtility_Instantiate_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m50EDC2B685C7A805F736D71A9F2C53718CBD0A15 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6B000117BFE4A9051BFE17BFA36CB9757F702219 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C TypeUtility_Instantiate_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m0F2B5235B5E057586363B03F727359967889C90B (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8A0C7DB3A87350D4B09D2895CC4E63DEB2B848F2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 TypeUtility_Instantiate_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8ABF236CBC8462A860F41962378F343ED976194A (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBF031D97952C18A00E5BDEB0721BF94BF16CD11A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D TypeUtility_Instantiate_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mAE76E5A7A00036D7B4F5F084D60FD3A552229EAF (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m3D788ADEA04B7BE35B443C002B92D07035EF0DC4 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 TypeUtility_Instantiate_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m60378479ECF71A3A591DCD4BA34761B4F0C3DE9A (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mE590319AC35556C5E5507A5A2FABB8063FE182A5 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 TypeUtility_Instantiate_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1837276E59C8F890FA9BD44A8E51670023ECE350 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDEE17C84F12ED15070F7EBBEE81874E3E0C6818D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF TypeUtility_Instantiate_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m46FB416B10EDE0BAF84497C1B05A233320C5B6F7 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mA756B0A0DC07FEF686A4B6DD4B65E8B8DBDE19E7 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 TypeUtility_Instantiate_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m29FD1830C307E4141B84C66A9C31AFC09D375C16 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m5374D0E9476392FC56CA0A195B4DE560BFF8E25B (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B TypeUtility_Instantiate_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mADFA8E2A5519178DEFEA9FC206101B9A6A935215 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m29B340D26E10C35961DE46EA02E9B226747BDB03 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC TypeUtility_Instantiate_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m89DC23C50C35515832873025FB64E06C08178C78 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m48BB0241A4C98023239CF2CF4F989F4A3486EB73 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A TypeUtility_Instantiate_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mBFFBE5F19DBF010277EEACCE9F31DCE0F9E6735D (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mC60437D4258CCC0EED436E2308135742FFA1A486 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 TypeUtility_Instantiate_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m31926283C0C84C3057DC37C1DA770840CC661F47 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3B0C8A2D533799DB7C894ED49FD99469A4F30379 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 TypeUtility_Instantiate_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m20C781C9BF6F5A1A4976D3FB3307BBB54013A22D (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m5391C278FF0A30D77C5BA81B4DC8FA234AD0DBB1 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 TypeUtility_Instantiate_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8674710498BB040D77CD5485B6159C2E4CB1C905 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 TypeUtility_InstantiateArray_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mD9474F4D9CEED391C97F340328493802FF114F52 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 TypeUtility_Instantiate_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mF263E8645E025A85F46D85D7A85D3B967C63FA6A (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m0D082C6C1E325E8A3094CECE4109FA2B6BC845B0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A TypeUtility_Instantiate_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m967DD2CBFA6BC947E4DE2E707BCBFFC9C3934E17 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m356574AB280892F8D70F84B2A9B57B31DFDCE6A2 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 TypeUtility_Instantiate_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB6BA523635A2359078BF52FEA9788A0A4B8AA298 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m75AB3D5EF5305A5B9290D155687FCF8E45EF3A7E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TypeUtility_Instantiate_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mFCE31CF4FFACE349B84F71ABF91EA5C7C023D562 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m8C67F670872FC5934653ADE5A00B1A82E371381A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E TypeUtility_Instantiate_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0812591A8DD4A523E6213E0EC9E2E87E2603C8BE (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC144E3A67D34A3ADC811A1450B274DF968B1532A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 TypeUtility_Instantiate_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mBFDF9F0C56F5150550EC0074D77E66CF3931BA2E (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8F81C8DA8CF30FA56CE13BDA4ED0CABE5A33632A (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E TypeUtility_Instantiate_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m2BA2550AF563D560E55F3DD1D75E13BDC7B215AF (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAE4D88E99CFBCB527FDB8A69CFC234FFAB8BDC64 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t TypeUtility_Instantiate_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1888A6DF19F8A7D8B0EC95CEB7684676AD7B53A2 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m350E3A1013B8463C9CAC39E8CAAAEC2FE3BC4AA0 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TypeUtility_Instantiate_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m60A7F02D1165DBD7B8A86C32223D074AC470A12D (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF99178F8ACBC316A69EF45E4E708AC636A43E18E (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TypeUtility_Instantiate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA4762190B1329BFA260B76486E12EB9C8DC3C395 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m339A593FE002ECA805FFE4B0CF0B40013569EA0F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TypeUtility_Instantiate_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1F23C60E2F94481CDFA8152E9150C1FB9368DB35 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDD9287DF4B3A05EEAF8E5E0011397A74BBB01006 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TypeUtility_Instantiate_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7600CA1EB0951E940C81BF9344258E59D94968A0 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3946F03FE277A0176B3FB92619571D84765E225D (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TypeUtility_Instantiate_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m11FA35B9D91781E74463462DA6F839E3DD0A9C79 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TypeUtility_InstantiateArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAF5DA6DB52919078C14D9C2C22D25D0FBED3F042 (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 TypeUtility_Instantiate_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6CBC46773D78078C98E9B2D76E2FA8C53D004310 (Type_t* ___0_derivedType, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m5B52B348F62E628ABBC44D31571F29438607576F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m5B52B348F62E628ABBC44D31571F29438607576F_gshared)(___0_derivedType, ___1_count, method);
}
inline Il2CppSharedGenericObject* TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m64C5BBC9DEE2DFFA085224F695C9F344BD96DC56 (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m64C5BBC9DEE2DFFA085224F695C9F344BD96DC56_gshared)(___0_derivedType, method);
}
inline int32_t TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCACA68A5025C94A86BEBB68CA028105035F4339F (Type_t* ___0_derivedType, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Type_t*, int32_t, const RuntimeMethod*))TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCACA68A5025C94A86BEBB68CA028105035F4339F_gshared)(___0_derivedType, ___1_count, method);
}
inline int32_t TypeUtility_Instantiate_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCF68FB6FF6542EE0E2B81B9DC5C7DE5C6552EA3B (Type_t* ___0_derivedType, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Type_t*, const RuntimeMethod*))TypeUtility_Instantiate_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCF68FB6FF6542EE0E2B81B9DC5C7DE5C6552EA3B_gshared)(___0_derivedType, method);
}
inline int32_t CallbackArray_1_get_length_m096E657BAB53406356BABE16CE03C92212CF5A52 (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_mA74AA879F43D4FE35D07CA0FF4CADC8224149E09 (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C* CallbackArray_1_get_Item_mD75A66CA41114514F6664B0201F1BE0B77507643 (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C* (*) (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m30D56EDF2807EF309EEF182BA63A3F0EF0B08A15_inline (Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
inline void CallbackArray_1_UnlockForChanges_m36F89B841AF6C7B84793862F111411EA0A506313 (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_mFFAC883818E2BCC457BBF777A554074B41A117B1 (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_mFC9D2CA49E850527AC39060CAA5EE14F817BF93A (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* CallbackArray_1_get_Item_m2AF422EC69FF33A353657C8D406B8416DC93F3E5 (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* (*) (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505*, Il2CppSharedGenericObject*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
inline void CallbackArray_1_UnlockForChanges_m06C584095D38ED26F77D628B0295579927DC3DC0 (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m18912D90B28700D1EB2FC9AF10C0B445D4A0DA14 (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_mF89D40FEA286B287D5904A8AB1723A5CA9B189E2 (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* CallbackArray_1_get_Item_m39443ED00CCC69CF61F889F2E9E7F3148FB07F51 (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* (*) (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline void CallbackArray_1_UnlockForChanges_m4E81443C32892F7B07CB6C6C6FF795139E1A28FD (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m3C50042E1C2A1DA8489E324AF7137CFABFB617FA (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_mBF281A2D6F751F95BCBE59AB0C68F9CD6AE4C4E2 (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* CallbackArray_1_get_Item_m1F18565FAEB58506B8BE9336BC52ECAC9FE88ECB (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* (*) (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mC9D2864A52CF07F93C51935D9DCDF73E96FED543_inline (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_obj, const RuntimeMethod* method) ;
inline void CallbackArray_1_UnlockForChanges_m765CE8C02F49FCC086F4F5995EC74AC2E47B1243 (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m4F8E4ED95DD26B8315208C7DF232CE33FDF2C213 (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) ;
inline void CallbackArray_1_LockForChanges_mAA699B75E6E50429F03F485C2E669DE2A27D6B51 (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84* CallbackArray_1_get_Item_mB9C8F77AA342038D6FA68453B4CF398405E56A58 (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84* (*) (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline void Action_2_Invoke_m312AE472FD3B24244802F7163C20C407727A37A4_inline (Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, Il2CppSharedGenericObject*, const RuntimeMethod*))Action_2_Invoke_m312AE472FD3B24244802F7163C20C407727A37A4_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void CallbackArray_1_UnlockForChanges_m1E2E7F220AB25E4AF7C45159FC026BA2CCFB10FA (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m3578492D85B8A5A6EF6074431BF593EE606A648E (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_m5C8D95DD3B197800610584F0685CD1F35E21B4EF (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5* CallbackArray_1_get_Item_m06890F4404523377BFBF57AEC62C263DE1498424 (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5* (*) (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline void Action_2_Invoke_m9D812FF2BD9184B9649F4FEF3C24A5C462A3DCC9_inline (Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5* __this, Il2CppSharedGenericObject* ___0_arg1, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5*, Il2CppSharedGenericObject*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))Action_2_Invoke_m9D812FF2BD9184B9649F4FEF3C24A5C462A3DCC9_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void CallbackArray_1_UnlockForChanges_m04B654757D93520C7B4BCBA0FF2276B428B7FE89 (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m6B5A337757D5B80D11CDD6FECCA9B2B9A1019AF5 (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_m939089E1F4FDDCC7D1041FCC4C9541498618527E (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24* CallbackArray_1_get_Item_m4294B001E3A671376E24B247E08780E4DFAA9A97 (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24* (*) (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline void Action_2_Invoke_m5BD5405988E0E37A73DE7067708A7E8C4E3C7FB0_inline (Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))Action_2_Invoke_m5BD5405988E0E37A73DE7067708A7E8C4E3C7FB0_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void CallbackArray_1_UnlockForChanges_mCAEA85D619EB8EB5D96F91C361BE455FF8F8F22D (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m69B37806FA23DB9E0A1C0A6C528A25CB4CE8D0F7 (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_m519635C3DDA85035F17C5BB3ECE13440BC027E5D (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* CallbackArray_1_get_Item_m68CEE5FF005E9039720D8FE66E3C63C072BC6AA3 (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* (*) (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline void CallbackArray_1_UnlockForChanges_mD7C2C445F8F743FA145DB2796A5825DA2961FAF3 (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m98715DA90094A8FDFC9318577E6DEFBE223BA8A4 (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_m7C1FD17507ADFC943B9CCC1A591E4BBE0837576B (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Func_2_t51E0796D1DBB8E902BF230CE88C097AAC81A799E* CallbackArray_1_get_Item_m0228C5DE55BF56DC8854439974ABB93E344BEF75 (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Func_2_t51E0796D1DBB8E902BF230CE88C097AAC81A799E* (*) (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
inline void CallbackArray_1_UnlockForChanges_m7D23E3DA1442013515170F62012A7EED21B7A759 (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m4C25597B38384A32BCEC4C1A54F5E50082B5FCBD (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_mE876E4FF1585E1A69961B4B4C50136C44A3AA152 (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* CallbackArray_1_get_Item_mB846A33CB84F3537FD177CA95C15C6013FC252DF (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* (*) (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline void CallbackArray_1_UnlockForChanges_m7DD8441C0F01CF43BFD96C7306D28E32A2E737E5 (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m42C24C606790F8A69614498B3C5AF4072C43CBD5 (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_m6E22A5E5748195CB5B163FD5694F58304BEE30D3 (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C* CallbackArray_1_get_Item_mFECADBBF24370C0DB924974082A7FCA919F99CEB (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C* (*) (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline bool Func_3_Invoke_m4BC5CB4D8DB16449345D3F066DE90DDFCFE569E6_inline (Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C* __this, Il2CppSharedGenericObject* ___0_arg1, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C*, Il2CppSharedGenericObject*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*))Func_3_Invoke_m4BC5CB4D8DB16449345D3F066DE90DDFCFE569E6_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline void CallbackArray_1_UnlockForChanges_mAACC4FA4C3E074FDB40E0ADBADBAB4561B0874D6 (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
inline int32_t CallbackArray_1_get_length_m5AEF198CE01CAC738D8895C9A0CE2005761D447A (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC*, const RuntimeMethod*))CallbackArray_1_get_length_mC300C506E904B3D45306EF819340FC4A4160BA2C_gshared)(__this, method);
}
inline void CallbackArray_1_LockForChanges_mF31AA31E6D14901E68A83DD4E93C2BF8BE842A39 (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC*, const RuntimeMethod*))CallbackArray_1_LockForChanges_m8DEAC5BE12B3B04CEF8D37C3ACD39C5794396CEA_gshared)(__this, method);
}
inline Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* CallbackArray_1_get_Item_m460EE3E4BB43D0E8233A29A01527BE813447D144 (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* (*) (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC*, int32_t, const RuntimeMethod*))CallbackArray_1_get_Item_m8B24526DEE7EAC2244A34223DBC77B7B54FF6A6F_gshared)(__this, ___0_index, method);
}
inline void CallbackArray_1_UnlockForChanges_mBA12A7BCF7E83F3D85C9E72E5792BE8A91D3C5F1 (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* __this, const RuntimeMethod* method)
{
	((  void (*) (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC*, const RuntimeMethod*))CallbackArray_1_UnlockForChanges_m2BF4B58AB3AF3958916F355AD9D8C2BA0FA8FBD1_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
inline void SerializedKeyValue_2__ctor_mFB9E6B469C84CAE0804D7D8CE13D96B2A26EE4F1 (SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))SerializedKeyValue_2__ctor_mFB9E6B469C84CAE0804D7D8CE13D96B2A26EE4F1_fshared)((SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239*)__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DictionarySerialization_ResolveDictionaryFieldUniqueIdentifierForIgnoredLookups_m6763F5B901F8F8495466D725D7D12979C061F88A (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_hostingEntityId, intptr_t ___1_dictionaryIdentifierTemplateUtf8, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Object_GetCachedPtr_m3B66BC474B4F735F68184F00248385BAF9AF650B_inline (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoredEntriesData__ctor_mDAF58BFADB39318DC0E1A0445E50EC443963A519 (IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_indices, RuntimeArray* ___1_entries, int32_t ___2_dictionaryCountWhenRecorded, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_duplicateKeyIndices, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___4_nullKeyIndices, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 EntityId_get_None_mD09599DF1A9CD1DA879B59F1512CDFD4DAFCB39B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityId_op_Inequality_m6E0185C52F9593F494BD8F9181716849AFDFC0EF (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_left, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* DictionarySerialization_get_s_PostDictionaryKeyWarning_m3BD6B5E873C704F9B1F3EEAA9D9DA0EF25D98AA9_inline (const RuntimeMethod* method) ;
inline void Action_4_Invoke_mF39E247EB598EDBCD3D323C130AD8F7F2322BDDE_inline (Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_arg1, String_t* ___1_arg2, bool ___2_arg3, bool ___3_arg4, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, String_t*, bool, bool, const RuntimeMethod*))Action_4_Invoke_mAD44BB2F676DE19646EAF08F99C0AC6B04E4E228_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* GameObject_GetComponent_TisIl2CppSharedGenericObject_m2326F15B03AC79F0FF91C22873C9679752F372D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppSharedGenericObject_m2326F15B03AC79F0FF91C22873C9679752F372D0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD_gshared)(__this, method);
}
inline int32_t SortComparer_Invoke_mCFB297D1C3819FD5A4B2001EDC2ED981AFFD61B7_inline (SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* __this, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 ___0_x, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, const RuntimeMethod*))SortComparer_Invoke_mCFB297D1C3819FD5A4B2001EDC2ED981AFFD61B7_gshared_inline)(__this, ___0_x, ___1_y, method);
}
inline int32_t SortComparer_Invoke_m2DE06F31530E494852B44F0A69E0EA62E6029D44_inline (SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* __this, Il2CppSharedGenericObject* ___0_x, Il2CppSharedGenericObject* ___1_y, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*))SortComparer_Invoke_m2DE06F31530E494852B44F0A69E0EA62E6029D44_gshared_inline)(__this, ___0_x, ___1_y, method);
}
inline Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 DynamicArray_1_op_Implicit_m483FFDD62B46579837A31BD77AAD4786581B2FDC (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 (*) (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D*, const RuntimeMethod*))DynamicArray_1_op_Implicit_m483FFDD62B46579837A31BD77AAD4786581B2FDC_gshared)(___0_array, method);
}
inline int32_t DynamicArray_1_get_size_m1077A939B84C23F99846015B0082C444A1546E6A_inline (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D*, const RuntimeMethod*))DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline)(__this, method);
}
inline void DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_mBFA552C2BAEB0A60A784B0489459EE12432DBD80 (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50, int32_t, int32_t, const RuntimeMethod*))DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_mBFA552C2BAEB0A60A784B0489459EE12432DBD80_gshared)(___0_data, ___1_left, ___2_right, method);
}
inline void DynamicArray_1_BumpVersion_mE846157C38C9D5628C588E03E1A341D8FB1FBA4A (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D*, const RuntimeMethod*))DynamicArray_1_BumpVersion_m805F9A1491DEF04139B29760942E112E238387A3_fshared)(__this, method);
}
inline Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 DynamicArray_1_op_Implicit_mAFFF65049A686A3F0E8BB9EDC86DD4D277E3D5DE (DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 (*) (DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE*, const RuntimeMethod*))DynamicArray_1_op_Implicit_mAFFF65049A686A3F0E8BB9EDC86DD4D277E3D5DE_gshared)(___0_array, method);
}
inline int32_t DynamicArray_1_get_size_m0B2BC097E1665D0B776679BBD8B862C53A2DF259_inline (DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE*, const RuntimeMethod*))DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline)(__this, method);
}
inline void DynamicArrayExtensions_QuickSort_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mCBEAD9085CA4E536B727FA88F9CBEC4F8AD3B71C (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575, int32_t, int32_t, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D*, const RuntimeMethod*))DynamicArrayExtensions_QuickSort_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mCBEAD9085CA4E536B727FA88F9CBEC4F8AD3B71C_gshared)(___0_data, ___1_left, ___2_right, ___3_comparer, method);
}
inline void DynamicArray_1_BumpVersion_m76E34DC5F6F0DBA99D3FC70B5503768E852AD0D5 (DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE* __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE*, const RuntimeMethod*))DynamicArray_1_BumpVersion_m805F9A1491DEF04139B29760942E112E238387A3_fshared)(__this, method);
}
inline void DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_m38ED5C7119F4DF05C8E768A4B24B42F719B562D0 (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50, int32_t, int32_t, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D*, const RuntimeMethod*))DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_m38ED5C7119F4DF05C8E768A4B24B42F719B562D0_gshared)(___0_data, ___1_left, ___2_right, ___3_comparer, method);
}
inline int32_t DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_mB663CF7BB76FB01A3CCF3DFDDEFC64C12A1B7F53 (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50, int32_t, int32_t, const RuntimeMethod*))DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_mB663CF7BB76FB01A3CCF3DFDDEFC64C12A1B7F53_gshared)(___0_data, ___1_left, ___2_right, method);
}
inline int32_t DynamicArrayExtensions_Partition_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mE82BD3B0E32835BBE673E2B0F2579DEC49602C9B (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575, int32_t, int32_t, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D*, const RuntimeMethod*))DynamicArrayExtensions_Partition_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mE82BD3B0E32835BBE673E2B0F2579DEC49602C9B_gshared)(___0_data, ___1_left, ___2_right, ___3_comparer, method);
}
inline int32_t DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_m03B3ED2FE469210FB254E015D290DBF0FFE753E7 (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50, int32_t, int32_t, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D*, const RuntimeMethod*))DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_m03B3ED2FE469210FB254E015D290DBF0FFE753E7_gshared)(___0_data, ___1_left, ___2_right, ___3_comparer, method);
}
inline int32_t NativeSlice_1_get_Length_m7650D33DC04FE87C0736D620684106DF90ADFFBB_inline (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline)(__this, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB3AAF18DA01A2871ABC3A6C17DE5051ABF758556_inline (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline)(___0_nativeSlice, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
inline int32_t NativeSlice_1_get_Stride_m17EC64B052DD8EF9B7ECB34587008B81E4C1D0F9_inline (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A*, const RuntimeMethod*))NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline)(__this, method);
}
inline int32_t NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline)(__this, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C21A5534F31A98810D38191D4F5511CDF6F7FCD_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline)(___0_nativeSlice, method);
}
inline int32_t NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F*, const RuntimeMethod*))NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409 (intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7 (intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4C468864D7660B20C674222710F92C5E3480C543 (Il2CppChar* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Il2CppChar* L_6 = ___0_value;
		Il2CppChar L_7 = (*(Il2CppChar*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Il2CppChar* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Il2CppChar L_12;
		L_12 = TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m676AC6493B4E7C9435AE4D5B3CCD88CA82F0FEAC(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Il2CppChar*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m102D6022E9F552E51B677AA69760754C498EEFDD (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = ___0_value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF3F78B9E94843CD28EC5DDAF0BD693E759666D14(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m307A8720E9F460071F2BFE0B5BA01F4E94BAF565 (Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_6 = ___0_value;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_7 = (*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_12;
		L_12 = TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mB855FAB6AF0A5CA09C9ABBC302B7EF4C260249F2(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2C3852F9B2D5B73BA993C5A0F8AFB2451C104853 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = ___0_value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = (*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mEAB24B0BE2395E92D716C55C47FE4E0C2702DB30(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m8DB312B6AE961E2D6A28735A5E70FAB90E626F69 (double* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		double* L_6 = ___0_value;
		double L_7 = (*(double*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		double* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		double L_12;
		L_12 = TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m64655D4B23A6345C99CDA88F2C09CD4BA5701114(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(double*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m01F143DF1289C3138351F580139282D6263DD336 (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_6 = ___0_value;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_7 = (*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_12;
		L_12 = TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m9D3CE39F08B2E5DB645CB5C2BBC3236EAF921AC5(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m983AD10CEBAA2A7584587A121961B3C0673AD5C5 (FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_6 = ___0_value;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_7 = (*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_12;
		L_12 = TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m96E9F2F809C013795D66B8C9E80F6403683BE7B4(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_10)->___m_CustomDefinition), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mF28D47BE56D67E2278199A8014D75082A1F1E4A9 (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_6 = ___0_value;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_7 = (*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_12;
		L_12 = TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m00E8E315807018A3C5C84079A1A61C1D0882D245(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_10)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_10)->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisGuid_t_m0CDAE5DEC722F14857EF0C541080FC81F65FF6F1 (Guid_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Guid_t* L_6 = ___0_value;
		Guid_t L_7 = (*(Guid_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Guid_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Guid_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisGuid_t_mECFCBA4EA93F443946274B9433836876E91A1984(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Guid_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m46A4B18B94F346DD8D15B80D82CD5560E5D360FA (int16_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int16_t* L_6 = ___0_value;
		int16_t L_7 = (*(int16_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int16_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int16_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF6535404DC61AE11D53BF23670652144E127FBE2(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(int16_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5BEA2169EF3F5F8B7E7DBAF62CCBFD3B6AF09626 (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int32_t* L_6 = ___0_value;
		int32_t L_7 = (*(int32_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int32_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF4FD17FF3040D19F1C64154A84088275CAE4390F(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(int32_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA4461CA3458C58D1825D019A5F46B8E00D05E2E5 (int64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int64_t* L_6 = ___0_value;
		int64_t L_7 = (*(int64_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int64_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int64_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7D04EB848C9F153C75F938B8E6A205C7AE51E3CB(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(int64_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_mCA78E836751676155E9C7A2AEF773F4EB1B8B4D1 (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_6 = ___0_value;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_7 = (*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_12;
		L_12 = TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4B9956DC88B27A3420B374A86934A1580F95E641(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m3306B2F60760EBE12112B79E322249BD29E92B78 (MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_6 = ___0_value;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_7 = (*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_12;
		L_12 = TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m228F432AA230B8A1D129A86B4282CDEBFF0E8FF1(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_10)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_10)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m72C3A6F86C0EC3631106BD756C1B948A5CDF94E4 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6 = ___0_value;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = TypeUtility_InstantiateArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC5B9A8BAFE4CCBA19BDC72EE7A419435D51B8242(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAC7A421F2712C221A0E6DA9611952787DA25F3B1 (Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_6 = ___0_value;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_7 = (*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_12;
		L_12 = TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m65CECBA19C2C6A630F400B878D9A92233A17655A(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_mD8397A83E9B61650CEE4D597A69F808D6BE1FEE1 (Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_6 = ___0_value;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_7 = (*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_12;
		L_12 = TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m194E3DA741BDEBF25A3C60B0FC34EF1F3B195181(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mB37FFD86BECFB452333D5F3E698BC000020349B6 (int8_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int8_t* L_6 = ___0_value;
		int8_t L_7 = (*(int8_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int8_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int8_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m1C21A325511C1DFF6CBC5E48BCFE2D3535E79222(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(int8_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m1AC6F57620E36309C810F2A4D6C4879F5EE0F17B (Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_6 = ___0_value;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_7 = (*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_12;
		L_12 = TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mBDCDF7D0BC6E47B30BE64EA588236670B5C24471(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_mF5AE2167A131D84B902910C2E80D082F73739BBE (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_6 = ___0_value;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_7 = (*(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_12;
		L_12 = TypeUtility_InstantiateArray_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m2B9D063D00637D0447A4C11FB47B09941B363403(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_mCE7BE69EE8B977AAB8F7910915271807A6C23149 (SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_6 = ___0_value;
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_7 = (*(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_12;
		L_12 = TypeUtility_InstantiateArray_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_mD63E9647B8CA975B336FAE4CE52FF194C4AFE7DF(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m1E531F6A1839218D7BFAA2C6C020A3AFDFE0740D (SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_6 = ___0_value;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_7 = (*(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_12;
		L_12 = TypeUtility_InstantiateArray_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_mA269B78B9BD562F17BDE27B8EDB5060ACC56BBCB(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m1BD287722A099582463B86E70FEFE52C647A3ED5 (SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* L_6 = ___0_value;
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_7 = (*(SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_12;
		L_12 = TypeUtility_InstantiateArray_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m46E9275DB4A9C928D434E13A1BFD19B1FE062815(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA6518DC3D04AD2064099102F7E58C63CEE014348 (float* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		float* L_6 = ___0_value;
		float L_7 = (*(float*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		float* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_12;
		L_12 = TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDF31B5C8D4CF6F63DBC402F93A4902BB41AF617A(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(float*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_mE597B4C6C9E249BCD0489BDAD24F83CEC54A6B55 (StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_6 = ___0_value;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_7 = (*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2BACF7BFD6126FA92934886441023C14606E4D8C(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_10)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m702FA7813109DCAA50A0C2F3B337CC1DD3783CA0 (StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_6 = ___0_value;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_7 = (*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m46250B5C56ACB8D9C79870A7B547FB2700AF15B3(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m82ED4E4B75620298D16684D52137BAF5BEA1A4CA (StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_6 = ___0_value;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_7 = (*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m5D38FA37D87EAA704CFB58AEA11F3EC39AEFF1E7(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mC587DAB6223E6C547078EA9BD1E0F82F5EA47724 (StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_6 = ___0_value;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_7 = (*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m3637F91F0F17A00FA935D28B4E541C9B060C9BA6(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m2DA6CC826804216855DFEA99EF05460EF042D2D1 (StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_6 = ___0_value;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_7 = (*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m259ED3223591E91BEB1F81712D52CCC8D3BAC6A2(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m99F0D7D2A8BE62706FBC26898B3CF6C973E090D8 (StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_6 = ___0_value;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_7 = (*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m6DEE07D679CA855AFD3A5419D9392C42D17B2DBB(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m3F33FDE02C60629892A65CEF0F2D3A86C5FC6243 (StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_6 = ___0_value;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_7 = (*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mEB25031BEABB5F3EA90DCA5BB3F5BCF1640CC094(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m811DC224526258F4C29682970EE39EA4BE283865 (StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_6 = ___0_value;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_7 = (*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mF6CC1C6523FEC87FC4FE2C056B2EA79FF9D86A99(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_10)->___m_Value), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m17ACBEB6DAD8C203A2FBDCB810FEF15FD03854C3 (StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_6 = ___0_value;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_7 = (*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_mD207EE98CF8D058E65D12DB022E33A4B5E4DBF37(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_10)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_10)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mE3198093B3C5D36F90458F799830501573D44A3F (StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_6 = ___0_value;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_7 = (*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m6FFB4DCD0AF1BEB615B3D00D50BF35CB0B9342C1(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m3ACE6D076A631B1C089986500BBDA219466F8920 (StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_6 = ___0_value;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_7 = (*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mF9A7C0989CE2A8051406819F505D0BA6C5D50838(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mB3F1C78F6100A917E59E8CA80708BB73C11BA0C3 (StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_6 = ___0_value;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_7 = (*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m4CDC2E13990212E21BC38FB599391C977775D485(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_10)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_10)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDD97CF06DC6F4C2D582986D9D85CB7DDF90DF8A0 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_6 = ___0_value;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_7 = (*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_12;
		L_12 = TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m2191540D865D5C6B6E89077C71F21A78C85DA981(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_10)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m593F6D12A6B10DC9E43102ABAF4DC0E7B08843DE (StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_6 = ___0_value;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_7 = (*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m0C16A19AA37F598E96FC43BAC034C1CE27D61FB4(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m54B8A9DB531291CDB3F4A04EA3873CBD31B3FDB7 (StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_6 = ___0_value;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_7 = (*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m1C4E73EB209FC1E0BEB6E7B43C34FC4D6D65F174(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1F676A318B55DFB160F0BC2B45F87664E4AEB622 (StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_6 = ___0_value;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_7 = (*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m1ABB8FA4111774E4DB8BF236FE133FC3B853EB31(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mC566BCC7F58575572792CF7327D591286EDEE0FF (StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_6 = ___0_value;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_7 = (*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA634FD62CD696DF6FA017D329A422645957FD156(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m3C5AE945920B7A76DB4E85189B90156DCD0C57F2 (StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_6 = ___0_value;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_7 = (*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mF96AA496A11ADAECDE405B0CBA3473D8F5EE6619(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mAC04C9EDEDF1314C0DF762BB5F6A6C734F122922 (StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_6 = ___0_value;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_7 = (*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_mD8DB6F2EA0ADB994693DD77768291584174A4DE9(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m1FCCBCDAEA436793DB399D2B92C974AFCF802D2E (StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_6 = ___0_value;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_7 = (*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8F366B3C02A71BF04557B18BB55876D5CD8B5729(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m0512602DE216020C63445163E0F6CC56DE23C5BE (StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_6 = ___0_value;
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_7 = (*(StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_12;
		L_12 = TypeUtility_InstantiateArray_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_m92E90C7EB64467D0614BDD9A33D92D8D26F2D617(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_10)->___m_Value), (void*)NULL);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_mE386C8046B4934320928D89CDADF1F91E68995F2 (TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_6 = ___0_value;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_7 = (*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_12;
		L_12 = TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m32FBFE43FB00D4EE2A5BEECD7F1917EE537F64C1(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m62E3F20E5EBFC4A463C3DF221A9E45B98C83F3B3 (TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_6 = ___0_value;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_7 = (*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_12;
		L_12 = TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB61B6A4D7F0D0D8484013630AEFBA149769B6FE7(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mCB4AF0493AE4A1181F55B46EA57D1EF6881BFDF9 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_6 = ___0_value;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = (*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12;
		L_12 = TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mBE6CC421D48125AE28A56D9CEB17E48BC28B0BD7(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mF3E92CA69EEC74BB47A1DE566330388D02F58D5C (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_6 = ___0_value;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_7 = (*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_12;
		L_12 = TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mBA193AA99BF2D7E99E6046F941E05C99A235A63B(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m0D52010E252F342D6045DC081AFA3931C00F63A6 (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_6 = ___0_value;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_7 = (*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_12;
		L_12 = TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mF91B67E9FF2B0279DCF329767CEB8D6414F146BB(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m23C338CF030227E87CAC31B4AB18A8467DE44773 (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_6 = ___0_value;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_7 = (*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_12;
		L_12 = TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m3225CACF659C94C96CDD6A17CA6748484119CFF4(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8175B9D3FBC1DE78CE43D743DD405E29581D16D4 (uint16_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		uint16_t* L_6 = ___0_value;
		uint16_t L_7 = (*(uint16_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		uint16_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA5679E431BDBAE50B0DFC594932302085A788F09(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(uint16_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD355E11BC6F43EAD9604491C89C68FAB752A1DA0 (uint32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		uint32_t* L_6 = ___0_value;
		uint32_t L_7 = (*(uint32_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		uint32_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1DCF9C5D3E23A02EEEA6B3E35B7E443E9DA28CEA(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(uint32_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2B078F2A522E5C14CA63441B8C4E39B6803D887F (uint64_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		uint64_t* L_6 = ___0_value;
		uint64_t L_7 = (*(uint64_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		uint64_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_12;
		L_12 = TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF97DADA2889CD0267F74DF9C277E80F0381E68B4(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(uint64_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3C3975E9CF63D2DC9D1ADFD4E800C2CA656565DC (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = ___0_value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1D21AED87DD63F2A4BD2CD895FD0C931821C1514(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE03A1591ECE510AB2FF8D0A595751CF5A4F4B828 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m52C36F69CCBFAD459D6F20B67E282EAD24432F7E(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m7DAA78E1E311D98BA786D41E4E398CC672A8F91E (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_6 = ___0_value;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_12;
		L_12 = TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m2D2C323EE1D18FF02FAA35EA6FB3610F2FCD9DB9(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD4B7DEAC6A882DE3C37A8AFF0E7C32F2DB6B286F (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_6 = ___0_value;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		L_12 = TypeUtility_InstantiateArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m51DCC7AC226863673B0709F9AEA2FF04698BB788(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisIl2CppSharedGenericObject_mA04BBDBC00976637566B02550D13FCB218EDA310_gshared (Il2CppSharedGenericObject** ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		Il2CppSharedGenericObject** L_5 = ___0_value;
		Il2CppSharedGenericObject* L_6 = (*(Il2CppSharedGenericObject**)L_5);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		Il2CppSharedGenericObject** L_7 = ___0_value;
		Il2CppSharedGenericObject* L_8 = (*(Il2CppSharedGenericObject**)L_7);
		RuntimeArray* L_9 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_8, RuntimeArray_il2cpp_TypeInfo_var));
		if (L_9)
		{
			G_B4_0 = L_9;
			goto IL_003c;
		}
		G_B3_0 = L_9;
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_10;
		L_10 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_11 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Il2CppSharedGenericObject** L_12 = ___0_value;
		int32_t L_13 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_14;
		L_14 = TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m64BFA247074E3BD4CA40998405ACDF4B28A91917(L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(Il2CppSharedGenericObject**)L_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_12, (void*)L_14);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		Il2CppSharedGenericObject** L_15 = ___0_value;
		Il2CppSharedGenericObject* L_16 = (*(Il2CppSharedGenericObject**)L_15);
		if (L_16)
		{
			goto IL_006f;
		}
	}
	{
		Il2CppSharedGenericObject** L_17 = ___0_value;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_18;
		L_18 = TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m559F8B91A5CEB5A1CF45EC74D2B00C554A77A026(il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Il2CppSharedGenericObject**)L_17 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_17, (void*)L_18);
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_TisIl2CppFullySharedGenericAny_mC1FBBBB061E18479059896B39839E4CD79BC6D66_fshared (Il2CppFullySharedGenericAny* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TValue_tD4066A6E28E7C7B82D39F2C4FCBD78A7BC8EC8DE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tD4066A6E28E7C7B82D39F2C4FCBD78A7BC8EC8DE);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_16 = L_6;
	const Il2CppFullySharedGenericAny L_18 = L_6;
	const Il2CppFullySharedGenericAny L_21 = L_6;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		Il2CppFullySharedGenericAny* L_5 = ___0_value;
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TValue_tD4066A6E28E7C7B82D39F2C4FCBD78A7BC8EC8DE);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_6);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_8 = ___0_value;
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TValue_tD4066A6E28E7C7B82D39F2C4FCBD78A7BC8EC8DE);
		RuntimeObject* L_10 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 1), RuntimeArray_il2cpp_TypeInfo_var, L_9);;
		RuntimeObject* L_11 = L_10;
		if (L_11)
		{
			G_B4_0 = ((RuntimeArray*)(L_11));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(L_11));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_12;
		L_12 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_13 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		Il2CppFullySharedGenericAny* L_14 = ___0_value;
		int32_t L_15 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_15, (Il2CppFullySharedGenericAny*)L_16);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_14, L_16, SizeOf_TValue_tD4066A6E28E7C7B82D39F2C4FCBD78A7BC8EC8DE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_14, (void*)L_16);
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		Il2CppFullySharedGenericAny* L_17 = ___0_value;
		il2cpp_codegen_memcpy(L_18, L_17, SizeOf_TValue_tD4066A6E28E7C7B82D39F2C4FCBD78A7BC8EC8DE);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_18);
		if (L_19)
		{
			goto IL_006f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_20 = ___0_value;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (Il2CppFullySharedGenericAny*)L_21);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_20, L_21, SizeOf_TValue_tD4066A6E28E7C7B82D39F2C4FCBD78A7BC8EC8DE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_20, (void*)L_21);
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromDeclaredType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m3609E1103C5C9FF57948611A051C877A52117A0F_gshared (int32_t* ___0_value, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	RuntimeArray* G_B4_0 = NULL;
	RuntimeArray* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_1, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_3 = ___1_provider;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		int32_t* L_6 = ___0_value;
		int32_t L_7 = (*(int32_t*)L_6);
		if (NULL)
		{
			G_B4_0 = ((RuntimeArray*)(NULL));
			goto IL_003c;
		}
		G_B3_0 = ((RuntimeArray*)(NULL));
	}
	{
		G_B5_0 = 1;
		goto IL_0047;
	}

IL_003c:
	{
		NullCheck(G_B4_0);
		int32_t L_8;
		L_8 = il2cpp_codegen_array_get_length(G_B4_0);
		int32_t L_9 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0047:
	{
		if (!G_B5_0)
		{
			goto IL_0056;
		}
	}

IL_0049:
	{
		int32_t* L_10 = ___0_value;
		int32_t L_11 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_12;
		L_12 = TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m30A329BA1FE97C0064BF91006EE5EEC33C8EF052(L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		*(int32_t*)L_10 = L_12;
		return;
	}

IL_0056:
	{
		return;
	}

IL_0057:
	{
		goto IL_006f;
	}

IL_006f:
	{
		return;
	}
}
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86899
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_m8324537E3F18A33AED5A51095BAB289559C446B8_gshared (KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_7;
		L_7 = TypeUtility_InstantiateArray_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mD0E93B95180130DDAAB5700C477CAA98F398846B(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_4)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_4)->___value), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_9 = ___0_value;
		Il2CppFakeBox<KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_16;
		L_16 = TypeUtility_Instantiate_TisKeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826_mED5BFDFF34F0D6E704E76BBBC4B393D26EF282A9(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_14)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)L_14)->___value), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m66D391181C7593DA8AAE8C6611B1A23DDCC14074_gshared (StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_m7D416EDF62FA540300D922F41F90E080EAC49A3D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_9 = ___0_value;
		Il2CppFakeBox<StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26_mC68B301A6F1A4268203DD742B57E4EC46A819877(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleEnum_1_tAFD4AA79F79D19DE23805D46DA67778A70EBBF26*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_mC81D3ECC556E0C8BC0B0825450079389E0BB524F (StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m281CED37618A25573CC4D58C97152E6FCA744AE8(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_9 = ___0_value;
		Il2CppFakeBox<StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F L_16;
		L_16 = TypeUtility_Instantiate_TisStyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F_m7AF6959248FE34418A7CE3EE5E78680F237F3A41(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t5D2FA4535A553635ADCE6E1E3758E1FA02160E6F*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m8F7BCEB3707AFC51A8B2A81FF109DB8135C060E6 (StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_m4DF96EFBE097C17BF62272A0C6340D8AE72C657C(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_9 = ___0_value;
		Il2CppFakeBox<StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356_mE8A1AB2E9E9B49488A93FCD2B86F77A25893346E(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t8C83D4A5BF11A124E8127624CA6DC7ED436CA356*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m52D9A6C5150B38C4A45ED306AAE8AA046D8F2769 (StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_m0D77DD60514ABFC7B1C56B2D56111E61FEA6FA82(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_9 = ___0_value;
		Il2CppFakeBox<StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C L_16;
		L_16 = TypeUtility_Instantiate_TisStyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C_mE2FC596D6CE7CB8E9659399EE4C9DABC8D871103(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_tABF3DD9EB70CDF59829924CBA26ACDD1FBDD4C3C*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m9948691897F2616B2734EC421BBB7114B7E5ADED (StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m159E2BD6FEBA9EDAE6D74A117DC4FFAA5042E3D0(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_9 = ___0_value;
		Il2CppFakeBox<StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4_m946658B27C78F1B41B7C365D2C412A2C0C4768D1(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleList_1_t15E0FB58274532956EB643D58F1F7B95BED5B7C4*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mDADA0CA6F1289B5E24158EAAC89DDBB3AE98261E (Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_7;
		L_7 = TypeUtility_InstantiateArray_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_m9A5215A4152CEC4DF1A24F59B24399473DA7F261(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_9 = ___0_value;
		Il2CppFakeBox<Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC L_16;
		L_16 = TypeUtility_Instantiate_TisAngle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC_mAEC3FBA39DEC930DDDEF597E464BD7C804C5D05C(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Angle_t0229F612898D65B3CC646C40A32D93D8A33C1DFC*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m9B18B36306D8CBFE29F9398AC36E39A7EE74F63F (Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_7;
		L_7 = TypeUtility_InstantiateArray_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_mF8C1E97193ECF4B53A44C3C1ECDAFE16C67B8647(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_4)->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_9 = ___0_value;
		Il2CppFakeBox<Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_16;
		L_16 = TypeUtility_Instantiate_TisBackground_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_m6DF338468D32365904E0B2DBDC664DB97D1B0291(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8*)L_14)->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m1F5047F5A439E18CD22EC968B6B453C439F971C8 (BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_7;
		L_7 = TypeUtility_InstantiateArray_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_mE6DA1D7AC2CE4B25EF152A21566CB5ADA6D8F295(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_9 = ___0_value;
		Il2CppFakeBox<BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_16;
		L_16 = TypeUtility_Instantiate_TisBackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56_m54D4189802174B0AA0E99B59BAD924E484A80696(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m9CCCDB668CB1E9AD3233BA3987941F6DBA11C14B (BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_7;
		L_7 = TypeUtility_InstantiateArray_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m6AC0170455B90A67CBAACCDD442DC95ABFD6D519(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_9 = ___0_value;
		Il2CppFakeBox<BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_16;
		L_16 = TypeUtility_Instantiate_TisBackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F_m0C69A18A43A2E44105889800F21D1215AA8A5E1D(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mCB7B4BFBE9405ADB7DB1E426304E8B494D1E616C (BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_7;
		L_7 = TypeUtility_InstantiateArray_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_mFDEDCB17D521CA4B385F04161EBEA9EA14D95F6E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_9 = ___0_value;
		Il2CppFakeBox<BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7 L_16;
		L_16 = TypeUtility_Instantiate_TisBackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7_m55C8EBC82EDFA8FAFB924ECE0705DB118140972F(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(BackgroundSize_t809883E2D7BB1D8D85B4C3E1DBE189F187DB25E7*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1A2AF65ECADE3C5CD44B513F895FA6B54E24BD55 (bool* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		bool* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7;
		L_7 = TypeUtility_InstantiateArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2D61874C339DFDB87955AA8F5662B167D5E769C1(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(bool*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		bool* L_9 = ___0_value;
		Il2CppFakeBox<bool> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		bool* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_16;
		L_16 = TypeUtility_Instantiate_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m61658CC7B6E2962DF750E9611E884DE58CBD7CF1(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(bool*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9AC80A1A3E400B211062AC35585B4008451D7615 (uint8_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		uint8_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint8_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C80F9E94423A3E2D1E82D97BFCB0A36BB9C8DC7(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(uint8_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		uint8_t* L_9 = ___0_value;
		Il2CppFakeBox<uint8_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		uint8_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint8_t L_16;
		L_16 = TypeUtility_Instantiate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m019581577126A0BB6BC129144339350367173F2C(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint8_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE4FA35F0900F82640F7C17974F754315DD94D73D (Il2CppChar* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Il2CppChar* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Il2CppChar L_7;
		L_7 = TypeUtility_InstantiateArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mDC60F7CBC30F8F1CDB241602647982EFB70B4049(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Il2CppChar*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Il2CppChar* L_9 = ___0_value;
		Il2CppFakeBox<Il2CppChar> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Il2CppChar* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Il2CppChar L_16;
		L_16 = TypeUtility_Instantiate_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4E69CBE571B420D4739367A1A684594E9176FA57(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Il2CppChar*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m1FDB7D9FBAA65435715AE54CAAF0689D6E7BAE8D (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = TypeUtility_InstantiateArray_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m59565BEA037538F9616274F0904A21A92E505410(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = ___0_value;
		Il2CppFakeBox<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = TypeUtility_Instantiate_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m6F30A60D4188472BE371258A1BFDB523943245EC(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m04C0547437FE72446129B7B13E3FD86CF9565A4D (Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_7;
		L_7 = TypeUtility_InstantiateArray_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_mF998B0C8639046CB042624DD1E8E2EEE41483A20(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_9 = ___0_value;
		Il2CppFakeBox<Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82 L_16;
		L_16 = TypeUtility_Instantiate_TisCursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82_m231C619D716B7251BE7A56BCB128745D7A365C19(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Cursor_t24C3B5095F65B86794C4F7EA168E324DFDA9EE82*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m9883353EF2EA9AF64F07B1F627B841F2777CC99F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = TypeUtility_InstantiateArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2A5D0D0C5D4BF967B0002C561CE2B0AC076C0403(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_9 = ___0_value;
		Il2CppFakeBox<DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
		L_16 = TypeUtility_Instantiate_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m9FEFFAEBA7DDF77EF7BC781305AF1B539557A7B5(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mB660D7C816E06803EB1A360077AC4E94D31F4848 (double* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		double* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		double L_7;
		L_7 = TypeUtility_InstantiateArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEFAE44987A1E68F504981A4CDC33EE7BF2DE9A88(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(double*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		double* L_9 = ___0_value;
		Il2CppFakeBox<double> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		double* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		double L_16;
		L_16 = TypeUtility_Instantiate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m4E3F11E66287C360381FDCB1DA2CA86725108774(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(double*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_m5B9EE3FED081E8C982E905A61467C116662B4610 (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_7;
		L_7 = TypeUtility_InstantiateArray_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mA76F2DBF6B6D348502A244EED660C295B53699C8(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_9 = ___0_value;
		Il2CppFakeBox<EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_16;
		L_16 = TypeUtility_Instantiate_TisEasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4_mBD4D352377EE256EE21A9E2178B41FCB240019FF(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m762CDD3E941EEC7668078220F5B7CE8AA7FD5692 (FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_7;
		L_7 = TypeUtility_InstantiateArray_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m45593409D374AE79EA5A1F2A4B6F52B61EE002F8(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_4)->___m_CustomDefinition), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_9 = ___0_value;
		Il2CppFakeBox<FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF L_16;
		L_16 = TypeUtility_Instantiate_TisFilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF_m463CF737CEC740B04F54A12BE8980E180E704C25(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((FilterFunction_t32E0707BD9D9F770A2A7578985A5C163FC1AAEFF*)L_14)->___m_CustomDefinition), (void*)NULL);
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m8B58124F8E99530651E390258BF68CC2DD5D78FE (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_7;
		L_7 = TypeUtility_InstantiateArray_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_m7B72C49E6CAE91CFB6C5A545808672BB4FD6A4B8(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_4)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_4)->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_9 = ___0_value;
		Il2CppFakeBox<FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_16;
		L_16 = TypeUtility_Instantiate_TisFontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_mB244C132A6AC508484D18A78E401891F6D04B921(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_14)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C*)L_14)->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisGuid_t_m818E3410EF8D3EBCA60DD5CC828E4EAF2AC6BF61 (Guid_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Guid_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Guid_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisGuid_t_mAE74D365457CE44D013FBD6F5C8910BA1685DE5F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Guid_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Guid_t* L_9 = ___0_value;
		Il2CppFakeBox<Guid_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Guid_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Guid_t L_16;
		L_16 = TypeUtility_Instantiate_TisGuid_t_mA90DC3C8C09A7C9E6568E92268FBFEC92D9DD32C(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Guid_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m322FE7E62DEED33E45D1EF20B8990EB54A404CBE (int16_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int16_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int16_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m77243DEB812D7D2296B1AF569812F8312273A29C(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(int16_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int16_t* L_9 = ___0_value;
		Il2CppFakeBox<int16_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int16_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int16_t L_16;
		L_16 = TypeUtility_Instantiate_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCDB0D19649FB27FA7581762E8F49F57B9B7CDFA3(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int16_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFF110A66DE4ED3CF5AC15D8B36485169898BC78E (int32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int32_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m21D4F0D04451F49CAA1F911345ACECF52DC69E78(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(int32_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int32_t* L_9 = ___0_value;
		Il2CppFakeBox<int32_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int32_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = TypeUtility_Instantiate_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2ED72462427639D9AEE6A910BD83F37CA49CC7C7(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA888E81B1FEA640B1880C0216B570FFC0E87DA84 (int64_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int64_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int64_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m2EF2E3C13101502B574BC39E2715C72FB8459364(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(int64_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int64_t* L_9 = ___0_value;
		Il2CppFakeBox<int64_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int64_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int64_t L_16;
		L_16 = TypeUtility_Instantiate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mA517D386045B05E3C434AF7A8670DD6AE7817C6F(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int64_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m262AF84219C140CE5D2BF3111F48B421CD469729 (Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_7;
		L_7 = TypeUtility_InstantiateArray_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m4F8CDB2A2F64850B2325B9FE8089EAFB41DB7CEF(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_9 = ___0_value;
		Il2CppFakeBox<Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 L_16;
		L_16 = TypeUtility_Instantiate_TisLength_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256_m24AD2F55FB14086FC4CB1F422B3F4B1CAC7C424C(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m81676A29F2A1297F8908F0ABE0C79138EA580BF9 (MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_7;
		L_7 = TypeUtility_InstantiateArray_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_mDF64A60F47F7DA7BF9766BA49DFE19C0380CBA02(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_4)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_4)->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_9 = ___0_value;
		Il2CppFakeBox<MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD L_16;
		L_16 = TypeUtility_Instantiate_TisMaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD_m60B5595B39DAF4209FF6D63C7848715A38C2BB74(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_14)->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((MaterialDefinition_t25B84AF58B1F4D1990933E5EBCD2DE6989ECB8CD*)L_14)->___propertyValues), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m2FFCF96F4C5095F2C4E674DC57A6A4EC65C0887F (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = TypeUtility_InstantiateArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m59CC56915E920CEDF16960F1B5A869AB5CB35ED0(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_9 = ___0_value;
		Il2CppFakeBox<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = TypeUtility_Instantiate_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m142BB88A0A8A3503825DBD5D83FFA4458BD41F93(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_m474DC586C0B1BCFE08B89190D74BA3B7C2FC5EEA (Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_7;
		L_7 = TypeUtility_InstantiateArray_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mC74924F19E1B4FE89E11350F5E4359CAC02E9031(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_9 = ___0_value;
		Il2CppFakeBox<Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3 L_16;
		L_16 = TypeUtility_Instantiate_TisRatio_t66C366BD5A2636748B25C00FD6A63F40A09712B3_mAA23957AACEC7AAEEDBC4CC0C62EBBB1CE44AF7E(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Ratio_t66C366BD5A2636748B25C00FD6A63F40A09712B3*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m08FD4AD610ECF32B2A8A3D925B6EC243886346F3 (Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_7;
		L_7 = TypeUtility_InstantiateArray_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m535DE2604C90D93B5EF29E60563BF287510E68CD(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_9 = ___0_value;
		Il2CppFakeBox<Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7 L_16;
		L_16 = TypeUtility_Instantiate_TisRotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7_m7580D6813951CBE8AFDD15F8F0A4518B3AE2C17C(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Rotate_tE965CA0281A547AB38B881A3416FF97756D3F4D7*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m41568C226231E697028016C7F94D2A5F3DCC03D1 (int8_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int8_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int8_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD9AF7AFAE2BC8E88458985B397188B65D6429F15(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(int8_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int8_t* L_9 = ___0_value;
		Il2CppFakeBox<int8_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int8_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int8_t L_16;
		L_16 = TypeUtility_Instantiate_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m0E989570F78731ED52B034096038E7CE0D3CCF2F(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int8_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_m09FE2B68107BD824DFC67835966F49B84793427A (Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_7;
		L_7 = TypeUtility_InstantiateArray_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mC2966E423F30D5B816EFD749C8D82415F1A4CB9E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_9 = ___0_value;
		Il2CppFakeBox<Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7 L_16;
		L_16 = TypeUtility_Instantiate_TisScale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7_mE05F2EAF164B530101B9452875662EA603AF0943(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Scale_t5594C69C1AC9398B57ABF6C4FA0D4E791B7A4DC7*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m3A8041D0DDCCA271953C40460F6D9EE76EC7FB9D (SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_7;
		L_7 = TypeUtility_InstantiateArray_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m60BB798A7533909CA0A3A833D208126CD497D11E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_9 = ___0_value;
		Il2CppFakeBox<SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C L_16;
		L_16 = TypeUtility_Instantiate_TisSerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C_m58CA6A5DFC70A805D59CC4B058C5F3737B65AA50(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializableGUID_t70853B974DBD9553713E8348D363F4D63B52807C*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m4F239B2E229240355492D7C6367AF4C696C8A040 (SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_7;
		L_7 = TypeUtility_InstantiateArray_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_m18622F949DD2494A2902C656688DBFAAA09DE889(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_9 = ___0_value;
		Il2CppFakeBox<SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD L_16;
		L_16 = TypeUtility_Instantiate_TisSerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD_mD2D1D87D985C7F8E8AE4C0F89393B73BB54D73D5(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedArrayView_tBA7871022802D9111BD34D83DCF54D1E0D2248FD*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m8937A200D5A7AF10AB9445A42BD75FD77FFE7702 (SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_7;
		L_7 = TypeUtility_InstantiateArray_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m7DCCE0975E173B8051950502D238411E46131D94(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_9 = ___0_value;
		Il2CppFakeBox<SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A L_16;
		L_16 = TypeUtility_Instantiate_TisSerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A_m33A0548230E126FB99AB62EB15504589363F7487(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedObjectView_t0DEC5ADA6810F283A2F5B10CBD0EA4C0823FC65A*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m306D27F0EDE4DE5914E32CCC0EDAA4DB2FE33940 (SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_7;
		L_7 = TypeUtility_InstantiateArray_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_m64BEA7B8E49DF0E85F6F57D005CEE70420D9EC3D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* L_9 = ___0_value;
		Il2CppFakeBox<SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F L_16;
		L_16 = TypeUtility_Instantiate_TisSerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F_mEAC075C3D90846893BBBE556EE5407A4A2F7D198(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedValueView_tB4BFDFF703A3EB35C1ED443E015819A9CFF4C82F*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m0AD2DD22A20AC9EDD3B4B5C99777331ECAFA7917 (float* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		float* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_7;
		L_7 = TypeUtility_InstantiateArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mEF09E7466EBA4308168509A2F9728A7EA9E6CED6(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(float*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		float* L_9 = ___0_value;
		Il2CppFakeBox<float> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		float* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		float L_16;
		L_16 = TypeUtility_Instantiate_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m250E596A76F4E90F0DA755803C33EBDBFE539487(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(float*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m2331BC12ABD6740B95EDC749F086632AFBC2036E (StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m57B789863DAB7572F3BD82A3E4725BABADD7EEF1(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_4)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_9 = ___0_value;
		Il2CppFakeBox<StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B L_16;
		L_16 = TypeUtility_Instantiate_TisStyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B_m8135215FC2AB524181F24E66F7435414D834E2BB(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14)->___m_Value))->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14)->___m_Value))->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14)->___m_Value))->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleBackground_t28A4439F46056BAFA6F4450CD1DE8F333571C97B*)L_14)->___m_Value))->___m_VectorImage), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m9FD3F145B2C5037E289468818D99AD80CCC64DDC (StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_m8CC06B652F2EDCE2EC3632D5DF1D101B2926EBC9(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_9 = ___0_value;
		Il2CppFakeBox<StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3_mE343813C9CA5A97BC75783CB6DAF2F616B3B55AE(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleBackgroundPosition_t707AF9D66EF808C1B1DE174CAB623D97A653C3F3*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0D455C7EF87AFC8B6A4BF15067ADF18473D7D74D (StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_m0A1D4C8D7477CED01A3F834003DB6E501DCFDE69(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_9 = ___0_value;
		Il2CppFakeBox<StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866_mA0D45D320F2FF075FAC8E7D1DC59525229D3725B(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleBackgroundRepeat_t38B84958D5608FAA86B06F513716444EA06DB866*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_mF298AB31F272364F2E6975161D8111920FEBE237 (StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m6063BE63BFEE553B550EDAA3CF5EB963962631DB(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_9 = ___0_value;
		Il2CppFakeBox<StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008_m87FB8CC317081B9CDD71674EB3781C942CC548DA(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleBackgroundSize_t0904929E2E236696CEC8DBD4B1082E8313F84008*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m690EBED07F9648AA6BA8B8CB2F9E0EC496EFB7A9 (StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m34A0EBBE05C15B267EBD94EEBB155A53A0FDA121(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_9 = ___0_value;
		Il2CppFakeBox<StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910_m0FA12EC0938963C3D515A0E51C10A1361572DE60(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleColor_tFC32BA34A15742AC48D6AACF8A137A6F71F04910*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_mA1BC37A39011D994E7FA63165B87292199EAF2B3 (StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m014366206E3CB9987B29A33B4C65423A04C1F7F2(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_9 = ___0_value;
		Il2CppFakeBox<StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610_m70E21575B0F6E9AD50345A82D64B3CFB514689F9(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleCursor_tE485E9D7E54AC3A3D514CD63313D77F75BD8C610*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mFB9CC2CD2B5DB18964513CBFEC69433E7C2104BF (StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_mF7E17FA9A5CF34996D23E79DDB9E5A20927DB9FB(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_9 = ___0_value;
		Il2CppFakeBox<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841_m50EDC2B685C7A805F736D71A9F2C53718CBD0A15(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_mEEF9A642A0C10E01E38E949363F243AD7CDA8D3A (StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m6B000117BFE4A9051BFE17BFA36CB9757F702219(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_9 = ___0_value;
		Il2CppFakeBox<StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C L_16;
		L_16 = TypeUtility_Instantiate_TisStyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C_m0F2B5235B5E057586363B03F727359967889C90B(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleFont_t9D8A6F3E224B60FD8BA1522CE8AB0E2E8BE8B77C*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m314B27E986FB6B4000AE3B29793370AC31EE1B47 (StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8A0C7DB3A87350D4B09D2895CC4E63DEB2B848F2(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_4)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_4)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_9 = ___0_value;
		Il2CppFakeBox<StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4_m8ABF236CBC8462A860F41962378F343ED976194A(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_14)->___m_Value))->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleFontDefinition_t0E1130277B322724A677D489018D219F014070F4*)L_14)->___m_Value))->___m_FontAsset), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_m0F0DDCBA4EE151816E40ADD9062B233F64E5C5AA (StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mBF031D97952C18A00E5BDEB0721BF94BF16CD11A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_9 = ___0_value;
		Il2CppFakeBox<StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D L_16;
		L_16 = TypeUtility_Instantiate_TisStyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D_mAE76E5A7A00036D7B4F5F084D60FD3A552229EAF(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleInt_tDC5B2FE9B1ABA54EEF85A7798F321F40BDC8B25D*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_mD21C3E10EAF7E8A0CA0AD10FC39929E141FC6F18 (StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m3D788ADEA04B7BE35B443C002B92D07035EF0DC4(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_9 = ___0_value;
		Il2CppFakeBox<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8_m60378479ECF71A3A591DCD4BA34761B4F0C3DE9A(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m09A19FF44EA81BC80D4542481F9ECF258942EA68 (StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_mE590319AC35556C5E5507A5A2FABB8063FE182A5(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_4)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_4)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}

IL_001d:
	{
	}
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_9 = ___0_value;
		Il2CppFakeBox<StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471_m1837276E59C8F890FA9BD44A8E51670023ECE350(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_14)->___m_Value))->___m_Material), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((StyleMaterialDefinition_tD636761D4A563CA86667B8A4824D599FD008B471*)L_14)->___m_Value))->___propertyValues), (void*)NULL);
		#endif
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mFAF86B4F8EBA108000768880379E35B01C9C254A (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_7;
		L_7 = TypeUtility_InstantiateArray_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_mDEE17C84F12ED15070F7EBBEE81874E3E0C6818D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_4)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_9 = ___0_value;
		Il2CppFakeBox<StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_16;
		L_16 = TypeUtility_Instantiate_TisStylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_m46FB416B10EDE0BAF84497C1B05A233320C5B6F7(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF*)L_14)->___U3CnameU3Ek__BackingField), (void*)NULL);
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m9BB80211BE3E547BEAD3785C2BBD276EFAA71173 (StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_mA756B0A0DC07FEF686A4B6DD4B65E8B8DBDE19E7(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_9 = ___0_value;
		Il2CppFakeBox<StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906_m29FD1830C307E4141B84C66A9C31AFC09D375C16(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleRatio_t7F5BA86302D3F11C5E1A8CB91AB7BFA3B5B75906*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m63C54D612BF47D98BE0CD7DCEE7590F20DF05B5C (StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_m5374D0E9476392FC56CA0A195B4DE560BFF8E25B(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_9 = ___0_value;
		Il2CppFakeBox<StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B L_16;
		L_16 = TypeUtility_Instantiate_TisStyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B_mADFA8E2A5519178DEFEA9FC206101B9A6A935215(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleRotate_t59305F0FBB44EA70AE332ECF9279C270B3F2283B*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m20F4DB990B8F531E01B048C5C956B3F61F9829ED (StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m29B340D26E10C35961DE46EA02E9B226747BDB03(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_9 = ___0_value;
		Il2CppFakeBox<StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC L_16;
		L_16 = TypeUtility_Instantiate_TisStyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC_m89DC23C50C35515832873025FB64E06C08178C78(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleScale_t45D687B313B39CD6FB3686ED44DECDDA402923BC*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mA41B2492AB5F8E78C06F164E1F8C98285EF883B2 (StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_m48BB0241A4C98023239CF2CF4F989F4A3486EB73(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_9 = ___0_value;
		Il2CppFakeBox<StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A L_16;
		L_16 = TypeUtility_Instantiate_TisStyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A_mBFFBE5F19DBF010277EEACCE9F31DCE0F9E6735D(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleTextAutoSize_t1F33415D18D97D0242C4C2C450BEF0B475253F4A*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m854A55C068677964B1497676344D446B72996005 (StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_mC60437D4258CCC0EED436E2308135742FFA1A486(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_9 = ___0_value;
		Il2CppFakeBox<StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252_m31926283C0C84C3057DC37C1DA770840CC661F47(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleTextShadow_tCDDF1FE733ADBAA5ACA3B74620D4728E83F54252*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m076CAF8FE632CF47F1B74455036FE11D0B6018B6 (StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m3B0C8A2D533799DB7C894ED49FD99469A4F30379(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_9 = ___0_value;
		Il2CppFakeBox<StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6_m20C781C9BF6F5A1A4976D3FB3307BBB54013A22D(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleTransformOrigin_t708B2E73541ECAE23D286FE68D6BC2CCFAAB84A6*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_mDFBE279BBA5B15998C8CF7FEA0FE58934F885AFB (StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m5391C278FF0A30D77C5BA81B4DC8FA234AD0DBB1(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_9 = ___0_value;
		Il2CppFakeBox<StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089_m8674710498BB040D77CD5485B6159C2E4CB1C905(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleTranslate_tF9528CA4B45EE4EB2C4D294336A83D88DB6AF089*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mFA1F383E08024DC930E89E1415449E98D350E104 (StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_7;
		L_7 = TypeUtility_InstantiateArray_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mD9474F4D9CEED391C97F340328493802FF114F52(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_4)->___m_Value), (void*)NULL);
		return;
	}

IL_001d:
	{
	}
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_9 = ___0_value;
		Il2CppFakeBox<StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5 L_16;
		L_16 = TypeUtility_Instantiate_TisStyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5_mF263E8645E025A85F46D85D7A85D3B967C63FA6A(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((StyleUIAnimationClip_t086DB226C1ACBC1C18CBA748C1BEA3A07E820DE5*)L_14)->___m_Value), (void*)NULL);
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m85C4749CF9DEF2C6D6EE6C84DD5A3B0B50CDA996 (TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_7;
		L_7 = TypeUtility_InstantiateArray_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m0D082C6C1E325E8A3094CECE4109FA2B6BC845B0(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_9 = ___0_value;
		Il2CppFakeBox<TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A L_16;
		L_16 = TypeUtility_Instantiate_TisTextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A_m967DD2CBFA6BC947E4DE2E707BCBFFC9C3934E17(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TextAutoSize_t8B7DB1DB1B1C9EF3DE876BB4D487CB00DBE3207A*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m8879068D3CD8F90119A28BA00B628C264BDA53A8 (TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_7;
		L_7 = TypeUtility_InstantiateArray_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_m356574AB280892F8D70F84B2A9B57B31DFDCE6A2(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_9 = ___0_value;
		Il2CppFakeBox<TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05 L_16;
		L_16 = TypeUtility_Instantiate_TisTextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05_mB6BA523635A2359078BF52FEA9788A0A4B8AA298(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TextShadow_t6BADF37AB90ABCB63859A225B58AC5A580950A05*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m1B3F699A46C5737BC712904FE181F2DAD9A736B3 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7;
		L_7 = TypeUtility_InstantiateArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m75AB3D5EF5305A5B9290D155687FCF8E45EF3A7E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_9 = ___0_value;
		Il2CppFakeBox<TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_16;
		L_16 = TypeUtility_Instantiate_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mFCE31CF4FFACE349B84F71ABF91EA5C7C023D562(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_mA1A378B1FFCC61A94A08F54148AFE5A68BE9E9F3 (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_7;
		L_7 = TypeUtility_InstantiateArray_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m8C67F670872FC5934653ADE5A00B1A82E371381A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_9 = ___0_value;
		Il2CppFakeBox<TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_16;
		L_16 = TypeUtility_Instantiate_TisTimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E_m0812591A8DD4A523E6213E0EC9E2E87E2603C8BE(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_m199BFAA5C07CB47D13EECE190ABA6017F0AEFD2B (TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_7;
		L_7 = TypeUtility_InstantiateArray_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mC144E3A67D34A3ADC811A1450B274DF968B1532A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_9 = ___0_value;
		Il2CppFakeBox<TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502 L_16;
		L_16 = TypeUtility_Instantiate_TisTransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502_mBFDF9F0C56F5150550EC0074D77E66CF3931BA2E(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TransformOrigin_tD11A368A96C0771398EBB4E6D435318AC0EF8502*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m72D40BD32BE26BA60C16A40E88ADB3CDF86EFF1B (Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_7;
		L_7 = TypeUtility_InstantiateArray_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m8F81C8DA8CF30FA56CE13BDA4ED0CABE5A33632A(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_9 = ___0_value;
		Il2CppFakeBox<Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E L_16;
		L_16 = TypeUtility_Instantiate_TisTranslate_t494F6E802F8A640D67819C9D26BE62DED1218A8E_m2BA2550AF563D560E55F3DD1D75E13BDC7B215AF(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Translate_t494F6E802F8A640D67819C9D26BE62DED1218A8E*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5D0F7C1822ACFD13B0C4EDE480011B525A3D22CB (uint16_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		uint16_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAE4D88E99CFBCB527FDB8A69CFC234FFAB8BDC64(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(uint16_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		uint16_t* L_9 = ___0_value;
		Il2CppFakeBox<uint16_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		uint16_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint16_t L_16;
		L_16 = TypeUtility_Instantiate_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1888A6DF19F8A7D8B0EC95CEB7684676AD7B53A2(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint16_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mC64002C208A3E75F72C24E11E835DC3702673D7C (uint32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		uint32_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m350E3A1013B8463C9CAC39E8CAAAEC2FE3BC4AA0(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(uint32_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		uint32_t* L_9 = ___0_value;
		Il2CppFakeBox<uint32_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		uint32_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_16;
		L_16 = TypeUtility_Instantiate_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m60A7F02D1165DBD7B8A86C32223D074AC470A12D(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint32_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m60C7B377AE15757AAE9200C0C6AD13C459999E8C (uint64_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		uint64_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_7;
		L_7 = TypeUtility_InstantiateArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF99178F8ACBC316A69EF45E4E708AC636A43E18E(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(uint64_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		uint64_t* L_9 = ___0_value;
		Il2CppFakeBox<uint64_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		uint64_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		uint64_t L_16;
		L_16 = TypeUtility_Instantiate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA4762190B1329BFA260B76486E12EB9C8DC3C395(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint64_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4EB1A8D5532C851BD9573D258D2D3C7F3054AF16 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = TypeUtility_InstantiateArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m339A593FE002ECA805FFE4B0CF0B40013569EA0F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = ___0_value;
		Il2CppFakeBox<Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = TypeUtility_Instantiate_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m1F23C60E2F94481CDFA8152E9150C1FB9368DB35(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF98C1FC136003B38A40B78DB7307AF4095D88E7D (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = TypeUtility_InstantiateArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mDD9287DF4B3A05EEAF8E5E0011397A74BBB01006(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___0_value;
		Il2CppFakeBox<Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = TypeUtility_Instantiate_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7600CA1EB0951E940C81BF9344258E59D94968A0(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB27E69E9ED430B397A8A1F89FB5DCA8A2E958104 (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7;
		L_7 = TypeUtility_InstantiateArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m3946F03FE277A0176B3FB92619571D84765E225D(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_9 = ___0_value;
		Il2CppFakeBox<Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_16;
		L_16 = TypeUtility_Instantiate_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m11FA35B9D91781E74463462DA6F839E3DD0A9C79(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m11069A08821D718E15E38E1D4CD15CD0D74C30CA (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = TypeUtility_InstantiateArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mAF5DA6DB52919078C14D9C2C22D25D0FBED3F042(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_9 = ___0_value;
		Il2CppFakeBox<Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		L_16 = TypeUtility_Instantiate_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m6CBC46773D78078C98E9B2D76E2FA8C53D004310(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisIl2CppSharedGenericObject_m98B362317B7339BA20B2CB4990839FC4E69A2852_gshared (Il2CppSharedGenericObject** ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Il2CppSharedGenericObject** L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_7;
		L_7 = TypeUtility_InstantiateArray_TisIl2CppSharedGenericObject_m5B52B348F62E628ABBC44D31571F29438607576F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(Il2CppSharedGenericObject**)L_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_4, (void*)L_7);
		return;
	}

IL_001d:
	{
		Il2CppSharedGenericObject** L_8 = ___0_value;
		Il2CppSharedGenericObject* L_9 = (*(Il2CppSharedGenericObject**)L_8);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppSharedGenericObject** L_10 = ___0_value;
		NullCheck((RuntimeObject*)(*L_10));
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((RuntimeObject*)(*L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Il2CppSharedGenericObject** L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_16;
		L_16 = TypeUtility_Instantiate_TisIl2CppSharedGenericObject_m64C5BBC9DEE2DFFA085224F695C9F344BD96DC56(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Il2CppSharedGenericObject**)L_14 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_14, (void*)L_16);
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_TisIl2CppFullySharedGenericAny_mF80326572EB5D60C964A12A1F618C2A8A4163D55_fshared (Il2CppFullySharedGenericAny* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	const uint32_t SizeOf_TValue_t1489A5F148453439313435FC1242F942FBABA3F8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t1489A5F148453439313435FC1242F942FBABA3F8);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_21 = L_7;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Il2CppFullySharedGenericAny* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InvokerActionInvoker3< Type_t*, int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_7, SizeOf_TValue_t1489A5F148453439313435FC1242F942FBABA3F8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_7);
		return;
	}

IL_001d:
	{
		Il2CppFullySharedGenericAny* L_8 = ___0_value;
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TValue_t1489A5F148453439313435FC1242F942FBABA3F8);
		bool L_10 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_9);
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_11 = ___0_value;
		Il2CppConstrainedCallData L_13;
		Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_11, &L_13, L_12);
		typedef Type_t* ( *func_L_15)(void*,const RuntimeMethod*);
		Type_t* L_16 = ((func_L_15)L_14)(L_13.thisPtr,L_13.method);
		Type_t* L_17 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		Il2CppFullySharedGenericAny* L_19 = ___0_value;
		Type_t* L_20 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		InvokerActionInvoker2< Type_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_20, (Il2CppFullySharedGenericAny*)L_21);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_19, L_21, SizeOf_TValue_t1489A5F148453439313435FC1242F942FBABA3F8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_19, (void*)L_21);
		return;
	}
}
// Method Definition Index: 86898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypeConstruction_ConstructFromSerializedType_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mDF2967867D2CBD733A946B5CE31FAD4BF94C7D60_gshared (int32_t* ___0_value, Type_t* ___1_type, RuntimeObject* ___2_provider, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Type_t* L_0 = ___1_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___2_provider;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ISerializedTypeProvider_t6DD7C7323A4C3619603ABA63820D57169D52A8C4_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int32_t* L_4 = ___0_value;
		Type_t* L_5 = ___1_type;
		int32_t L_6 = V_0;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = TypeUtility_InstantiateArray_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCACA68A5025C94A86BEBB68CA028105035F4339F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(int32_t*)L_4 = L_7;
		return;
	}

IL_001d:
	{
	}
	{
		int32_t* L_9 = ___0_value;
		Il2CppFakeBox<int32_t> L_10(il2cpp_rgctx_data(method->rgctx_data, 1), *L_9);
		Type_t* L_11;
		L_11 = il2cpp_codegen_object_get_type((&L_10));
		Type_t* L_12 = ___1_type;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		int32_t* L_14 = ___0_value;
		Type_t* L_15 = ___1_type;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_16;
		L_16 = TypeUtility_Instantiate_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_mCF68FB6FF6542EE0E2B81B9DC5C7DE5C6552EA3B(L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_14 = L_16;
		return;
	}
}
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 86898
// Method Definition Index: 29605
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_TisInputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0_m9DEBF1BF04DA506E770B06B906F6ED856417BC9A (CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* ___0_callbacks, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_argument, String_t* ___2_callbackName, RuntimeObject* ___3_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m096E657BAB53406356BABE16CE03C92212CF5A52(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* L_2 = ___0_callbacks;
		CallbackArray_1_LockForChanges_mA74AA879F43D4FE35D07CA0FF4CADC8224149E09(L_2, NULL);
		V_0 = 0;
		goto IL_0071;
	}

IL_0013:
	{
	}
	try
	{
		CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* L_3 = ___0_callbacks;
		int32_t L_4 = V_0;
		Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C* L_5;
		L_5 = CallbackArray_1_get_Item_mD75A66CA41114514F6664B0201F1BE0B77507643(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_6 = ___1_argument;
		NullCheck(L_5);
		Action_1_Invoke_m30D56EDF2807EF309EEF182BA63A3F0EF0B08A15_inline(L_5, L_6, NULL);
		goto IL_006d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{
		{
			Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_1 = L_7;
			Exception_t* L_8 = V_1;
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_8, NULL);
			RuntimeObject* L_9 = ___3_context;
			if (!L_9)
			{
				goto IL_004b;
			}
		}
		{
			Exception_t* L_10 = V_1;
			NullCheck(L_10);
			Type_t* L_11;
			L_11 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_10, NULL);
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_11);
			String_t* L_13 = ___2_callbackName;
			RuntimeObject* L_14 = ___3_context;
			String_t* L_15;
			L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_12, L_13, L_14, NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
			goto IL_006b;
		}

IL_004b:
		{
			Exception_t* L_16 = V_1;
			NullCheck(L_16);
			Type_t* L_17;
			L_17 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_16, NULL);
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_17);
			String_t* L_19 = ___2_callbackName;
			String_t* L_20;
			L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		}

IL_006b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_006d;
		}
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0071:
	{
		int32_t L_22 = V_0;
		CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* L_23 = ___0_callbacks;
		int32_t L_24;
		L_24 = CallbackArray_1_get_length_m096E657BAB53406356BABE16CE03C92212CF5A52(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0013;
		}
	}
	{
		CallbackArray_1_tAD4A1ECAC1FC4436A788BF59DBD4892BE2D26477* L_25 = ___0_callbacks;
		CallbackArray_1_UnlockForChanges_m36F89B841AF6C7B84793862F111411EA0A506313(L_25, il2cpp_rgctx_method(method->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 29605
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_TisIl2CppSharedGenericObject_mB1A87425692F10749F4496DDC6D1B6DFED1E6324_gshared (CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* ___0_callbacks, Il2CppSharedGenericObject* ___1_argument, String_t* ___2_callbackName, RuntimeObject* ___3_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_mFFAC883818E2BCC457BBF777A554074B41A117B1(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* L_2 = ___0_callbacks;
		CallbackArray_1_LockForChanges_mFC9D2CA49E850527AC39060CAA5EE14F817BF93A(L_2, NULL);
		V_0 = 0;
		goto IL_0071;
	}

IL_0013:
	{
	}
	try
	{
		CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* L_3 = ___0_callbacks;
		int32_t L_4 = V_0;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_5;
		L_5 = CallbackArray_1_get_Item_m2AF422EC69FF33A353657C8D406B8416DC93F3E5(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppSharedGenericObject* L_6 = ___1_argument;
		NullCheck(L_5);
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_inline(L_5, L_6, NULL);
		goto IL_006d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{
		{
			Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_1 = L_7;
			Exception_t* L_8 = V_1;
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_8, NULL);
			RuntimeObject* L_9 = ___3_context;
			if (!L_9)
			{
				goto IL_004b;
			}
		}
		{
			Exception_t* L_10 = V_1;
			NullCheck(L_10);
			Type_t* L_11;
			L_11 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_10, NULL);
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_11);
			String_t* L_13 = ___2_callbackName;
			RuntimeObject* L_14 = ___3_context;
			String_t* L_15;
			L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_12, L_13, L_14, NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
			goto IL_006b;
		}

IL_004b:
		{
			Exception_t* L_16 = V_1;
			NullCheck(L_16);
			Type_t* L_17;
			L_17 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_16, NULL);
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_17);
			String_t* L_19 = ___2_callbackName;
			String_t* L_20;
			L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		}

IL_006b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_006d;
		}
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0071:
	{
		int32_t L_22 = V_0;
		CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* L_23 = ___0_callbacks;
		int32_t L_24;
		L_24 = CallbackArray_1_get_length_mFFAC883818E2BCC457BBF777A554074B41A117B1(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0013;
		}
	}
	{
		CallbackArray_1_t5F81505C28C9AC722BC0DE6269C783A8B88F9713* L_25 = ___0_callbacks;
		CallbackArray_1_UnlockForChanges_m06C584095D38ED26F77D628B0295579927DC3DC0(L_25, il2cpp_rgctx_method(method->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 29605
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_TisIl2CppFullySharedGenericAny_m5514D1F6250CB3A2568677614BA43D5F578BE753_fshared (CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* ___0_callbacks, Il2CppFullySharedGenericAny ___1_argument, String_t* ___2_callbackName, RuntimeObject* ___3_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tC79442CBA47E3002E5600E12B26B3D8353EBF75C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tC79442CBA47E3002E5600E12B26B3D8353EBF75C);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m18912D90B28700D1EB2FC9AF10C0B445D4A0DA14(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* L_2 = ___0_callbacks;
		CallbackArray_1_LockForChanges_mF89D40FEA286B287D5904A8AB1723A5CA9B189E2(L_2, NULL);
		V_0 = 0;
		goto IL_0071;
	}

IL_0013:
	{
	}
	try
	{
		CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* L_3 = ___0_callbacks;
		int32_t L_4 = V_0;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_5;
		L_5 = CallbackArray_1_get_Item_m39443ED00CCC69CF61F889F2E9E7F3148FB07F51(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___1_argument : &___1_argument), SizeOf_TValue_tC79442CBA47E3002E5600E12B26B3D8353EBF75C);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_6: *(void**)L_6));
		goto IL_006d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{
		{
			Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_1 = L_7;
			Exception_t* L_8 = V_1;
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_8, NULL);
			RuntimeObject* L_9 = ___3_context;
			if (!L_9)
			{
				goto IL_004b;
			}
		}
		{
			Exception_t* L_10 = V_1;
			NullCheck(L_10);
			Type_t* L_11;
			L_11 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_10, NULL);
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_11);
			String_t* L_13 = ___2_callbackName;
			RuntimeObject* L_14 = ___3_context;
			String_t* L_15;
			L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_12, L_13, L_14, NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
			goto IL_006b;
		}

IL_004b:
		{
			Exception_t* L_16 = V_1;
			NullCheck(L_16);
			Type_t* L_17;
			L_17 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_16, NULL);
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_17);
			String_t* L_19 = ___2_callbackName;
			String_t* L_20;
			L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		}

IL_006b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_006d;
		}
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0071:
	{
		int32_t L_22 = V_0;
		CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* L_23 = ___0_callbacks;
		int32_t L_24;
		L_24 = CallbackArray_1_get_length_m18912D90B28700D1EB2FC9AF10C0B445D4A0DA14(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0013;
		}
	}
	{
		CallbackArray_1_tBC884080A926B345EE8B5A52690527C349E487EB* L_25 = ___0_callbacks;
		CallbackArray_1_UnlockForChanges_m4E81443C32892F7B07CB6C6C6FF795139E1A28FD(L_25, il2cpp_rgctx_method(method->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 29605
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_TisCallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_m876CCCC92963B709E7FE1F22D5F72C1097CCC27C (CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* ___0_callbacks, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___1_argument, String_t* ___2_callbackName, RuntimeObject* ___3_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m3C50042E1C2A1DA8489E324AF7137CFABFB617FA(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* L_2 = ___0_callbacks;
		CallbackArray_1_LockForChanges_mBF281A2D6F751F95BCBE59AB0C68F9CD6AE4C4E2(L_2, NULL);
		V_0 = 0;
		goto IL_0071;
	}

IL_0013:
	{
	}
	try
	{
		CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* L_3 = ___0_callbacks;
		int32_t L_4 = V_0;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_5;
		L_5 = CallbackArray_1_get_Item_m1F18565FAEB58506B8BE9336BC52ECAC9FE88ECB(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_6 = ___1_argument;
		NullCheck(L_5);
		Action_1_Invoke_mC9D2864A52CF07F93C51935D9DCDF73E96FED543_inline(L_5, L_6, NULL);
		goto IL_006d;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{
		{
			Exception_t* L_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_1 = L_7;
			Exception_t* L_8 = V_1;
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_8, NULL);
			RuntimeObject* L_9 = ___3_context;
			if (!L_9)
			{
				goto IL_004b;
			}
		}
		{
			Exception_t* L_10 = V_1;
			NullCheck(L_10);
			Type_t* L_11;
			L_11 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_10, NULL);
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_11);
			String_t* L_13 = ___2_callbackName;
			RuntimeObject* L_14 = ___3_context;
			String_t* L_15;
			L_15 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_12, L_13, L_14, NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
			goto IL_006b;
		}

IL_004b:
		{
			Exception_t* L_16 = V_1;
			NullCheck(L_16);
			Type_t* L_17;
			L_17 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_16, NULL);
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_17);
			String_t* L_19 = ___2_callbackName;
			String_t* L_20;
			L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_20, NULL);
		}

IL_006b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_006d;
		}
	}

IL_006d:
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0071:
	{
		int32_t L_22 = V_0;
		CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* L_23 = ___0_callbacks;
		int32_t L_24;
		L_24 = CallbackArray_1_get_length_m3C50042E1C2A1DA8489E324AF7137CFABFB617FA(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0013;
		}
	}
	{
		CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775* L_25 = ___0_callbacks;
		CallbackArray_1_UnlockForChanges_m765CE8C02F49FCC086F4F5995EC74AC2E47B1243(L_25, il2cpp_rgctx_method(method->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 29606
// Method Definition Index: 29606
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_TisInputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0_TisIl2CppSharedGenericObject_m21D358BFBD9F9E9124116EFA8328174D2445171A_gshared (CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* ___0_callbacks, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_argument1, Il2CppSharedGenericObject* ___2_argument2, ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___3_marker, String_t* ___4_callbackName, RuntimeObject* ___5_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m4F8E4ED95DD26B8315208C7DF232CE33FDF2C213(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&___3_marker), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* L_3 = ___0_callbacks;
				CallbackArray_1_LockForChanges_mAA699B75E6E50429F03F485C2E669DE2A27D6B51(L_3, NULL);
				V_1 = 0;
				goto IL_007e_1;
			}

IL_001b_1:
			{
			}
			try
			{
				CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* L_4 = ___0_callbacks;
				int32_t L_5 = V_1;
				Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84* L_6;
				L_6 = CallbackArray_1_get_Item_mB9C8F77AA342038D6FA68453B4CF398405E56A58(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
				InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_7 = ___1_argument1;
				Il2CppSharedGenericObject* L_8 = ___2_argument2;
				NullCheck(L_6);
				Action_2_Invoke_m312AE472FD3B24244802F7163C20C407727A37A4_inline(L_6, L_7, L_8, NULL);
				goto IL_007a_1;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_002c_1;
				}
				throw e;
			}

CATCH_002c_1:
			{
				{
					Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_2 = L_9;
					Exception_t* L_10 = V_2;
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_10, NULL);
					RuntimeObject* L_11 = ___5_context;
					if (!L_11)
					{
						goto IL_0057_1;
					}
				}
				{
					Exception_t* L_12 = V_2;
					NullCheck(L_12);
					Type_t* L_13;
					L_13 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_12, NULL);
					NullCheck(L_13);
					String_t* L_14;
					L_14 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_13);
					String_t* L_15 = ___4_callbackName;
					RuntimeObject* L_16 = ___5_context;
					String_t* L_17;
					L_17 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_14, L_15, L_16, NULL);
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
					goto IL_0078_1;
				}

IL_0057_1:
				{
					Exception_t* L_18 = V_2;
					NullCheck(L_18);
					Type_t* L_19;
					L_19 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_18, NULL);
					NullCheck(L_19);
					String_t* L_20;
					L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_19);
					String_t* L_21 = ___4_callbackName;
					String_t* L_22;
					L_22 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_22, NULL);
				}

IL_0078_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_007a_1;
				}
			}

IL_007a_1:
			{
				int32_t L_23 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_007e_1:
			{
				int32_t L_24 = V_1;
				CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* L_25 = ___0_callbacks;
				int32_t L_26;
				L_26 = CallbackArray_1_get_length_m4F8E4ED95DD26B8315208C7DF232CE33FDF2C213(L_25, NULL);
				if ((((int32_t)L_24) < ((int32_t)L_26)))
				{
					goto IL_001b_1;
				}
			}
			{
				CallbackArray_1_t96B1B37F666C68D68D5FC6D4B668040597EC20E8* L_27 = ___0_callbacks;
				CallbackArray_1_UnlockForChanges_m1E2E7F220AB25E4AF7C45159FC026BA2CCFB10FA(L_27, il2cpp_rgctx_method(method->rgctx_data, 6));
				goto IL_009d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		return;
	}
}
// Method Definition Index: 29606
// Method Definition Index: 29606
// Method Definition Index: 29606
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_TisIl2CppSharedGenericObject_TisInputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0_mAD3278881A0ACE366B43E04059B026A8C5B400D4_gshared (CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* ___0_callbacks, Il2CppSharedGenericObject* ___1_argument1, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_argument2, ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___3_marker, String_t* ___4_callbackName, RuntimeObject* ___5_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m3578492D85B8A5A6EF6074431BF593EE606A648E(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&___3_marker), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* L_3 = ___0_callbacks;
				CallbackArray_1_LockForChanges_m5C8D95DD3B197800610584F0685CD1F35E21B4EF(L_3, NULL);
				V_1 = 0;
				goto IL_007e_1;
			}

IL_001b_1:
			{
			}
			try
			{
				CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* L_4 = ___0_callbacks;
				int32_t L_5 = V_1;
				Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5* L_6;
				L_6 = CallbackArray_1_get_Item_m06890F4404523377BFBF57AEC62C263DE1498424(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
				Il2CppSharedGenericObject* L_7 = ___1_argument1;
				InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_8 = ___2_argument2;
				NullCheck(L_6);
				Action_2_Invoke_m9D812FF2BD9184B9649F4FEF3C24A5C462A3DCC9_inline(L_6, L_7, L_8, NULL);
				goto IL_007a_1;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_002c_1;
				}
				throw e;
			}

CATCH_002c_1:
			{
				{
					Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_2 = L_9;
					Exception_t* L_10 = V_2;
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_10, NULL);
					RuntimeObject* L_11 = ___5_context;
					if (!L_11)
					{
						goto IL_0057_1;
					}
				}
				{
					Exception_t* L_12 = V_2;
					NullCheck(L_12);
					Type_t* L_13;
					L_13 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_12, NULL);
					NullCheck(L_13);
					String_t* L_14;
					L_14 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_13);
					String_t* L_15 = ___4_callbackName;
					RuntimeObject* L_16 = ___5_context;
					String_t* L_17;
					L_17 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_14, L_15, L_16, NULL);
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
					goto IL_0078_1;
				}

IL_0057_1:
				{
					Exception_t* L_18 = V_2;
					NullCheck(L_18);
					Type_t* L_19;
					L_19 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_18, NULL);
					NullCheck(L_19);
					String_t* L_20;
					L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_19);
					String_t* L_21 = ___4_callbackName;
					String_t* L_22;
					L_22 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_22, NULL);
				}

IL_0078_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_007a_1;
				}
			}

IL_007a_1:
			{
				int32_t L_23 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_007e_1:
			{
				int32_t L_24 = V_1;
				CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* L_25 = ___0_callbacks;
				int32_t L_26;
				L_26 = CallbackArray_1_get_length_m3578492D85B8A5A6EF6074431BF593EE606A648E(L_25, NULL);
				if ((((int32_t)L_24) < ((int32_t)L_26)))
				{
					goto IL_001b_1;
				}
			}
			{
				CallbackArray_1_t8A4B915ED5AC537FB7DE642EDE1FB4964248D575* L_27 = ___0_callbacks;
				CallbackArray_1_UnlockForChanges_m04B654757D93520C7B4BCBA0FF2276B428B7FE89(L_27, il2cpp_rgctx_method(method->rgctx_data, 6));
				goto IL_009d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		return;
	}
}
// Method Definition Index: 29606
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_TisIl2CppSharedGenericObject_Tis__Il2CppInt32Enum_tE5E90BB5D60D5281C33DB29D9DCBD70D5E2E1F7B_m55E6B37FAB6E0A1E8FB576FCAF7B2021272B4489_gshared (CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* ___0_callbacks, Il2CppSharedGenericObject* ___1_argument1, int32_t ___2_argument2, ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___3_marker, String_t* ___4_callbackName, RuntimeObject* ___5_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m6B5A337757D5B80D11CDD6FECCA9B2B9A1019AF5(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&___3_marker), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* L_3 = ___0_callbacks;
				CallbackArray_1_LockForChanges_m939089E1F4FDDCC7D1041FCC4C9541498618527E(L_3, NULL);
				V_1 = 0;
				goto IL_007e_1;
			}

IL_001b_1:
			{
			}
			try
			{
				CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* L_4 = ___0_callbacks;
				int32_t L_5 = V_1;
				Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24* L_6;
				L_6 = CallbackArray_1_get_Item_m4294B001E3A671376E24B247E08780E4DFAA9A97(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
				Il2CppSharedGenericObject* L_7 = ___1_argument1;
				int32_t L_8 = ___2_argument2;
				NullCheck(L_6);
				Action_2_Invoke_m5BD5405988E0E37A73DE7067708A7E8C4E3C7FB0_inline(L_6, L_7, L_8, NULL);
				goto IL_007a_1;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_002c_1;
				}
				throw e;
			}

CATCH_002c_1:
			{
				{
					Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_2 = L_9;
					Exception_t* L_10 = V_2;
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_10, NULL);
					RuntimeObject* L_11 = ___5_context;
					if (!L_11)
					{
						goto IL_0057_1;
					}
				}
				{
					Exception_t* L_12 = V_2;
					NullCheck(L_12);
					Type_t* L_13;
					L_13 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_12, NULL);
					NullCheck(L_13);
					String_t* L_14;
					L_14 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_13);
					String_t* L_15 = ___4_callbackName;
					RuntimeObject* L_16 = ___5_context;
					String_t* L_17;
					L_17 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_14, L_15, L_16, NULL);
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
					goto IL_0078_1;
				}

IL_0057_1:
				{
					Exception_t* L_18 = V_2;
					NullCheck(L_18);
					Type_t* L_19;
					L_19 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_18, NULL);
					NullCheck(L_19);
					String_t* L_20;
					L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_19);
					String_t* L_21 = ___4_callbackName;
					String_t* L_22;
					L_22 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_22, NULL);
				}

IL_0078_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_007a_1;
				}
			}

IL_007a_1:
			{
				int32_t L_23 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_007e_1:
			{
				int32_t L_24 = V_1;
				CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* L_25 = ___0_callbacks;
				int32_t L_26;
				L_26 = CallbackArray_1_get_length_m6B5A337757D5B80D11CDD6FECCA9B2B9A1019AF5(L_25, NULL);
				if ((((int32_t)L_24) < ((int32_t)L_26)))
				{
					goto IL_001b_1;
				}
			}
			{
				CallbackArray_1_tAB2FDAB4855172A0E0C76E519F02E872EA119DB6* L_27 = ___0_callbacks;
				CallbackArray_1_UnlockForChanges_mCAEA85D619EB8EB5D96F91C361BE455FF8F8F22D(L_27, il2cpp_rgctx_method(method->rgctx_data, 6));
				goto IL_009d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		return;
	}
}
// Method Definition Index: 29606
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m7FB2A8C73D5DA470D3AE1A70024C8C3FD61C4532_fshared (CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* ___0_callbacks, Il2CppFullySharedGenericAny ___1_argument1, Il2CppFullySharedGenericAny ___2_argument2, ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___3_marker, String_t* ___4_callbackName, RuntimeObject* ___5_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue1_t388E049AE3630C575AA3B48E3918231EFE1A44BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_TValue2_t44BD60E0B83507FFA5F51501E5C0A8B56A871AA8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue1_t388E049AE3630C575AA3B48E3918231EFE1A44BD);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue2_t44BD60E0B83507FFA5F51501E5C0A8B56A871AA8);
	//<source_info:<no-source>:1>
	AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m69B37806FA23DB9E0A1C0A6C528A25CB4CE8D0F7(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_2;
		L_2 = ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline((&___3_marker), NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{
				AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline((&V_0), NULL);
				return;
			}
		});
		try
		{
			{
				CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* L_3 = ___0_callbacks;
				CallbackArray_1_LockForChanges_m519635C3DDA85035F17C5BB3ECE13440BC027E5D(L_3, NULL);
				V_1 = 0;
				goto IL_007e_1;
			}

IL_001b_1:
			{
			}
			try
			{
				CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* L_4 = ___0_callbacks;
				int32_t L_5 = V_1;
				Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* L_6;
				L_6 = CallbackArray_1_get_Item_m68CEE5FF005E9039720D8FE66E3C63C072BC6AA3(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
				il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___1_argument1 : &___1_argument1), SizeOf_TValue1_t388E049AE3630C575AA3B48E3918231EFE1A44BD);
				il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___2_argument2 : &___2_argument2), SizeOf_TValue2_t44BD60E0B83507FFA5F51501E5C0A8B56A871AA8);
				NullCheck(L_6);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_8: *(void**)L_8));
				goto IL_007a_1;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_002c_1;
				}
				throw e;
			}

CATCH_002c_1:
			{
				{
					Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_2 = L_9;
					Exception_t* L_10 = V_2;
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_10, NULL);
					RuntimeObject* L_11 = ___5_context;
					if (!L_11)
					{
						goto IL_0057_1;
					}
				}
				{
					Exception_t* L_12 = V_2;
					NullCheck(L_12);
					Type_t* L_13;
					L_13 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_12, NULL);
					NullCheck(L_13);
					String_t* L_14;
					L_14 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_13);
					String_t* L_15 = ___4_callbackName;
					RuntimeObject* L_16 = ___5_context;
					String_t* L_17;
					L_17 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_14, L_15, L_16, NULL);
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
					goto IL_0078_1;
				}

IL_0057_1:
				{
					Exception_t* L_18 = V_2;
					NullCheck(L_18);
					Type_t* L_19;
					L_19 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_18, NULL);
					NullCheck(L_19);
					String_t* L_20;
					L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_19);
					String_t* L_21 = ___4_callbackName;
					String_t* L_22;
					L_22 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
					CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
					Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_22, NULL);
				}

IL_0078_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
					goto IL_007a_1;
				}
			}

IL_007a_1:
			{
				int32_t L_23 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_007e_1:
			{
				int32_t L_24 = V_1;
				CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* L_25 = ___0_callbacks;
				int32_t L_26;
				L_26 = CallbackArray_1_get_length_m69B37806FA23DB9E0A1C0A6C528A25CB4CE8D0F7(L_25, NULL);
				if ((((int32_t)L_24) < ((int32_t)L_26)))
				{
					goto IL_001b_1;
				}
			}
			{
				CallbackArray_1_tD603F6092E40EF5866778E31C3A05B7F9BC49B62* L_27 = ___0_callbacks;
				CallbackArray_1_UnlockForChanges_mD7C2C445F8F743FA145DB2796A5825DA2961FAF3(L_27, il2cpp_rgctx_method(method->rgctx_data, 6));
				goto IL_009d;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009d:
	{
		return;
	}
}
// Method Definition Index: 29608
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelpers_InvokeCallbacksSafe_AndInvokeReturnedActions_TisIl2CppFullySharedGenericAny_m4482B763C1E106C116D5E8E6080B6FB90CDC02BF_fshared (CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* ___0_callbacks, Il2CppFullySharedGenericAny ___1_argument, String_t* ___2_callbackName, RuntimeObject* ___3_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t624550D5BBC4BFBC1FE0B716300A80FB37BBF012 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t624550D5BBC4BFBC1FE0B716300A80FB37BBF012);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B6_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	{
		CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m98715DA90094A8FDFC9318577E6DEFBE223BA8A4(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* L_2 = ___0_callbacks;
		CallbackArray_1_LockForChanges_m7C1FD17507ADFC943B9CCC1A591E4BBE0837576B(L_2, NULL);
		V_0 = 0;
		goto IL_007c;
	}

IL_0013:
	{
	}
	try
	{
		{
			CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* L_3 = ___0_callbacks;
			int32_t L_4 = V_0;
			Func_2_t51E0796D1DBB8E902BF230CE88C097AAC81A799E* L_5;
			L_5 = CallbackArray_1_get_Item_m0228C5DE55BF56DC8854439974ABB93E344BEF75(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
			il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___1_argument : &___1_argument), SizeOf_TValue_t624550D5BBC4BFBC1FE0B716300A80FB37BBF012);
			NullCheck(L_5);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
			L_7 = InvokerFuncInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_6: *(void**)L_6));
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = L_7;
			if (L_8)
			{
				G_B6_0 = L_8;
				goto IL_0027_1;
			}
			G_B5_0 = L_8;
		}
		{
			goto IL_002c_1;
		}

IL_0027_1:
		{
			NullCheck(G_B6_0);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B6_0, NULL);
		}

IL_002c_1:
		{
			goto IL_0078;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002e;
		}
		throw e;
	}

CATCH_002e:
	{
		{
			Exception_t* L_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_1 = L_9;
			Exception_t* L_10 = V_1;
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_10, NULL);
			RuntimeObject* L_11 = ___3_context;
			if (!L_11)
			{
				goto IL_0056;
			}
		}
		{
			Exception_t* L_12 = V_1;
			NullCheck(L_12);
			Type_t* L_13;
			L_13 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_12, NULL);
			NullCheck(L_13);
			String_t* L_14;
			L_14 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_13);
			String_t* L_15 = ___2_callbackName;
			RuntimeObject* L_16 = ___3_context;
			String_t* L_17;
			L_17 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_14, L_15, L_16, NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_17, NULL);
			goto IL_0076;
		}

IL_0056:
		{
			Exception_t* L_18 = V_1;
			NullCheck(L_18);
			Type_t* L_19;
			L_19 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_18, NULL);
			NullCheck(L_19);
			String_t* L_20;
			L_20 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_19);
			String_t* L_21 = ___2_callbackName;
			String_t* L_22;
			L_22 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_22, NULL);
		}

IL_0076:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0078;
		}
	}

IL_0078:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007c:
	{
		int32_t L_24 = V_0;
		CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* L_25 = ___0_callbacks;
		int32_t L_26;
		L_26 = CallbackArray_1_get_length_m98715DA90094A8FDFC9318577E6DEFBE223BA8A4(L_25, NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0013;
		}
	}
	{
		CallbackArray_1_t2E174CB79621C0FE4D9B251399BF80124E7FA05F* L_27 = ___0_callbacks;
		CallbackArray_1_UnlockForChanges_m7D23E3DA1442013515170F62012A7EED21B7A759(L_27, il2cpp_rgctx_method(method->rgctx_data, 5));
		return;
	}
}
// Method Definition Index: 29609
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateHelpers_InvokeCallbacksSafe_AnyCallbackReturnsObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m695CA8D2CD111D355AAD672C09103F197A855B5D_fshared (CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* ___0_callbacks, Il2CppFullySharedGenericAny ___1_argument, String_t* ___2_callbackName, RuntimeObject* ___3_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t00718B1CAE89F7B8D8BD30EA16CACB51472C742F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t00718B1CAE89F7B8D8BD30EA16CACB51472C742F);
	const uint32_t SizeOf_TReturn_tDDBA78AB6A221D1C733F6CC08C5A9EA45913C645 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TReturn_tDDBA78AB6A221D1C733F6CC08C5A9EA45913C645);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m4C25597B38384A32BCEC4C1A54F5E50082B5FCBD(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* L_2 = ___0_callbacks;
		CallbackArray_1_LockForChanges_mE876E4FF1585E1A69961B4B4C50136C44A3AA152(L_2, NULL);
		V_0 = 0;
		goto IL_0083;
	}

IL_0014:
	{
	}
	try
	{
		{
			CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* L_3 = ___0_callbacks;
			int32_t L_4 = V_0;
			Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_5;
			L_5 = CallbackArray_1_get_Item_mB846A33CB84F3537FD177CA95C15C6013FC252DF(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
			il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___1_argument : &___1_argument), SizeOf_TValue_t00718B1CAE89F7B8D8BD30EA16CACB51472C742F);
			NullCheck(L_5);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_6: *(void**)L_6), (Il2CppFullySharedGenericAny*)L_7);
			bool L_8 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 5), L_7);
			if (!L_8)
			{
				goto IL_0033_1;
			}
		}
		{
			CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* L_9 = ___0_callbacks;
			CallbackArray_1_UnlockForChanges_m7DD8441C0F01CF43BFD96C7306D28E32A2E737E5(L_9, il2cpp_rgctx_method(method->rgctx_data, 6));
			V_1 = (bool)1;
			goto IL_0094;
		}

IL_0033_1:
		{
			goto IL_007f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{
		{
			Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_2 = L_10;
			Exception_t* L_11 = V_2;
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_11, NULL);
			RuntimeObject* L_12 = ___3_context;
			if (!L_12)
			{
				goto IL_005d;
			}
		}
		{
			Exception_t* L_13 = V_2;
			NullCheck(L_13);
			Type_t* L_14;
			L_14 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_13, NULL);
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_14);
			String_t* L_16 = ___2_callbackName;
			RuntimeObject* L_17 = ___3_context;
			String_t* L_18;
			L_18 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_15, L_16, L_17, NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
			goto IL_007d;
		}

IL_005d:
		{
			Exception_t* L_19 = V_2;
			NullCheck(L_19);
			Type_t* L_20;
			L_20 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_19, NULL);
			NullCheck(L_20);
			String_t* L_21;
			L_21 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_20);
			String_t* L_22 = ___2_callbackName;
			String_t* L_23;
			L_23 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_23, NULL);
		}

IL_007d:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_007f;
		}
	}

IL_007f:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0083:
	{
		int32_t L_25 = V_0;
		CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* L_26 = ___0_callbacks;
		int32_t L_27;
		L_27 = CallbackArray_1_get_length_m4C25597B38384A32BCEC4C1A54F5E50082B5FCBD(L_26, NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0014;
		}
	}
	{
		CallbackArray_1_t1DE66A9CA012FC33E24057D6F82BD8DF1FD85D36* L_28 = ___0_callbacks;
		CallbackArray_1_UnlockForChanges_m7DD8441C0F01CF43BFD96C7306D28E32A2E737E5(L_28, il2cpp_rgctx_method(method->rgctx_data, 6));
		return (bool)0;
	}

IL_0094:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// Method Definition Index: 29607
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateHelpers_InvokeCallbacksSafe_AnyCallbackReturnsTrue_TisIl2CppSharedGenericObject_TisInputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0_m5D798FFAF8CE81F4927EFB7FF4465A3F6788AE6E_gshared (CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* ___0_callbacks, Il2CppSharedGenericObject* ___1_argument1, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___2_argument2, String_t* ___3_callbackName, RuntimeObject* ___4_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m42C24C606790F8A69614498B3C5AF4072C43CBD5(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* L_2 = ___0_callbacks;
		CallbackArray_1_LockForChanges_m6E22A5E5748195CB5B163FD5694F58304BEE30D3(L_2, NULL);
		V_0 = 0;
		goto IL_0081;
	}

IL_0014:
	{
	}
	try
	{
		{
			CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* L_3 = ___0_callbacks;
			int32_t L_4 = V_0;
			Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C* L_5;
			L_5 = CallbackArray_1_get_Item_mFECADBBF24370C0DB924974082A7FCA919F99CEB(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
			Il2CppSharedGenericObject* L_6 = ___1_argument1;
			InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_7 = ___2_argument2;
			NullCheck(L_5);
			bool L_8;
			L_8 = Func_3_Invoke_m4BC5CB4D8DB16449345D3F066DE90DDFCFE569E6_inline(L_5, L_6, L_7, NULL);
			if (!L_8)
			{
				goto IL_002f_1;
			}
		}
		{
			CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* L_9 = ___0_callbacks;
			CallbackArray_1_UnlockForChanges_mAACC4FA4C3E074FDB40E0ADBADBAB4561B0874D6(L_9, il2cpp_rgctx_method(method->rgctx_data, 6));
			V_1 = (bool)1;
			goto IL_0092;
		}

IL_002f_1:
		{
			goto IL_007d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{
		{
			Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_2 = L_10;
			Exception_t* L_11 = V_2;
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_11, NULL);
			RuntimeObject* L_12 = ___4_context;
			if (!L_12)
			{
				goto IL_005b;
			}
		}
		{
			Exception_t* L_13 = V_2;
			NullCheck(L_13);
			Type_t* L_14;
			L_14 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_13, NULL);
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_14);
			String_t* L_16 = ___3_callbackName;
			RuntimeObject* L_17 = ___4_context;
			String_t* L_18;
			L_18 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_15, L_16, L_17, NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
			goto IL_007b;
		}

IL_005b:
		{
			Exception_t* L_19 = V_2;
			NullCheck(L_19);
			Type_t* L_20;
			L_20 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_19, NULL);
			NullCheck(L_20);
			String_t* L_21;
			L_21 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_20);
			String_t* L_22 = ___3_callbackName;
			String_t* L_23;
			L_23 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_23, NULL);
		}

IL_007b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_007d;
		}
	}

IL_007d:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0081:
	{
		int32_t L_25 = V_0;
		CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* L_26 = ___0_callbacks;
		int32_t L_27;
		L_27 = CallbackArray_1_get_length_m42C24C606790F8A69614498B3C5AF4072C43CBD5(L_26, NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0014;
		}
	}
	{
		CallbackArray_1_t24715E3538299DB15456430AC4A009137DF82E42* L_28 = ___0_callbacks;
		CallbackArray_1_UnlockForChanges_mAACC4FA4C3E074FDB40E0ADBADBAB4561B0874D6(L_28, il2cpp_rgctx_method(method->rgctx_data, 6));
		return (bool)0;
	}

IL_0092:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// Method Definition Index: 29607
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelegateHelpers_InvokeCallbacksSafe_AnyCallbackReturnsTrue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m57F86FC84322899B4F582D3F420FDC320AA26B6D_fshared (CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* ___0_callbacks, Il2CppFullySharedGenericAny ___1_argument1, Il2CppFullySharedGenericAny ___2_argument2, String_t* ___3_callbackName, RuntimeObject* ___4_context, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue1_t6BEABC4D74E5E5DEE170985CCA6BB949DE6C0115 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_TValue2_t2ECEFF5BEFCDF7B9A93A7EB34D8672EBD4A61CD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue1_t6BEABC4D74E5E5DEE170985CCA6BB949DE6C0115);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue2_t2ECEFF5BEFCDF7B9A93A7EB34D8672EBD4A61CD1);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* L_0 = ___0_callbacks;
		int32_t L_1;
		L_1 = CallbackArray_1_get_length_m5AEF198CE01CAC738D8895C9A0CE2005761D447A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* L_2 = ___0_callbacks;
		CallbackArray_1_LockForChanges_mF31AA31E6D14901E68A83DD4E93C2BF8BE842A39(L_2, NULL);
		V_0 = 0;
		goto IL_0081;
	}

IL_0014:
	{
	}
	try
	{
		{
			CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* L_3 = ___0_callbacks;
			int32_t L_4 = V_0;
			Func_3_t8ABA11B2555ED37315928295E1F5259AD6951D6A* L_5;
			L_5 = CallbackArray_1_get_Item_m460EE3E4BB43D0E8233A29A01527BE813447D144(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
			il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___1_argument1 : &___1_argument1), SizeOf_TValue1_t6BEABC4D74E5E5DEE170985CCA6BB949DE6C0115);
			il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___2_argument2 : &___2_argument2), SizeOf_TValue2_t2ECEFF5BEFCDF7B9A93A7EB34D8672EBD4A61CD1);
			NullCheck(L_5);
			bool L_8;
			L_8 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_7: *(void**)L_7));
			if (!L_8)
			{
				goto IL_002f_1;
			}
		}
		{
			CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* L_9 = ___0_callbacks;
			CallbackArray_1_UnlockForChanges_mBA12A7BCF7E83F3D85C9E72E5792BE8A91D3C5F1(L_9, il2cpp_rgctx_method(method->rgctx_data, 6));
			V_1 = (bool)1;
			goto IL_0092;
		}

IL_002f_1:
		{
			goto IL_007d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0031;
		}
		throw e;
	}

CATCH_0031:
	{
		{
			Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_2 = L_10;
			Exception_t* L_11 = V_2;
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_11, NULL);
			RuntimeObject* L_12 = ___4_context;
			if (!L_12)
			{
				goto IL_005b;
			}
		}
		{
			Exception_t* L_13 = V_2;
			NullCheck(L_13);
			Type_t* L_14;
			L_14 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_13, NULL);
			NullCheck(L_14);
			String_t* L_15;
			L_15 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_14);
			String_t* L_16 = ___3_callbackName;
			RuntimeObject* L_17 = ___4_context;
			String_t* L_18;
			L_18 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral278942CDEE22E9328A00EB31BC7DEC0BB8D328F1)), L_15, L_16, L_17, NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
			goto IL_007b;
		}

IL_005b:
		{
			Exception_t* L_19 = V_2;
			NullCheck(L_19);
			Type_t* L_20;
			L_20 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_19, NULL);
			NullCheck(L_20);
			String_t* L_21;
			L_21 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_20);
			String_t* L_22 = ___3_callbackName;
			String_t* L_23;
			L_23 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral29E9D8EEDD40E3ADE1579882DA345730D66B63B5)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77A73EBDA78185D665A8799738A9D6885E237CAD)), NULL);
			CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))),il2cpp_codegen_runtime_class_init_inline);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_23, NULL);
		}

IL_007b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_007d;
		}
	}

IL_007d:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0081:
	{
		int32_t L_25 = V_0;
		CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* L_26 = ___0_callbacks;
		int32_t L_27;
		L_27 = CallbackArray_1_get_length_m5AEF198CE01CAC738D8895C9A0CE2005761D447A(L_26, NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0014;
		}
	}
	{
		CallbackArray_1_t972A038D8A3594B04FF15A8AA31C4E58EB250ACC* L_28 = ___0_callbacks;
		CallbackArray_1_UnlockForChanges_mBA12A7BCF7E83F3D85C9E72E5792BE8A91D3C5F1(L_28, il2cpp_rgctx_method(method->rgctx_data, 6));
		return (bool)0;
	}

IL_0092:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// Method Definition Index: 50266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionarySerialization_CreateEmptyDictionaryTyped_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFFEE707E7CB160247C0C4341664FCFBF367CFFBB_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 50264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* DictionarySerialization_GetArrayWithHandledIgnoredEntries_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m62D4AD9A6B72E21C0547C2E31F7A1DA5A3C66ACE_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dict, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_hostingEntityId, String_t* ___2_dictionaryPath, int32_t ___3_count, IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 ___4_storedIgnored, int32_t ___5_ignoredCount, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8BF77F9641897892CACE882F8B56ADC1617E79D);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_tD20C3F922F38D68FD0BAA80997DFA52AEC55C228 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_KeyValuePair_2_t8A7668C07454AEC8DDD680412E222026DCB047DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const uint32_t SizeOf_SerializedKeyValue_2_tC33FD891A3FB11EF31F7706377EEFD4377602261 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const uint32_t SizeOf_TKey_tF8C3360DE2969564401E4AE446AD49DE7162E688 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	const uint32_t SizeOf_TValue_t6949A76656AEAF0744F03A6836E3941EC1A07395 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	CHECKED_LOCAL(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit);
	void* L_68 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_TKey_tF8C3360DE2969564401E4AE446AD49DE7162E688);
	const Il2CppFullySharedGenericAny L_76 = L_50;
	const Il2CppFullySharedGenericAny L_52 = alloca(SizeOf_TKey_tF8C3360DE2969564401E4AE446AD49DE7162E688);
	const Il2CppFullySharedGenericAny L_78 = L_52;
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_TValue_t6949A76656AEAF0744F03A6836E3941EC1A07395);
	const Il2CppFullySharedGenericAny L_77 = L_51;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TValue_t6949A76656AEAF0744F03A6836E3941EC1A07395);
	const Il2CppFullySharedGenericAny L_79 = L_53;
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_30 = alloca(SizeOf_Enumerator_tD20C3F922F38D68FD0BAA80997DFA52AEC55C228);
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_67 = L_30;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_35 = alloca(SizeOf_KeyValuePair_2_t8A7668C07454AEC8DDD680412E222026DCB047DF);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_72 = L_35;
	const SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239 L_25 = alloca(SizeOf_SerializedKeyValue_2_tC33FD891A3FB11EF31F7706377EEFD4377602261);
	const SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239 L_54 = L_25;
	const SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239 L_80 = L_25;
	//<source_info:<no-source>:1>
	SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* V_0 = NULL;
	int32_t V_1 = 0;
	SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 V_6 = alloca(SizeOf_Enumerator_tD20C3F922F38D68FD0BAA80997DFA52AEC55C228);
	memset(V_6, 0, SizeOf_Enumerator_tD20C3F922F38D68FD0BAA80997DFA52AEC55C228);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_7 = alloca(SizeOf_KeyValuePair_2_t8A7668C07454AEC8DDD680412E222026DCB047DF);
	memset(V_7, 0, SizeOf_KeyValuePair_2_t8A7668C07454AEC8DDD680412E222026DCB047DF);
	SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* V_8 = NULL;
	int32_t V_9 = 0;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_10 = alloca(SizeOf_KeyValuePair_2_t8A7668C07454AEC8DDD680412E222026DCB047DF);
	memset(V_10, 0, SizeOf_KeyValuePair_2_t8A7668C07454AEC8DDD680412E222026DCB047DF);
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___3_count;
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_1 = ___4_storedIgnored;
		int32_t L_2 = L_1.___dictionaryCountWhenRecorded;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_00e8;
		}
	}
	{
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_3 = ___4_storedIgnored;
		RuntimeArray* L_4 = L_3.___entries;
		V_0 = ((SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F*)CastclassSealed((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
		int32_t L_5 = ___3_count;
		int32_t L_6 = ___5_ignoredCount;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_1;
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_8 = (SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F*)(SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_7);
		V_2 = L_8;
		int32_t L_9 = ___5_ignoredCount;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_10 = ___4_storedIgnored;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10.___indices;
		int32_t L_12 = ___5_ignoredCount;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = V_1;
		G_B4_0 = ((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B4_0 = 1;
	}

IL_003c:
	{
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE((bool)G_B4_0, _stringLiteralC8BF77F9641897892CACE882F8B56ADC1617E79D, NULL);
		V_5 = 0;
		goto IL_0069;
	}

IL_004b:
	{
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_16 = V_2;
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_17 = ___4_storedIgnored;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17.___indices;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		il2cpp_codegen_memcpy(L_25, (L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), SizeOf_SerializedKeyValue_2_tC33FD891A3FB11EF31F7706377EEFD4377602261);
		NullCheck(L_16);
		il2cpp_codegen_memcpy((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), L_25, SizeOf_SerializedKeyValue_2_tC33FD891A3FB11EF31F7706377EEFD4377602261);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), (void*)L_25);
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0069:
	{
		int32_t L_27 = V_5;
		int32_t L_28 = ___5_ignoredCount;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004b;
		}
	}
	{
		V_3 = 0;
		V_4 = 0;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_29 = ___0_dict;
		NullCheck(L_29);
		InvokerActionInvoker1< Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_29, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_30);
		il2cpp_codegen_memcpy(V_6, L_30, SizeOf_Enumerator_tD20C3F922F38D68FD0BAA80997DFA52AEC55C228);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d8:
			{
				Il2CppConstrainedCallData L_32;
				Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 12), (void*)(Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_6, &L_32, L_31);
				typedef void ( *func_L_34)(void*,const RuntimeMethod*);
				((func_L_34)L_33)(L_32.thisPtr,L_32.method);
				return;
			}
		});
		try
		{
			{
				goto IL_00cd_1;
			}

IL_007e_1:
			{
				InvokerActionInvoker1< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_6, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_35);
				il2cpp_codegen_memcpy(V_7, L_35, SizeOf_KeyValuePair_2_t8A7668C07454AEC8DDD680412E222026DCB047DF);
				goto IL_0093_1;
			}

IL_0089_1:
			{
				int32_t L_36 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
				int32_t L_37 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			}

IL_0093_1:
			{
				int32_t L_38 = V_3;
				int32_t L_39 = ___5_ignoredCount;
				if ((((int32_t)L_38) >= ((int32_t)L_39)))
				{
					goto IL_00a5_1;
				}
			}
			{
				IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_40 = ___4_storedIgnored;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = L_40.___indices;
				int32_t L_42 = V_3;
				NullCheck(L_41);
				int32_t L_43 = L_42;
				int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
				int32_t L_45 = V_4;
				if ((((int32_t)L_44) == ((int32_t)L_45)))
				{
					goto IL_0089_1;
				}
			}

IL_00a5_1:
			{
				int32_t L_46 = V_4;
				int32_t L_47 = V_1;
				if ((((int32_t)L_46) < ((int32_t)L_47)))
				{
					goto IL_00ac_1;
				}
			}
			{
				goto IL_00e6;
			}

IL_00ac_1:
			{
				SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_48 = V_2;
				int32_t L_49 = V_4;
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_7, (Il2CppFullySharedGenericAny*)L_50);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_7, (Il2CppFullySharedGenericAny*)L_51);
				memset(L_54, 0, SizeOf_SerializedKeyValue_2_tC33FD891A3FB11EF31F7706377EEFD4377602261);
				SerializedKeyValue_2__ctor_mFB9E6B469C84CAE0804D7D8CE13D96B2A26EE4F1((SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239*)L_54, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 7)) ? il2cpp_codegen_memcpy(L_52, L_50, SizeOf_TKey_tF8C3360DE2969564401E4AE446AD49DE7162E688): *(void**)L_50), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_53, L_51, SizeOf_TValue_t6949A76656AEAF0744F03A6836E3941EC1A07395): *(void**)L_51), il2cpp_rgctx_method(method->rgctx_data, 10));
				NullCheck(L_48);
				il2cpp_codegen_memcpy((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)), L_54, SizeOf_SerializedKeyValue_2_tC33FD891A3FB11EF31F7706377EEFD4377602261);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)), (void*)L_54);
				int32_t L_55 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_55, 1));
			}

IL_00cd_1:
			{
				bool L_56;
				L_56 = ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_6, il2cpp_rgctx_method(method->rgctx_data, 11));
				if (L_56)
				{
					goto IL_007e_1;
				}
			}
			{
				goto IL_00e6;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e6:
	{
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_57 = V_2;
		return (RuntimeArray*)L_57;
	}

IL_00e8:
	{
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_58;
		L_58 = DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline(NULL);
		if (!L_58)
		{
			goto IL_0103;
		}
	}
	{
		String_t* L_59 = ___2_dictionaryPath;
		bool L_60;
		L_60 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_59, NULL);
		if (L_60)
		{
			goto IL_0103;
		}
	}
	{
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_61;
		L_61 = DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline(NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_62 = ___1_hostingEntityId;
		String_t* L_63 = ___2_dictionaryPath;
		NullCheck(L_61);
		InterfaceActionInvoker2< EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, String_t* >::Invoke(2, IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8_il2cpp_TypeInfo_var, L_61, L_62, L_63);
	}

IL_0103:
	{
		int32_t L_64 = ___3_count;
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_65 = (SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F*)(SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_64);
		V_8 = L_65;
		V_9 = 0;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_66 = ___0_dict;
		NullCheck(L_66);
		InvokerActionInvoker1< Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_66, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_67);
		il2cpp_codegen_memcpy(V_6, L_67, SizeOf_Enumerator_tD20C3F922F38D68FD0BAA80997DFA52AEC55C228);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_014d:
			{
				Il2CppConstrainedCallData L_69;
				Il2CppMethodPointer L_70 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 12), (void*)(Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_6, &L_69, L_68);
				typedef void ( *func_L_71)(void*,const RuntimeMethod*);
				((func_L_71)L_70)(L_69.thisPtr,L_69.method);
				return;
			}
		});
		try
		{
			{
				goto IL_0142_1;
			}

IL_0118_1:
			{
				InvokerActionInvoker1< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_6, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_72);
				il2cpp_codegen_memcpy(V_10, L_72, SizeOf_KeyValuePair_2_t8A7668C07454AEC8DDD680412E222026DCB047DF);
				SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_73 = V_8;
				int32_t L_74 = V_9;
				int32_t L_75 = L_74;
				V_9 = ((int32_t)il2cpp_codegen_add(L_75, 1));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_10, (Il2CppFullySharedGenericAny*)L_76);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_10, (Il2CppFullySharedGenericAny*)L_77);
				memset(L_80, 0, SizeOf_SerializedKeyValue_2_tC33FD891A3FB11EF31F7706377EEFD4377602261);
				SerializedKeyValue_2__ctor_mFB9E6B469C84CAE0804D7D8CE13D96B2A26EE4F1((SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239*)L_80, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 7)) ? il2cpp_codegen_memcpy(L_78, L_76, SizeOf_TKey_tF8C3360DE2969564401E4AE446AD49DE7162E688): *(void**)L_76), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 9)) ? il2cpp_codegen_memcpy(L_79, L_77, SizeOf_TValue_t6949A76656AEAF0744F03A6836E3941EC1A07395): *(void**)L_77), il2cpp_rgctx_method(method->rgctx_data, 10));
				NullCheck(L_73);
				il2cpp_codegen_memcpy((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)), L_80, SizeOf_SerializedKeyValue_2_tC33FD891A3FB11EF31F7706377EEFD4377602261);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)), (void*)L_80);
			}

IL_0142_1:
			{
				bool L_81;
				L_81 = ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_6, il2cpp_rgctx_method(method->rgctx_data, 11));
				if (L_81)
				{
					goto IL_0118_1;
				}
			}
			{
				goto IL_015b;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_015b:
	{
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_82 = V_8;
		return (RuntimeArray*)L_82;
	}
}
// Method Definition Index: 50263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* DictionarySerialization_GetEntriesTyped_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2DDC45D6AC27AE31C87D4E18479BB6F0C1092F53_fshared (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_hostingEntityId, RuntimeObject* ___1_dictionary, intptr_t ___2_dictionaryIdentifierTemplateUtf8, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_tE7340FD347DE2AF149F037CFD4A527CA90481F36 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const uint32_t SizeOf_KeyValuePair_2_tF936C990933B99F94903E10D9129A51050D3B181 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	CHECKED_LOCAL(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit);
	void* L_26 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	const uint32_t SizeOf_TKey_t41247C6207A7B4FC7E2254B6702B20C9A3A07C39 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	const uint32_t SizeOf_TValue_t2192DCBFAB230479B83F879F3DFCBAC75BA428FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	const uint32_t SizeOf_SerializedKeyValue_2_t3333E4AD71C7FD0E5903F37F2818C9AC87454E47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_t41247C6207A7B4FC7E2254B6702B20C9A3A07C39);
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TKey_t41247C6207A7B4FC7E2254B6702B20C9A3A07C39);
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_TValue_t2192DCBFAB230479B83F879F3DFCBAC75BA428FD);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_TValue_t2192DCBFAB230479B83F879F3DFCBAC75BA428FD);
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_25 = alloca(SizeOf_Enumerator_tE7340FD347DE2AF149F037CFD4A527CA90481F36);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_30 = alloca(SizeOf_KeyValuePair_2_tF936C990933B99F94903E10D9129A51050D3B181);
	const SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239 L_38 = alloca(SizeOf_SerializedKeyValue_2_t3333E4AD71C7FD0E5903F37F2818C9AC87454E47);
	//<source_info:<no-source>:1>
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* V_5 = NULL;
	int32_t V_6 = 0;
	Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 V_7 = alloca(SizeOf_Enumerator_tE7340FD347DE2AF149F037CFD4A527CA90481F36);
	memset(V_7, 0, SizeOf_Enumerator_tE7340FD347DE2AF149F037CFD4A527CA90481F36);
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_8 = alloca(SizeOf_KeyValuePair_2_tF936C990933B99F94903E10D9129A51050D3B181);
	memset(V_8, 0, SizeOf_KeyValuePair_2_tF936C990933B99F94903E10D9129A51050D3B181);
	{
		RuntimeObject* L_0 = ___1_dictionary;
		V_0 = ((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (RuntimeArray*)NULL;
	}

IL_000c:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = ___0_hostingEntityId;
		intptr_t L_3 = ___2_dictionaryIdentifierTemplateUtf8;
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_4;
		L_4 = DictionarySerialization_ResolveDictionaryFieldUniqueIdentifierForIgnoredLookups_m6763F5B901F8F8495466D725D7D12979C061F88A(L_2, L_3, NULL);
		V_1 = L_4;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, NULL);
		V_2 = L_6;
		il2cpp_codegen_initobj((&V_3), sizeof(IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84));
		RuntimeObject* L_7;
		L_7 = DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline(NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_8 = V_1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_10;
		L_10 = DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline(NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_11 = ___0_hostingEntityId;
		String_t* L_12 = V_1;
		NullCheck(L_10);
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_13;
		L_13 = InterfaceFuncInvoker2< IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, String_t* >::Invoke(0, IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		V_3 = L_13;
	}

IL_003f:
	{
		V_4 = 0;
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_14 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14.___indices;
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_16 = V_3;
		RuntimeArray* L_17 = L_16.___entries;
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_18 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18.___indices;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		V_4 = L_20;
	}

IL_005c:
	{
		int32_t L_21 = V_4;
		if (L_21)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_22 = V_2;
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_23 = (SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F*)(SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)L_22);
		V_5 = L_23;
		V_6 = 0;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_24 = V_0;
		NullCheck(L_24);
		InvokerActionInvoker1< Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_24, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_25);
		il2cpp_codegen_memcpy(V_7, L_25, SizeOf_Enumerator_tE7340FD347DE2AF149F037CFD4A527CA90481F36);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00aa:
			{
				Il2CppConstrainedCallData L_27;
				Il2CppMethodPointer L_28 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 14), (void*)(Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_7, &L_27, L_26);
				typedef void ( *func_L_29)(void*,const RuntimeMethod*);
				((func_L_29)L_28)(L_27.thisPtr,L_27.method);
				return;
			}
		});
		try
		{
			{
				goto IL_009f_1;
			}

IL_0075_1:
			{
				InvokerActionInvoker1< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_7, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_30);
				il2cpp_codegen_memcpy(V_8, L_30, SizeOf_KeyValuePair_2_tF936C990933B99F94903E10D9129A51050D3B181);
				SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_31 = V_5;
				int32_t L_32 = V_6;
				int32_t L_33 = L_32;
				V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_8, (Il2CppFullySharedGenericAny*)L_34);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_8, (Il2CppFullySharedGenericAny*)L_35);
				memset(L_38, 0, SizeOf_SerializedKeyValue_2_t3333E4AD71C7FD0E5903F37F2818C9AC87454E47);
				SerializedKeyValue_2__ctor_mFB9E6B469C84CAE0804D7D8CE13D96B2A26EE4F1((SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239*)L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 8)) ? il2cpp_codegen_memcpy(L_36, L_34, SizeOf_TKey_t41247C6207A7B4FC7E2254B6702B20C9A3A07C39): *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 10)) ? il2cpp_codegen_memcpy(L_37, L_35, SizeOf_TValue_t2192DCBFAB230479B83F879F3DFCBAC75BA428FD): *(void**)L_35), il2cpp_rgctx_method(method->rgctx_data, 12));
				NullCheck(L_31);
				il2cpp_codegen_memcpy((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), L_38, SizeOf_SerializedKeyValue_2_t3333E4AD71C7FD0E5903F37F2818C9AC87454E47);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 11), (void**)(L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)), (void*)L_38);
			}

IL_009f_1:
			{
				bool L_39;
				L_39 = ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)V_7, il2cpp_rgctx_method(method->rgctx_data, 13));
				if (L_39)
				{
					goto IL_0075_1;
				}
			}
			{
				goto IL_00b8;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b8:
	{
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_40 = V_5;
		return (RuntimeArray*)L_40;
	}

IL_00bb:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_41 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_42 = ___0_hostingEntityId;
		String_t* L_43 = V_1;
		int32_t L_44 = V_2;
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_45 = V_3;
		int32_t L_46 = V_4;
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeArray* L_47;
		L_47 = ((  RuntimeArray* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, String_t*, int32_t, IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)))(L_41, L_42, L_43, L_44, L_45, L_46, il2cpp_rgctx_method(method->rgctx_data, 15));
		return L_47;
	}
}
// Method Definition Index: 50261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionarySerialization_SetEntriesTyped_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3D2E6ED1C96683163CB1FACB5144C84E47B40D75_fshared (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_hostingEntityId, RuntimeObject* ___1_dictionary, RuntimeArray* ___2_array, String_t* ___3_dictionaryIdentifier, bool ___4_warnAboutIgnoredEntries, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0EBA42AB09C80F1F9FA91F86CDC4CE3B9EA3A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12471D02007E13A9D0C17395294B8CC6341439A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23B0E5D7B911C28D8185E9BA0551A9BA06E51093);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DC1753B689CCD7602479D3D3FADF4ACD8E3D9B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FAA581856938B9069E7F6A0D506133DF1483405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86DDD9337840A2E461AAC60E4994422F0C35F6AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ECF1F1B022D71E7E628EFFE52A97528A39F8996);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24E06835A8DBA9F87DD9CB84BB603434C2453E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const uint32_t SizeOf_TValue_t850BC88E62605EF77A31DB10EB3EBCACF2E1085E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_SerializedKeyValue_2_t4527018FC76758B486871A7601DCFF22AE193D93 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
	const Il2CppFullySharedGenericAny L_22 = L_15;
	const Il2CppFullySharedGenericAny L_42 = L_15;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TValue_t850BC88E62605EF77A31DB10EB3EBCACF2E1085E);
	const Il2CppFullySharedGenericAny L_43 = L_18;
	const SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239 L_36 = alloca(SizeOf_SerializedKeyValue_2_t4527018FC76758B486871A7601DCFF22AE193D93);
	const SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239 L_61 = L_36;
	//<source_info:<no-source>:1>
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* V_0 = NULL;
	SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* V_1 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_2 = NULL;
	List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Exception_t* V_8 = NULL;
	bool V_9 = false;
	int32_t V_10 = 0;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
	memset(V_11, 0, SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
	Il2CppFullySharedGenericAny V_12 = alloca(SizeOf_TValue_t850BC88E62605EF77A31DB10EB3EBCACF2E1085E);
	memset(V_12, 0, SizeOf_TValue_t850BC88E62605EF77A31DB10EB3EBCACF2E1085E);
	bool V_13 = false;
	Exception_t* V_14 = NULL;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	String_t* V_17 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B8_0 = 0;
	String_t* G_B35_0 = NULL;
	String_t* G_B38_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B46_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B48_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B47_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B51_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B53_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B52_0 = NULL;
	Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* G_B58_0 = NULL;
	Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* G_B57_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_dictionary;
		V_0 = ((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		RuntimeArray* L_2 = ___2_array;
		V_1 = ((SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F*)CastclassSealed((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_3 = V_0;
		NullCheck(L_3);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, NULL);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_4 = V_0;
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_4);
		int32_t L_7;
		L_7 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)NULL;
		V_3 = (List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA*)NULL;
		V_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)NULL;
		V_5 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)NULL;
		V_6 = 0;
		V_7 = (-1);
		V_8 = (Exception_t*)NULL;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23, L_9, L_11);
		V_9 = L_12;
		V_10 = 0;
		goto IL_0150;
	}

IL_0059:
	{
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_13 = V_1;
		int32_t L_14 = V_10;
		NullCheck(L_13);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(((SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239*)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), il2cpp_rgctx_offset(method->rgctx_data, 7)), SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
		il2cpp_codegen_memcpy(V_11, L_15, SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_16 = V_1;
		int32_t L_17 = V_10;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(((SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_offset(method->rgctx_data, 9)), SizeOf_TValue_t850BC88E62605EF77A31DB10EB3EBCACF2E1085E);
		il2cpp_codegen_memcpy(V_12, L_18, SizeOf_TValue_t850BC88E62605EF77A31DB10EB3EBCACF2E1085E);
		il2cpp_codegen_memcpy(L_19, V_11, SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
		bool L_20 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 5), L_19);
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		bool L_21 = V_9;
		if (!L_21)
		{
			goto IL_00a1;
		}
	}
	{
		il2cpp_codegen_memcpy(L_22, V_11, SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(method->rgctx_data, 5), L_22);
		NullCheck(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)CastclassClass((RuntimeObject*)L_23, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
		intptr_t L_24;
		L_24 = Object_GetCachedPtr_m3B66BC474B4F735F68184F00248385BAF9AF650B_inline(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)CastclassClass((RuntimeObject*)L_23, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)), NULL);
		bool L_25;
		L_25 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_24, 0, NULL);
		G_B8_0 = ((int32_t)(L_25));
		goto IL_00a5;
	}

IL_00a1:
	{
		G_B8_0 = 0;
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B8_0 = 1;
	}

IL_00a5:
	{
		if (!G_B8_0)
		{
			goto IL_00e5;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = V_2;
		if (L_26)
		{
			goto IL_00b0;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_27, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_2 = L_27;
	}

IL_00b0:
	{
		List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA* L_28 = V_3;
		if (L_28)
		{
			goto IL_00b9;
		}
	}
	{
		List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA* L_29 = (List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 10));
		((  void (*) (List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(L_29, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_3 = L_29;
	}

IL_00b9:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = V_2;
		int32_t L_31 = V_10;
		NullCheck(L_30);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_30, L_31, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA* L_32 = V_3;
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_33 = V_1;
		int32_t L_34 = V_10;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		il2cpp_codegen_memcpy(L_36, (L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)), SizeOf_SerializedKeyValue_2_t4527018FC76758B486871A7601DCFF22AE193D93);
		NullCheck(L_32);
		InvokerActionInvoker1< SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)), il2cpp_rgctx_method(method->rgctx_data, 12), L_32, L_36);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_37 = V_5;
		if (L_37)
		{
			goto IL_00da;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_38 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_38, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_5 = L_38;
	}

IL_00da:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_39 = V_5;
		int32_t L_40 = V_10;
		NullCheck(L_39);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_39, L_40, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		goto IL_014a;
	}

IL_00e5:
	{
	}
	try
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_41 = V_0;
		il2cpp_codegen_memcpy(L_42, V_11, SizeOf_TKey_tAE8045CB28142DF8D7481D0B7D1AF6E7C24351CC);
		il2cpp_codegen_memcpy(L_43, V_12, SizeOf_TValue_t850BC88E62605EF77A31DB10EB3EBCACF2E1085E);
		NullCheck(L_41);
		bool L_44;
		L_44 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)), il2cpp_rgctx_method(method->rgctx_data, 13), L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_42: *(void**)L_42), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 8)) ? L_43: *(void**)L_43));
		V_13 = L_44;
		goto IL_010a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f4;
		}
		throw e;
	}

CATCH_00f4:
	{
		{
			Exception_t* L_45 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_14 = L_45;
			int32_t L_46 = V_6;
			if (L_46)
			{
				goto IL_0102;
			}
		}
		{
			int32_t L_47 = V_10;
			V_7 = L_47;
			Exception_t* L_48 = V_14;
			V_8 = L_48;
		}

IL_0102:
		{
			int32_t L_49 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_014a;
		}
	}

IL_010a:
	{
		bool L_50 = V_13;
		if (L_50)
		{
			goto IL_014a;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_51 = V_2;
		if (L_51)
		{
			goto IL_0117;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_52, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_2 = L_52;
	}

IL_0117:
	{
		List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA* L_53 = V_3;
		if (L_53)
		{
			goto IL_0120;
		}
	}
	{
		List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA* L_54 = (List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 10));
		((  void (*) (List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(L_54, il2cpp_rgctx_method(method->rgctx_data, 11));
		V_3 = L_54;
	}

IL_0120:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_55 = V_2;
		int32_t L_56 = V_10;
		NullCheck(L_55);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_55, L_56, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA* L_57 = V_3;
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_58 = V_1;
		int32_t L_59 = V_10;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		il2cpp_codegen_memcpy(L_61, (L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)), SizeOf_SerializedKeyValue_2_t4527018FC76758B486871A7601DCFF22AE193D93);
		NullCheck(L_57);
		InvokerActionInvoker1< SerializedKeyValue_2_t02D1B3BF913DBFA3C8C2B30C0B42DB084B4E2239 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)), il2cpp_rgctx_method(method->rgctx_data, 12), L_57, L_61);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_62 = V_4;
		if (L_62)
		{
			goto IL_0141;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_63 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_63, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_4 = L_63;
	}

IL_0141:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_64 = V_4;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_64, L_65, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_014a:
	{
		int32_t L_66 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0150:
	{
		int32_t L_67 = V_10;
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_68)->max_length),NULL));
		if ((((int32_t)L_67) < ((int32_t)L_69)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_70 = V_6;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_023e;
		}
	}
	{
		String_t* L_71 = ___3_dictionaryIdentifier;
		bool L_72;
		L_72 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_71, NULL);
		if (L_72)
		{
			goto IL_017c;
		}
	}
	{
		String_t* L_73 = ___3_dictionaryIdentifier;
		String_t* L_74;
		L_74 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral3DC1753B689CCD7602479D3D3FADF4ACD8E3D9B3, L_73, _stringLiteral5857551470FA48B3F71F992583A93239D3BFAF12, NULL);
		G_B35_0 = L_74;
		goto IL_0181;
	}

IL_017c:
	{
		String_t* L_75 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B35_0 = L_75;
	}

IL_0181:
	{
		V_15 = G_B35_0;
		int32_t L_76 = V_7;
		int32_t L_77 = L_76;
		RuntimeObject* L_78 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_77);
		Exception_t* L_79 = V_8;
		NullCheck(L_79);
		Type_t* L_80;
		L_80 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_79, NULL);
		NullCheck(L_80);
		String_t* L_81;
		L_81 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_80);
		Exception_t* L_82 = V_8;
		NullCheck(L_82);
		String_t* L_83;
		L_83 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_82);
		String_t* L_84;
		L_84 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral9ECF1F1B022D71E7E628EFFE52A97528A39F8996, L_78, L_81, L_83, NULL);
		V_16 = L_84;
		int32_t L_85 = V_6;
		if ((((int32_t)L_85) == ((int32_t)1)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_86 = V_6;
		int32_t L_87 = L_86;
		RuntimeObject* L_88 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_87);
		String_t* L_89;
		L_89 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral12471D02007E13A9D0C17395294B8CC6341439A9, L_88, NULL);
		G_B38_0 = L_89;
		goto IL_01c6;
	}

IL_01c1:
	{
		G_B38_0 = _stringLiteral0E0EBA42AB09C80F1F9FA91F86CDC4CE3B9EA3A1;
	}

IL_01c6:
	{
		V_17 = G_B38_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = L_90;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5FAA581856938B9069E7F6A0D506133DF1483405);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = L_91;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_93 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_94;
		L_94 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_93, NULL);
		NullCheck(L_94);
		String_t* L_95;
		L_95 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_94);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_95);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96 = L_92;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = L_96;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 14)) };
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		NullCheck(L_99);
		String_t* L_100;
		L_100 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_99);
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_100);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_101 = L_97;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_102 = L_101;
		String_t* L_103 = V_15;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_103);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_104 = L_102;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral86DDD9337840A2E461AAC60E4994422F0C35F6AB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_105 = L_104;
		String_t* L_106 = V_17;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_106);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = L_105;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC24E06835A8DBA9F87DD9CB84BB603434C2453E4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = L_107;
		String_t* L_109 = V_16;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_109);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_110 = L_108;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral23B0E5D7B911C28D8185E9BA0551A9BA06E51093);
		String_t* L_111;
		L_111 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_110, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_111, NULL);
	}

IL_023e:
	{
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_112;
		L_112 = DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline(NULL);
		if (!L_112)
		{
			goto IL_02fe;
		}
	}
	{
		String_t* L_113 = ___3_dictionaryIdentifier;
		bool L_114;
		L_114 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_113, NULL);
		if (L_114)
		{
			goto IL_02fe;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_115 = V_2;
		if (L_115)
		{
			goto IL_0267;
		}
	}
	{
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_116;
		L_116 = DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline(NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_117 = ___0_hostingEntityId;
		String_t* L_118 = ___3_dictionaryIdentifier;
		NullCheck(L_116);
		InterfaceActionInvoker2< EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, String_t* >::Invoke(2, IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8_il2cpp_TypeInfo_var, L_116, L_117, L_118);
		goto IL_02fe;
	}

IL_0267:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_119 = V_4;
		if (L_119)
		{
			goto IL_026e;
		}
	}
	{
		G_B46_0 = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(NULL));
		goto IL_0275;
	}

IL_026e:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_120 = V_4;
		NullCheck(L_120);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121;
		L_121 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_120, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		G_B46_0 = L_121;
	}

IL_0275:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = G_B46_0;
		if (L_122)
		{
			G_B48_0 = L_122;
			goto IL_027e;
		}
		G_B47_0 = L_122;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123;
		L_123 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_RuntimeMethod_var);
		G_B48_0 = L_123;
	}

IL_027e:
	{
		V_18 = G_B48_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_124 = V_5;
		if (L_124)
		{
			goto IL_0287;
		}
	}
	{
		G_B51_0 = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(NULL));
		goto IL_028e;
	}

IL_0287:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_125 = V_5;
		NullCheck(L_125);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126;
		L_126 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_125, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		G_B51_0 = L_126;
	}

IL_028e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = G_B51_0;
		if (L_127)
		{
			G_B53_0 = L_127;
			goto IL_0297;
		}
		G_B52_0 = L_127;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128;
		L_128 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_RuntimeMethod_var);
		G_B53_0 = L_128;
	}

IL_0297:
	{
		V_19 = G_B53_0;
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_129;
		L_129 = DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline(NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_130 = ___0_hostingEntityId;
		String_t* L_131 = ___3_dictionaryIdentifier;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_132 = V_2;
		NullCheck(L_132);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133;
		L_133 = List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA(L_132, List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_RuntimeMethod_var);
		List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA* L_134 = V_3;
		NullCheck(L_134);
		SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* L_135;
		L_135 = ((  SerializedKeyValue_2U5BU5D_tC245164DBACB4C079EBF3DF9D74F9C863956811F* (*) (List_1_t42D5A7665FB4D0BB61A4F85F49A94FA607A564BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)))(L_134, il2cpp_rgctx_method(method->rgctx_data, 15));
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_136 = V_0;
		NullCheck(L_136);
		int32_t L_137;
		L_137 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 16)))(L_136, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = V_19;
		IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 L_140;
		memset((&L_140), 0, sizeof(L_140));
		IgnoredEntriesData__ctor_mDAF58BFADB39318DC0E1A0445E50EC443963A519((&L_140), L_133, (RuntimeArray*)L_135, L_137, L_138, L_139, NULL);
		NullCheck(L_129);
		InterfaceActionInvoker3< EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, String_t*, IgnoredEntriesData_t410613FC7AC60AEDFF634A54CFEB1F1E62F2AA84 >::Invoke(1, IDictionaryIgnoredEntriesCache_tBD6BEC200488FB566CB05EB34AEC927899AEEBD8_il2cpp_TypeInfo_var, L_129, L_130, L_131, L_140);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_18;
		NullCheck(L_141);
		V_20 = (bool)((!(((uint64_t)(((RuntimeArray*)L_141)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = V_19;
		NullCheck(L_142);
		V_21 = (bool)((!(((uint64_t)(((RuntimeArray*)L_142)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_143 = ___4_warnAboutIgnoredEntries;
		if (!L_143)
		{
			goto IL_02fe;
		}
	}
	{
		bool L_144 = V_20;
		bool L_145 = V_21;
		if (!((int32_t)((int32_t)L_144|(int32_t)L_145)))
		{
			goto IL_02fe;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_146 = ___0_hostingEntityId;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_147;
		L_147 = EntityId_get_None_mD09599DF1A9CD1DA879B59F1512CDFD4DAFCB39B(NULL);
		bool L_148;
		L_148 = EntityId_op_Inequality_m6E0185C52F9593F494BD8F9181716849AFDFC0EF(L_146, L_147, NULL);
		if (!L_148)
		{
			goto IL_02fe;
		}
	}
	{
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* L_149;
		L_149 = DictionarySerialization_get_s_PostDictionaryKeyWarning_m3BD6B5E873C704F9B1F3EEAA9D9DA0EF25D98AA9_inline(NULL);
		Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* L_150 = L_149;
		if (L_150)
		{
			G_B58_0 = L_150;
			goto IL_02f3;
		}
		G_B57_0 = L_150;
	}
	{
		goto IL_02fe;
	}

IL_02f3:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_151 = ___0_hostingEntityId;
		String_t* L_152 = ___3_dictionaryIdentifier;
		bool L_153 = V_20;
		bool L_154 = V_21;
		NullCheck(G_B58_0);
		Action_4_Invoke_mF39E247EB598EDBCD3D323C130AD8F7F2322BDDE_inline(G_B58_0, L_151, L_152, L_153, L_154, NULL);
	}

IL_02fe:
	{
		return (bool)1;
	}
}
// Method Definition Index: 32279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DocumentationUtils_GetHelpURL_TisIl2CppFullySharedGenericStruct_m9D78A69F8F2E039B1378BD7BDA83BA48836677AB_fshared (Il2CppFullySharedGenericStruct ___0_mask, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8958F544AEFFC47D7A14E3B14CB55E3267F0328);
		il2cpp_rgctx_method_init(method);
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TEnum_t1109E87D1CD4CBACE35AF9411E218D99385735BC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TEnum_t1109E87D1CD4CBACE35AF9411E218D99385735BC);
	//<source_info:<no-source>:1>
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericStruct*)___0_mask, &L_1, L_0);
		typedef Type_t* ( *func_L_3)(void*,const RuntimeMethod*);
		Type_t* L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14, L_4, L_6, (bool)0);
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		NullCheck(L_8);
		if (!(((RuntimeArray*)L_8)->max_length))
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		RuntimeObject* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(((HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D*)CastclassClass((RuntimeObject*)L_11, HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D_il2cpp_TypeInfo_var)));
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(7, ((HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D*)CastclassClass((RuntimeObject*)L_11, HelpURLAttribute_tC499F826613B34E001AEAE5D42BA2B3AD365E91D_il2cpp_TypeInfo_var)));
		il2cpp_codegen_memcpy(L_13, ___0_mask, SizeOf_TEnum_t1109E87D1CD4CBACE35AF9411E218D99385735BC);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB8958F544AEFFC47D7A14E3B14CB55E3267F0328, L_12, L_14, NULL);
		return L_15;
	}

IL_0040:
	{
		String_t* L_16 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_16;
	}
}
// Method Definition Index: 83916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Dropdown_GetOrAddComponent_TisIl2CppSharedGenericObject_m1908FFB2A9BF21399C53A6C67F93BA04731BCAC4_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		NullCheck(L_0);
		Il2CppSharedGenericObject* L_1;
		L_1 = GameObject_GetComponent_TisIl2CppSharedGenericObject_m2326F15B03AC79F0FF91C22873C9679752F372D0(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		Il2CppSharedGenericObject* L_2 = V_0;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_go;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_5;
		L_5 = GameObject_AddComponent_TisIl2CppSharedGenericObject_mEC1C0E045A5A771DA12CB28C8523DB16596946AD(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_5;
	}

IL_001b:
	{
		Il2CppSharedGenericObject* L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 31338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_mB663CF7BB76FB01A3CCF3DFDDEFC64C12A1B7F53_gshared (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		int32_t L_0 = ___1_left;
		Il2CppSharedGenericObject** L_1;
		L_1 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_0), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_2 = (*(Il2CppSharedGenericObject**)L_1);
		V_0 = L_2;
		int32_t L_3 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		V_1 = 0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
	}

IL_0022:
	{
		int32_t L_5 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = ___1_left;
		Il2CppSharedGenericObject** L_7;
		L_7 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_6), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_8 = (*(Il2CppSharedGenericObject**)L_7);
		V_2 = L_8;
		Il2CppSharedGenericObject* L_9 = V_0;
		NullCheck((RuntimeObject*)(V_2));
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 3), (RuntimeObject*)(V_2), L_9);
		V_1 = L_10;
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
	}

IL_0050:
	{
		int32_t L_12 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = ___2_right;
		Il2CppSharedGenericObject** L_14;
		L_14 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_13), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_15 = (*(Il2CppSharedGenericObject**)L_14);
		V_3 = L_15;
		Il2CppSharedGenericObject* L_16 = V_0;
		NullCheck((RuntimeObject*)(V_3));
		int32_t L_17;
		L_17 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 3), (RuntimeObject*)(V_3), L_16);
		V_1 = L_17;
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_19 = ___1_left;
		int32_t L_20 = ___2_right;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_21 = ___2_right;
		Il2CppSharedGenericObject** L_22;
		L_22 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_21), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_23 = V_2;
		*(Il2CppSharedGenericObject**)L_22 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_22, (void*)L_23);
		int32_t L_24 = ___1_left;
		Il2CppSharedGenericObject** L_25;
		L_25 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_24), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_26 = V_3;
		*(Il2CppSharedGenericObject**)L_25 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_25, (void*)L_26);
		goto IL_0018;
	}

IL_0098:
	{
		int32_t L_27 = ___2_right;
		return L_27;
	}
}
// Method Definition Index: 31338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArrayExtensions_Partition_TisIl2CppFullySharedGenericAny_mD8FAB78A2FCE788868E54A1B33D70CEC8D8BF5B9_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_data, int32_t ___1_left, int32_t ___2_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_18 = L_2;
	const Il2CppFullySharedGenericAny L_29 = L_2;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	memset(V_0, 0, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	memset(V_2, 0, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	memset(V_3, 0, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	{
		int32_t L_0 = ___1_left;
		Il2CppFullySharedGenericAny* L_1;
		L_1 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		int32_t L_3 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		V_1 = 0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	}

IL_0022:
	{
		int32_t L_5 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = ___1_left;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		il2cpp_codegen_memcpy(V_2, L_8, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)V_2, &L_11, L_10);
		int32_t L_13 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(L_12, L_11.method,L_11.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9));
		V_1 = L_13;
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
	}

IL_0050:
	{
		int32_t L_15 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		int32_t L_16 = ___2_right;
		Il2CppFullySharedGenericAny* L_17;
		L_17 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_16, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_18, L_17, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		il2cpp_codegen_memcpy(V_3, L_18, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		il2cpp_codegen_memcpy(L_19, V_0, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)V_3, &L_21, L_20);
		int32_t L_23 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(L_22, L_21.method,L_21.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_19: *(void**)L_19));
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_25 = ___1_left;
		int32_t L_26 = ___2_right;
		if ((((int32_t)L_25) >= ((int32_t)L_26)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_27 = ___2_right;
		Il2CppFullySharedGenericAny* L_28;
		L_28 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_27, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_29, V_2, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_28, L_29, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_28, (void*)L_29);
		int32_t L_30 = ___1_left;
		Il2CppFullySharedGenericAny* L_31;
		L_31 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_30, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_32, V_3, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_31, L_32, SizeOf_T_t9C17212D70E5FAFFB72100579F7CDFFEEE3C2D7E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_31, (void*)L_32);
		goto IL_0018;
	}

IL_0098:
	{
		int32_t L_33 = ___2_right;
		return L_33;
	}
}
// Method Definition Index: 31340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArrayExtensions_Partition_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mE82BD3B0E32835BBE673E2B0F2579DEC49602C9B_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* ___3_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___1_left;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_1;
		L_1 = il2cpp_span_get_item((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_0), ((&___0_data))->____length);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_2 = (*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_1);
		V_0 = L_2;
		int32_t L_3 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		V_1 = 0;
		il2cpp_codegen_initobj((&V_2), sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
	}

IL_0022:
	{
		int32_t L_5 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = ___1_left;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_7;
		L_7 = il2cpp_span_get_item((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_6), ((&___0_data))->____length);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_8 = (*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_7);
		V_2 = L_8;
		SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* L_9 = ___3_comparer;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_10 = V_2;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = SortComparer_Invoke_mCFB297D1C3819FD5A4B2001EDC2ED981AFFD61B7_inline(L_9, L_10, L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
	}

IL_004a:
	{
		int32_t L_14 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		int32_t L_15 = ___2_right;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_16;
		L_16 = il2cpp_span_get_item((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_15), ((&___0_data))->____length);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_17 = (*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_16);
		V_3 = L_17;
		SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* L_18 = ___3_comparer;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_19 = V_3;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_20 = V_0;
		NullCheck(L_18);
		int32_t L_21;
		L_21 = SortComparer_Invoke_mCFB297D1C3819FD5A4B2001EDC2ED981AFFD61B7_inline(L_18, L_19, L_20, NULL);
		V_1 = L_21;
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_23 = ___1_left;
		int32_t L_24 = ___2_right;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_25 = ___2_right;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_26;
		L_26 = il2cpp_span_get_item((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_25), ((&___0_data))->____length);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_27 = V_2;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_26 = L_27;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_26)->___compiledGraph), (void*)NULL);
		int32_t L_28 = ___1_left;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_29;
		L_29 = il2cpp_span_get_item((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_28), ((&___0_data))->____length);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_30 = V_3;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_29)->___compiledGraph), (void*)NULL);
		goto IL_0018;
	}

IL_008c:
	{
		int32_t L_31 = ___2_right;
		return L_31;
	}
}
// Method Definition Index: 31340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_m03B3ED2FE469210FB254E015D290DBF0FFE753E7_gshared (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* ___3_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* V_3 = NULL;
	{
		int32_t L_0 = ___1_left;
		Il2CppSharedGenericObject** L_1;
		L_1 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_0), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_2 = (*(Il2CppSharedGenericObject**)L_1);
		V_0 = L_2;
		int32_t L_3 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		V_1 = 0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
	}

IL_0022:
	{
		int32_t L_5 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = ___1_left;
		Il2CppSharedGenericObject** L_7;
		L_7 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_6), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_8 = (*(Il2CppSharedGenericObject**)L_7);
		V_2 = L_8;
		SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* L_9 = ___3_comparer;
		Il2CppSharedGenericObject* L_10 = V_2;
		Il2CppSharedGenericObject* L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = SortComparer_Invoke_m2DE06F31530E494852B44F0A69E0EA62E6029D44_inline(L_9, L_10, L_11, NULL);
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
	}

IL_004a:
	{
		int32_t L_14 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		int32_t L_15 = ___2_right;
		Il2CppSharedGenericObject** L_16;
		L_16 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_15), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_17 = (*(Il2CppSharedGenericObject**)L_16);
		V_3 = L_17;
		SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* L_18 = ___3_comparer;
		Il2CppSharedGenericObject* L_19 = V_3;
		Il2CppSharedGenericObject* L_20 = V_0;
		NullCheck(L_18);
		int32_t L_21;
		L_21 = SortComparer_Invoke_m2DE06F31530E494852B44F0A69E0EA62E6029D44_inline(L_18, L_19, L_20, NULL);
		V_1 = L_21;
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_23 = ___1_left;
		int32_t L_24 = ___2_right;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_25 = ___2_right;
		Il2CppSharedGenericObject** L_26;
		L_26 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_25), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_27 = V_2;
		*(Il2CppSharedGenericObject**)L_26 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_26, (void*)L_27);
		int32_t L_28 = ___1_left;
		Il2CppSharedGenericObject** L_29;
		L_29 = il2cpp_span_get_item((Il2CppSharedGenericObject**)((Il2CppByReference*)&(((&___0_data))->____pointer))->value, (L_28), ((&___0_data))->____length);
		Il2CppSharedGenericObject* L_30 = V_3;
		*(Il2CppSharedGenericObject**)L_29 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_29, (void*)L_30);
		goto IL_0018;
	}

IL_008c:
	{
		int32_t L_31 = ___2_right;
		return L_31;
	}
}
// Method Definition Index: 31340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DynamicArrayExtensions_Partition_TisIl2CppFullySharedGenericAny_m4DF736DBE6698CEFA4397E805308F86082F9ADBA_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* ___3_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_17 = L_2;
	const Il2CppFullySharedGenericAny L_27 = L_2;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	const Il2CppFullySharedGenericAny L_19 = L_10;
	const Il2CppFullySharedGenericAny L_30 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	const Il2CppFullySharedGenericAny L_20 = L_11;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	memset(V_0, 0, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	memset(V_2, 0, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	memset(V_3, 0, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	{
		int32_t L_0 = ___1_left;
		Il2CppFullySharedGenericAny* L_1;
		L_1 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		int32_t L_3 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		V_1 = 0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	}

IL_0022:
	{
		int32_t L_5 = ___1_left;
		___1_left = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = ___1_left;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		il2cpp_codegen_memcpy(V_2, L_8, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* L_9 = ___3_comparer;
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_11: *(void**)L_11));
		V_1 = L_12;
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
	}

IL_004a:
	{
		int32_t L_14 = ___2_right;
		___2_right = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		int32_t L_15 = ___2_right;
		Il2CppFullySharedGenericAny* L_16;
		L_16 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_17, L_16, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		il2cpp_codegen_memcpy(V_3, L_17, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* L_18 = ___3_comparer;
		il2cpp_codegen_memcpy(L_19, V_3, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		NullCheck(L_18);
		int32_t L_21;
		L_21 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_20: *(void**)L_20));
		V_1 = L_21;
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_23 = ___1_left;
		int32_t L_24 = ___2_right;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_25 = ___2_right;
		Il2CppFullySharedGenericAny* L_26;
		L_26 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_25, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_26, L_27, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_26, (void*)L_27);
		int32_t L_28 = ___1_left;
		Il2CppFullySharedGenericAny* L_29;
		L_29 = ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((&___0_data), L_28, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_29, L_30, SizeOf_T_t50BCCD8267BD2249CF8DC9C51F2EC5579510375F);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_29, (void*)L_30);
		goto IL_0018;
	}

IL_008c:
	{
		int32_t L_31 = ___2_right;
		return L_31;
	}
}
// Method Definition Index: 31342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_m3EB9C4C15D9953D53BBF15A1059BDF4D31185C74_gshared (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* L_0 = ___0_array;
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_1;
		L_1 = DynamicArray_1_op_Implicit_m483FFDD62B46579837A31BD77AAD4786581B2FDC(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = DynamicArray_1_get_size_m1077A939B84C23F99846015B0082C444A1546E6A_inline(L_2, NULL);
		DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_mBFA552C2BAEB0A60A784B0489459EE12432DBD80(L_1, 0, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* L_4 = ___0_array;
		NullCheck(L_4);
		DynamicArray_1_BumpVersion_mE846157C38C9D5628C588E03E1A341D8FB1FBA4A(L_4, NULL);
		return;
	}
}
// Method Definition Index: 31342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppFullySharedGenericAny_m3F06DA59AAD3B59C039B725FE2721A2F6DBAFE47_fshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		L_1 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, NULL);
		((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, 0, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* L_4 = ___0_array;
		NullCheck(L_4);
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, NULL);
		return;
	}
}
// Method Definition Index: 31343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m6913D7F83D6886D99F54D5FBC5C9B9FC1B6538B4_gshared (DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE* ___0_array, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* ___1_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE* L_0 = ___0_array;
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_1;
		L_1 = DynamicArray_1_op_Implicit_mAFFF65049A686A3F0E8BB9EDC86DD4D277E3D5DE(L_0, NULL);
		DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = DynamicArray_1_get_size_m0B2BC097E1665D0B776679BBD8B862C53A2DF259_inline(L_2, NULL);
		SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* L_4 = ___1_comparer;
		DynamicArrayExtensions_QuickSort_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mCBEAD9085CA4E536B727FA88F9CBEC4F8AD3B71C(L_1, 0, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		DynamicArray_1_tE72575361C5FDD549EBB875190FDDFFF508A82FE* L_5 = ___0_array;
		NullCheck(L_5);
		DynamicArray_1_BumpVersion_m76E34DC5F6F0DBA99D3FC70B5503768E852AD0D5(L_5, NULL);
		return;
	}
}
// Method Definition Index: 31343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_mC56B33FD79DD69937C02939037E9E297B9B2AA72_gshared (DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* ___0_array, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* ___1_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* L_0 = ___0_array;
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_1;
		L_1 = DynamicArray_1_op_Implicit_m483FFDD62B46579837A31BD77AAD4786581B2FDC(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = DynamicArray_1_get_size_m1077A939B84C23F99846015B0082C444A1546E6A_inline(L_2, NULL);
		SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* L_4 = ___1_comparer;
		DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_m38ED5C7119F4DF05C8E768A4B24B42F719B562D0(L_1, 0, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		DynamicArray_1_t2A75BEDB4D41FF2FB6EC822B2CFBD037211F784D* L_5 = ___0_array;
		NullCheck(L_5);
		DynamicArray_1_BumpVersion_mE846157C38C9D5628C588E03E1A341D8FB1FBA4A(L_5, NULL);
		return;
	}
}
// Method Definition Index: 31343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppFullySharedGenericAny_mE23B34F65DE22B6D248F43F2B405EF1A004A863B_fshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* ___0_array, SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* ___1_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	{
		DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		L_1 = ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, NULL);
		SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* L_4 = ___1_comparer;
		((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, int32_t, int32_t, SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, 0, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* L_5 = ___0_array;
		NullCheck(L_5);
		((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, NULL);
		return;
	}
}
// Method Definition Index: 31339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_mBFA552C2BAEB0A60A784B0489459EE12432DBD80_gshared (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_left;
		int32_t L_1 = ___2_right;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_2 = ___0_data;
		int32_t L_3 = ___1_left;
		int32_t L_4 = ___2_right;
		int32_t L_5;
		L_5 = DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_mB663CF7BB76FB01A3CCF3DFDDEFC64C12A1B7F53(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_7 = ___0_data;
		int32_t L_8 = ___1_left;
		int32_t L_9 = V_0;
		DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_mBFA552C2BAEB0A60A784B0489459EE12432DBD80(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0019:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___2_right;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_10, 1))) >= ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_12 = ___0_data;
		int32_t L_13 = V_0;
		int32_t L_14 = ___2_right;
		DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_mBFA552C2BAEB0A60A784B0489459EE12432DBD80(L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), L_14, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 31339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppFullySharedGenericAny_m5F96EB5927036A64ECECFE97E52A710019BA1053_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_data, int32_t ___1_left, int32_t ___2_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_left;
		int32_t L_1 = ___2_right;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0029;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_data;
		int32_t L_3 = ___1_left;
		int32_t L_4 = ___2_right;
		int32_t L_5;
		L_5 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_7 = ___0_data;
		int32_t L_8 = ___1_left;
		int32_t L_9 = V_0;
		((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0019:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___2_right;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_10, 1))) >= ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_12 = ___0_data;
		int32_t L_13 = V_0;
		int32_t L_14 = ___2_right;
		((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), L_14, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 31341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mCBEAD9085CA4E536B727FA88F9CBEC4F8AD3B71C_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* ___3_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_left;
		int32_t L_1 = ___2_right;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_002c;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_2 = ___0_data;
		int32_t L_3 = ___1_left;
		int32_t L_4 = ___2_right;
		SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* L_5 = ___3_comparer;
		int32_t L_6;
		L_6 = DynamicArrayExtensions_Partition_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mE82BD3B0E32835BBE673E2B0F2579DEC49602C9B(L_2, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_8 = ___0_data;
		int32_t L_9 = ___1_left;
		int32_t L_10 = V_0;
		SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* L_11 = ___3_comparer;
		DynamicArrayExtensions_QuickSort_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mCBEAD9085CA4E536B727FA88F9CBEC4F8AD3B71C(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_001b:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_right;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, 1))) >= ((int32_t)L_13)))
		{
			goto IL_002c;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_14 = ___0_data;
		int32_t L_15 = V_0;
		int32_t L_16 = ___2_right;
		SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* L_17 = ___3_comparer;
		DynamicArrayExtensions_QuickSort_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mCBEAD9085CA4E536B727FA88F9CBEC4F8AD3B71C(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 31341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_m38ED5C7119F4DF05C8E768A4B24B42F719B562D0_gshared (Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* ___3_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_left;
		int32_t L_1 = ___2_right;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_002c;
		}
	}
	{
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_2 = ___0_data;
		int32_t L_3 = ___1_left;
		int32_t L_4 = ___2_right;
		SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* L_5 = ___3_comparer;
		int32_t L_6;
		L_6 = DynamicArrayExtensions_Partition_TisIl2CppSharedGenericObject_m03B3ED2FE469210FB254E015D290DBF0FFE753E7(L_2, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_8 = ___0_data;
		int32_t L_9 = ___1_left;
		int32_t L_10 = V_0;
		SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* L_11 = ___3_comparer;
		DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_m38ED5C7119F4DF05C8E768A4B24B42F719B562D0(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_001b:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_right;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, 1))) >= ((int32_t)L_13)))
		{
			goto IL_002c;
		}
	}
	{
		Span_1_t9DF44C7FD33567C08D63BDF879E483C253316B50 L_14 = ___0_data;
		int32_t L_15 = V_0;
		int32_t L_16 = ___2_right;
		SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* L_17 = ___3_comparer;
		DynamicArrayExtensions_QuickSort_TisIl2CppSharedGenericObject_m38ED5C7119F4DF05C8E768A4B24B42F719B562D0(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 31341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArrayExtensions_QuickSort_TisIl2CppFullySharedGenericAny_m69E26EE045BE50DD1AA630097EF9A315E591B870_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_data, int32_t ___1_left, int32_t ___2_right, SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* ___3_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_left;
		int32_t L_1 = ___2_right;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_002c;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2 = ___0_data;
		int32_t L_3 = ___1_left;
		int32_t L_4 = ___2_right;
		SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* L_5 = ___3_comparer;
		int32_t L_6;
		L_6 = ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, int32_t, int32_t, SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_8 = ___0_data;
		int32_t L_9 = ___1_left;
		int32_t L_10 = V_0;
		SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* L_11 = ___3_comparer;
		((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, int32_t, int32_t, SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_001b:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_right;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, 1))) >= ((int32_t)L_13)))
		{
			goto IL_002c;
		}
	}
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_14 = ___0_data;
		int32_t L_15 = V_0;
		int32_t L_16 = ___2_right;
		SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6* L_17 = ___3_comparer;
		((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, int32_t, int32_t, SortComparer_t880D12991A980D22EAAFEF8EE11300CFF8DACBC6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 22665
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntryProcessor_FillExtrasChannel_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC8603AA5781CAE22E69F1803174E200CAD0202DE (intptr_t* ___0_src, int32_t* ___1_stride, int32_t* ___2_dstOffset, NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___3_slice, int32_t ___4_channel, int32_t ___5_panelMask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		intptr_t* L_0 = ___0_src;
		*(L_0) = 0;
		int32_t* L_1 = ___1_stride;
		*(L_1) = 0;
		int32_t* L_2 = ___2_dstOffset;
		*(L_2) = (-1);
		int32_t L_3 = ___5_panelMask;
		int32_t L_4 = ___4_channel;
		if (((int32_t)((int32_t)L_3&(int32_t)L_4)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		V_0 = 0;
		CHECKED_LOCAL_INIT(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_StaticInit,(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* L_5 = ((UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_StaticFields*)il2cpp_codegen_static_fields_for(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var))->___k_ExtrasChannelOrder;
		V_1 = L_5;
		V_2 = 0;
		goto IL_0039;
	}

IL_0021:
	{
		ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		int32_t L_10 = V_3;
		int32_t L_11 = ___4_channel;
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_12 = ___5_panelMask;
		int32_t L_13 = V_3;
		if (!((int32_t)((int32_t)L_12&(int32_t)L_13)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16)));
	}

IL_0035:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0039:
	{
		int32_t L_16 = V_2;
		ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0021;
		}
	}

IL_003f:
	{
		int32_t* L_19 = ___2_dstOffset;
		int32_t L_20 = V_0;
		*(L_19) = L_20;
		int32_t L_21;
		L_21 = NativeSlice_1_get_Length_m7650D33DC04FE87C0736D620684106DF90ADFFBB_inline((&___3_slice), NULL);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		intptr_t* L_22 = ___0_src;
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_23 = ___3_slice;
		void* L_24;
		L_24 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB3AAF18DA01A2871ABC3A6C17DE5051ABF758556_inline(L_23, NULL);
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_24, NULL);
		*(L_22) = L_25;
		int32_t* L_26 = ___1_stride;
		int32_t L_27;
		L_27 = NativeSlice_1_get_Stride_m17EC64B052DD8EF9B7ECB34587008B81E4C1D0F9_inline((&___3_slice), NULL);
		*(L_26) = L_27;
	}

IL_0062:
	{
		return;
	}
}
// Method Definition Index: 22665
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EntryProcessor_FillExtrasChannel_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB361613D746F23641D831ADC62C9E015D1C2577F (intptr_t* ___0_src, int32_t* ___1_stride, int32_t* ___2_dstOffset, NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___3_slice, int32_t ___4_channel, int32_t ___5_panelMask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		intptr_t* L_0 = ___0_src;
		*(L_0) = 0;
		int32_t* L_1 = ___1_stride;
		*(L_1) = 0;
		int32_t* L_2 = ___2_dstOffset;
		*(L_2) = (-1);
		int32_t L_3 = ___5_panelMask;
		int32_t L_4 = ___4_channel;
		if (((int32_t)((int32_t)L_3&(int32_t)L_4)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		V_0 = 0;
		CHECKED_LOCAL_INIT(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_StaticInit,(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* L_5 = ((UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_StaticFields*)il2cpp_codegen_static_fields_for(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var))->___k_ExtrasChannelOrder;
		V_1 = L_5;
		V_2 = 0;
		goto IL_0039;
	}

IL_0021:
	{
		ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		int32_t L_10 = V_3;
		int32_t L_11 = ___4_channel;
		if ((((int32_t)L_10) == ((int32_t)L_11)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_12 = ___5_panelMask;
		int32_t L_13 = V_3;
		if (!((int32_t)((int32_t)L_12&(int32_t)L_13)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16)));
	}

IL_0035:
	{
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0039:
	{
		int32_t L_16 = V_2;
		ExtraVertexChannelsU5BU5D_tD0CBB949586761A2AF0537832D942B02FE70F2BF* L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0021;
		}
	}

IL_003f:
	{
		int32_t* L_19 = ___2_dstOffset;
		int32_t L_20 = V_0;
		*(L_19) = L_20;
		int32_t L_21;
		L_21 = NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50_inline((&___3_slice), NULL);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		intptr_t* L_22 = ___0_src;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_23 = ___3_slice;
		void* L_24;
		L_24 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7C21A5534F31A98810D38191D4F5511CDF6F7FCD_inline(L_23, NULL);
		intptr_t L_25;
		L_25 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_24, NULL);
		*(L_22) = L_25;
		int32_t* L_26 = ___1_stride;
		int32_t L_27;
		L_27 = NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_inline((&___3_slice), NULL);
		*(L_26) = L_27;
	}

IL_0062:
	{
		return;
	}
}
// Method Definition Index: 46994
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 ProfilerMarker_Auto_m133FA724EB95D16187B37D2C8A501D7E989B1F8D_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = __this->___m_Ptr;
		AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 46998
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_mED763F3F51261EF8FB79DB32CD06E0A3F6C40481_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = __this->___m_Ptr;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		intptr_t L_2 = __this->___m_Ptr;
		ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409(L_2, NULL);
	}

IL_001d:
	{
		return;
	}
}
// Method Definition Index: 875
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 50257
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionarySerialization_get_s_IgnoredEntriesForDictionaries_mEBE8FAE432D80FA20D2C628CD370FE76F5072837_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0 = ((DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticFields*)il2cpp_codegen_static_fields_for(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var))->___U3Cs_IgnoredEntriesForDictionariesU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 50155
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Object_GetCachedPtr_m3B66BC474B4F735F68184F00248385BAF9AF650B_inline (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = __this->___m_CachedPtr;
		return L_0;
	}
}
// Method Definition Index: 3884
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
// Method Definition Index: 50260
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* DictionarySerialization_get_s_PostDictionaryKeyWarning_m3BD6B5E873C704F9B1F3EEAA9D9DA0EF25D98AA9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticInit,(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_4_t0A3FBEB78A5FCA99612044248EB5B37749C40C47* L_0 = ((DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_StaticFields*)il2cpp_codegen_static_fields_for(DictionarySerialization_tFD96F80AA6E9F94BC5C6E7C18D3E4063F3CBC68E_il2cpp_TypeInfo_var))->___U3Cs_PostDictionaryKeyWarningU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 877
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m30D56EDF2807EF309EEF182BA63A3F0EF0B08A15_inline (Action_1_t86516C65829BB92A2767853A28A8B9C092189D2C* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 877
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 877
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mC9D2864A52CF07F93C51935D9DCDF73E96FED543_inline (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 879
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m312AE472FD3B24244802F7163C20C407727A37A4_gshared_inline (Action_2_tB320E985A0D809831658F339EB8499F22B2B8F84* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 879
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m9D812FF2BD9184B9649F4FEF3C24A5C462A3DCC9_gshared_inline (Action_2_t0924F394A459C10B66FF7AD042EAECF3DE580BC5* __this, Il2CppSharedGenericObject* ___0_arg1, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_arg2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 879
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m5BD5405988E0E37A73DE7067708A7E8C4E3C7FB0_gshared_inline (Action_2_t0E9D33F75EC46AC71D5E62DBD6D9A10872C7AC24* __this, Il2CppSharedGenericObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 897
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_m4BC5CB4D8DB16449345D3F066DE90DDFCFE569E6_gshared_inline (Func_3_tB4CC9BCBB06C237E93F0E55AE187C714C251601C* __this, Il2CppSharedGenericObject* ___0_arg1, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_arg2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 11266
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		return;
	}

IL_0034:
	{
		int32_t L_10 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
// Method Definition Index: 3257
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 883
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_4_Invoke_mAD44BB2F676DE19646EAF08F99C0AC6B04E4E228_gshared_inline (Action_4_tA67702EEB9BDC6251AAA7845C0E7947A21B1BDD6* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_arg1, Il2CppSharedGenericObject* ___1_arg2, bool ___2_arg3, bool ___3_arg4, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, Il2CppSharedGenericObject*, bool, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, ___2_arg3, ___3_arg4, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 31335
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortComparer_Invoke_mCFB297D1C3819FD5A4B2001EDC2ED981AFFD61B7_gshared_inline (SortComparer_tB0BC69C087ACC20556242D009B3168D9FC685F4D* __this, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 ___0_x, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 31335
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortComparer_Invoke_m2DE06F31530E494852B44F0A69E0EA62E6029D44_gshared_inline (SortComparer_t897FABC879EE86CAA51D5D4F0030C00A560CFD4D* __this, Il2CppSharedGenericObject* ___0_x, Il2CppSharedGenericObject* ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_x, ___1_y, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 31295
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_fshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 47164
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 47200
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
// Method Definition Index: 47163
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Stride;
		return L_0;
	}
}
// Method Definition Index: 46996
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m7F63A273E382CB6328736B6E7F321DDFA40EA9E3_inline (AutoScope_tFB983697E28885CB10FFDB92D7EFD0615AEF3139* __this, intptr_t ___0_markerPtr, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_markerPtr;
		__this->___m_Ptr = L_0;
		intptr_t L_1 = ___0_markerPtr;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		intptr_t L_3 = ___0_markerPtr;
		ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7(L_3, NULL);
	}

IL_001a:
	{
		return;
	}
}
// Method Definition Index: 3885
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
