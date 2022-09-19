#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.PhysicsScene,Unity.Collections.NativeArray`1<UnityEngine.ModifiableContactPair>>
struct Action_2_t70E17A6F8F03189031C560482454FE2D87F496F2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<Suckable>
struct List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<WaveSettings>
struct List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Suckable[]
struct SuckableU5BU5D_tE67EE1FB6BACF27419265C6740D8C9C25DF17424;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// WaveSettings[]
struct WaveSettingsU5BU5D_t54FFC1548A63A89A09484FD63F8989483559FD5A;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AttachTrashController
struct AttachTrashController_t2352CCEA3AC3053D96D2492497EE15B9A40DEF0D;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// FanController
struct FanController_t65AB708135DD322154511C4636B441CCA2BBA99A;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GrapplingHookShoot
struct GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C;
// Haptic
struct Haptic_tC8A67D343F25A7234E81452F710387326151AEDB;
// HelmetController
struct HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35;
// HookController
struct HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79;
// HookGunController
struct HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Physics
struct Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreController
struct ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SettingsController
struct SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// Suckable
struct Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4;
// SuckableAnimal
struct SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD;
// SuckingMachineCollectionController
struct SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46;
// SuckingMachineController
struct SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TrashChute
struct TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859;
// TrashChuteSucking
struct TrashChuteSucking_t1D53D116AE39B10108C546A4BEC867E4BF37839C;
// TrashGenerator
struct TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameManager/<StartStreakTimer>d__26
struct U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC;
// HelmetController/<StartGameTimer>d__17
struct U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2;
IL2CPP_EXTERN_C String_t* _stringLiteral0789A6B1BB45E3084F65C8FF8F27F7B3DBF67DB4;
IL2CPP_EXTERN_C String_t* _stringLiteral08AA4AD8D922A828B55063374C73379A287EB1E0;
IL2CPP_EXTERN_C String_t* _stringLiteral0981220016E9159BC3D2336A31A5CA7C790FD610;
IL2CPP_EXTERN_C String_t* _stringLiteral10832241F822E63894D4C13F78015A3F65342A3B;
IL2CPP_EXTERN_C String_t* _stringLiteral2980DF1E93883B92A79582EB299BA76B8EA1C808;
IL2CPP_EXTERN_C String_t* _stringLiteral3F64786E077EF3E8D77A6205AEB1DEFA542E2980;
IL2CPP_EXTERN_C String_t* _stringLiteral46447F1314EA2A8C390D8F2A005B6AFAB1AB5461;
IL2CPP_EXTERN_C String_t* _stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930;
IL2CPP_EXTERN_C String_t* _stringLiteral55D00F4E44FDA275E39511BD5B2515D1A66D151E;
IL2CPP_EXTERN_C String_t* _stringLiteral590FB6F8ED68B3797765A22CDA7CF7A46C7E447C;
IL2CPP_EXTERN_C String_t* _stringLiteral6752DF6098CE82A5A22C9F41956A6D2CF6FF6B10;
IL2CPP_EXTERN_C String_t* _stringLiteral704EA316AF9CB11D5A9D4E7AE2B40CC8E5FB89FE;
IL2CPP_EXTERN_C String_t* _stringLiteral73B6C70267899394EDC0B823A6897DE823AF860B;
IL2CPP_EXTERN_C String_t* _stringLiteral8CFED77C2D321772CF6B9FD841F62425002AD9A9;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB0E83A3090DA50484C7A1362B1F58B6CAD21B9;
IL2CPP_EXTERN_C String_t* _stringLiteral8FCD9DFEDB4B5B0CC0587121C4AB1682B834E22B;
IL2CPP_EXTERN_C String_t* _stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B;
IL2CPP_EXTERN_C String_t* _stringLiteral95BBE583587BFB3CA7025B9D3AA1DBD7C0F48C11;
IL2CPP_EXTERN_C String_t* _stringLiteral99FEF1A02DD3126FA20D1DE54B52067995B34379;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F;
IL2CPP_EXTERN_C String_t* _stringLiteralB6063F82E937E2089973A417C938B9201A95FEF9;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD1F6DF584888EF8649BBAE998341A7C4BD4ED5DD;
IL2CPP_EXTERN_C String_t* _stringLiteralDE93DB412AB0398B3BFFB4DD44CA34151F08EA4C;
IL2CPP_EXTERN_C String_t* _stringLiteralE6FC92C06BD2D2840AA37CD0D19BE0CE6947EC1A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_mFEF5CE134EC3E40E465FF567B3134C2D1677CAFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisSuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044_m03A45648C4EB1400C5844C26E00D12C18CFE1C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m6ED7C74701449147948FA42E2A0F3EB4F1EDA53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m11D03401B59A80FC46D791DF81EE89E41FB11AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4BA2EB796E9F9D3BE28F0A6CFE9240FF8D1FED44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m81DB14AA57C09427AA6DC34D462C6DE1BE4CB59C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEFA8D682AC5F5F4F6D058ADED99502A70D687FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m581F0C26788C5C3B945B5A465968A6070D0BDD8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE2E801611054E5282D7EDB03F8D97409346B2D64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C_m740386D66DAA47C6AF5EC0701B11043494F473A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m009EBC2D63242B5428345D2A704803A739AFD6A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_m50B072FDA6ED8ECA971F4D35E0996EA2D2B512B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDDDE5696826C7F74925D950F06671083FD179431_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4F738339515FA493A5F91F3E9806528570FA2771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1DCC9E2F61BD5980BE700934628DB0C6330BD56E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD412BBF12BE17D0825D883DA192F5A61B72D5C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m4008E5FF5766D37F39021D56776D933703C05E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4FA50681BE20A724488448F92D5B86CEEA18F04B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m858E27980654409E97389136C255D13D717B5187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88587A0ABD2A6917EFAE4F72B496BA19A55BDBCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCD5400ADE86636B75D19AA37097E8992E3FA1784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m823B09C2C6516AA31D01B2B8B817546D13BF2AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGameTimerU3Ed__17_System_Collections_IEnumerator_Reset_m5C4C2AE4BE83E3C78F2DB8A7E872DD53B9EF6C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartStreakTimerU3Ed__26_System_Collections_IEnumerator_Reset_m1DE1C9982492795D3F42BC364D6449316DF2BA41_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Suckable>
struct List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SuckableU5BU5D_tE67EE1FB6BACF27419265C6740D8C9C25DF17424* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SuckableU5BU5D_tE67EE1FB6BACF27419265C6740D8C9C25DF17424* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WaveSettings>
struct List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WaveSettingsU5BU5D_t54FFC1548A63A89A09484FD63F8989483559FD5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WaveSettingsU5BU5D_t54FFC1548A63A89A09484FD63F8989483559FD5A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// ConeCast
struct ConeCast_t0EFA66CB9A142FC1A4DD04F473E82DF41D8151DC  : public RuntimeObject
{
};

// UnityEngine.Physics
struct Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56  : public RuntimeObject
{
};

struct Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56_StaticFields
{
	// System.Action`2<UnityEngine.PhysicsScene,Unity.Collections.NativeArray`1<UnityEngine.ModifiableContactPair>> UnityEngine.Physics::ContactModifyEvent
	Action_2_t70E17A6F8F03189031C560482454FE2D87F496F2* ___ContactModifyEvent_0;
	// System.Action`2<UnityEngine.PhysicsScene,Unity.Collections.NativeArray`1<UnityEngine.ModifiableContactPair>> UnityEngine.Physics::ContactModifyEventCCD
	Action_2_t70E17A6F8F03189031C560482454FE2D87F496F2* ___ContactModifyEventCCD_1;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameManager/<StartStreakTimer>d__26
struct U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC  : public RuntimeObject
{
	// System.Int32 GameManager/<StartStreakTimer>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<StartStreakTimer>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<StartStreakTimer>d__26::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// HelmetController/<StartGameTimer>d__17
struct U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D  : public RuntimeObject
{
	// System.Int32 HelmetController/<StartGameTimer>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HelmetController/<StartGameTimer>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HelmetController HelmetController/<StartGameTimer>d__17::<>4__this
	HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* ___U3CU3E4__this_2;
	// System.Single HelmetController/<StartGameTimer>d__17::_timer
	float ____timer_3;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// System.Collections.Generic.List`1/Enumerator<Suckable>
struct Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// WaveSettings
struct WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE 
{
	// System.Single WaveSettings::timeSeconds
	float ___timeSeconds_0;
	// System.Single WaveSettings::duration
	float ___duration_1;
	// System.Single WaveSettings::intesity
	float ___intesity_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Collections.Generic.List`1/Enumerator<WaveSettings>
struct Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE ____current_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AttachTrashController
struct AttachTrashController_t2352CCEA3AC3053D96D2492497EE15B9A40DEF0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SuckableAnimal AttachTrashController::animalController
	SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* ___animalController_4;
};

// FanController
struct FanController_t65AB708135DD322154511C4636B441CCA2BBA99A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SuckingMachineController FanController::suckMachine
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* ___suckMachine_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> FanController::blades
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___blades_5;
	// System.Single FanController::fanSpeed
	float ___fanSpeed_6;
	// System.Single FanController::fanRotation
	float ___fanRotation_7;
	// System.Boolean FanController::machineModeChanging
	bool ___machineModeChanging_8;
	// System.Boolean FanController::machineModeSucking
	bool ___machineModeSucking_9;
	// System.Single FanController::modeValue
	float ___modeValue_10;
	// System.Single FanController::foldingSpeed
	float ___foldingSpeed_11;
	// System.Single FanController::foldingRotation
	float ___foldingRotation_12;
	// System.Single FanController::recoil
	float ___recoil_13;
	// System.Single FanController::recoilValue
	float ___recoilValue_14;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GameManager::timerInSeconds
	float ___timerInSeconds_5;
	// System.Single GameManager::combos
	float ___combos_6;
	// System.Single GameManager::perComboValue
	float ___perComboValue_7;
	// System.Single GameManager::objective
	float ___objective_8;
	// System.Boolean GameManager::onStreak
	bool ___onStreak_9;
	// System.Single GameManager::streakTimer
	float ___streakTimer_10;
	// HelmetController GameManager::helmetController
	HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* ___helmetController_11;
	// System.Single GameManager::cleannessLevel
	float ___cleannessLevel_12;
	// TMPro.TextMeshPro GameManager::trashPointsText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___trashPointsText_13;
	// System.Single GameManager::score
	float ___score_14;
	// System.Single GameManager::currentTrashpoints
	float ___currentTrashpoints_15;
	// UnityEngine.GameObject GameManager::cleannessBar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cleannessBar_16;
	// System.Single GameManager::cleannessBarMult
	float ___cleannessBarMult_17;
	// System.Single GameManager::maxCleanness
	float ___maxCleanness_18;
	// ScoreController GameManager::scoreController
	ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* ___scoreController_19;
	// UnityEngine.InputSystem.InputActionProperty GameManager::menuButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___menuButton_20;
	// System.Boolean GameManager::isPaused
	bool ___isPaused_21;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::_instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ____instance_4;
};

// GrapplingHookShoot
struct GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GrapplingHookShoot::ropeLength
	float ___ropeLength_4;
	// System.Boolean GrapplingHookShoot::isShot
	bool ___isShot_5;
	// UnityEngine.LineRenderer GrapplingHookShoot::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_6;
	// HookController GrapplingHookShoot::hookController
	HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* ___hookController_7;
	// UnityEngine.GameObject GrapplingHookShoot::objectHit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectHit_8;
	// UnityEngine.InputSystem.InputActionProperty GrapplingHookShoot::shootButton
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___shootButton_9;
	// System.Single GrapplingHookShoot::letGoDistance
	float ___letGoDistance_10;
	// Haptic GrapplingHookShoot::haptic
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ___haptic_11;
	// System.Single GrapplingHookShoot::pullStrength
	float ___pullStrength_12;
	// System.Boolean GrapplingHookShoot::resetButtonPress
	bool ___resetButtonPress_13;
	// UnityEngine.GameObject GrapplingHookShoot::hookObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hookObj_14;
	// UnityEngine.GameObject GrapplingHookShoot::hookEndpoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hookEndpoint_15;
};

// Haptic
struct Haptic_tC8A67D343F25A7234E81452F710387326151AEDB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController Haptic::leftController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___leftController_5;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController Haptic::rightController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___rightController_6;
};

struct Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_StaticFields
{
	// Haptic Haptic::_instance
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ____instance_4;
};

// HelmetController
struct HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 HelmetController::defaultPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultPosition_4;
	// GameManager HelmetController::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_5;
	// TMPro.TextMeshProUGUI HelmetController::timerText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___timerText_7;
	// UnityEngine.UI.Slider HelmetController::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_8;
	// System.Single HelmetController::objective
	float ___objective_9;
	// System.Single HelmetController::currentTrashpoints
	float ___currentTrashpoints_10;
	// UnityEngine.Camera HelmetController::UICamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___UICamera_11;
	// UnityEngine.Vector3 HelmetController::customCameraPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___customCameraPosition_12;
	// TMPro.TextMeshProUGUI HelmetController::objText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___objText_13;
	// System.Single HelmetController::timer
	float ___timer_14;
};

struct HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_StaticFields
{
	// HelmetController HelmetController::_instance
	HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* ____instance_6;
};

// HookController
struct HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GrapplingHookShoot HookController::grapplingHookController
	GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* ___grapplingHookController_4;
	// UnityEngine.GameObject HookController::grapplingHookObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grapplingHookObj_5;
	// System.Boolean HookController::isRetrieving
	bool ___isRetrieving_6;
	// System.Boolean HookController::isShooting
	bool ___isShooting_7;
	// UnityEngine.GameObject HookController::attachedObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attachedObj_8;
	// System.Single HookController::hookPower
	float ___hookPower_9;
	// System.Boolean HookController::moveParent
	bool ___moveParent_10;
	// UnityEngine.GameObject HookController::raycastHit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___raycastHit_11;
	// System.Single HookController::pullBackSpeed
	float ___pullBackSpeed_12;
};

// HookGunController
struct HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> HookGunController::positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___positions_4;
	// UnityEngine.GameObject HookGunController::startGizmos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startGizmos_5;
	// UnityEngine.GameObject HookGunController::endGizmos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___endGizmos_6;
	// UnityEngine.GameObject HookGunController::shaftGizmos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shaftGizmos_7;
	// UnityEngine.GameObject HookGunController::hookGun
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hookGun_8;
	// TMPro.TextMeshPro HookGunController::pullFactorText
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___pullFactorText_9;
	// GrapplingHookShoot HookGunController::grapplingHookScript
	GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* ___grapplingHookScript_10;
	// UnityEngine.Vector3 HookGunController::hookGunAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hookGunAcceleration_11;
	// System.Single HookGunController::pullFactor
	float ___pullFactor_12;
	// System.Single HookGunController::maxPullFactor
	float ___maxPullFactor_13;
	// System.Boolean HookGunController::pulling
	bool ___pulling_14;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody PlayerController::playerRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___playerRigidbody_4;
};

// ScoreController
struct ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ScoreController::objectiveText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___objectiveText_4;
	// TMPro.TextMeshProUGUI ScoreController::comboText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___comboText_5;
	// TMPro.TextMeshProUGUI ScoreController::extraFromLevelText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___extraFromLevelText_6;
	// TMPro.TextMeshProUGUI ScoreController::totalText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___totalText_7;
	// TMPro.TextMeshProUGUI ScoreController::objectiveValueText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___objectiveValueText_8;
	// TMPro.TextMeshProUGUI ScoreController::comboValueText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___comboValueText_9;
	// TMPro.TextMeshProUGUI ScoreController::extraFromLevelValueText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___extraFromLevelValueText_10;
	// TMPro.TextMeshProUGUI ScoreController::totalValueText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___totalValueText_11;
	// GameManager ScoreController::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_12;
};

// SettingsController
struct SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SettingsController::sliderX
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderX_4;
	// UnityEngine.UI.Slider SettingsController::sliderY
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderY_5;
	// UnityEngine.UI.Slider SettingsController::sliderZ
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___sliderZ_6;
	// HelmetController SettingsController::helmetController
	HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* ___helmetController_7;
	// UnityEngine.GameObject SettingsController::UICameraObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UICameraObj_8;
	// UnityEngine.Vector3 SettingsController::defaultPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___defaultPosition_9;
	// UnityEngine.Vector3 SettingsController::customPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___customPosition_10;
};

// Suckable
struct Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody Suckable::rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbody_4;
	// System.Boolean Suckable::sucked
	bool ___sucked_5;
	// System.Boolean Suckable::trashChuteSucked
	bool ___trashChuteSucked_6;
	// TrashChute Suckable::trashChute
	TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* ___trashChute_7;
	// System.Single Suckable::shrinkSpeed
	float ___shrinkSpeed_8;
	// GarbageProperty Suckable::garbageProperty
	int32_t ___garbageProperty_9;
	// System.Single Suckable::weight
	float ___weight_10;
	// SuckingMachineController Suckable::suckMachine
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* ___suckMachine_11;
	// Haptic Suckable::haptic
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ___haptic_12;
	// System.Single Suckable::trashPointsValue
	float ___trashPointsValue_13;
	// System.Boolean Suckable::canBeVacuumed
	bool ___canBeVacuumed_14;
	// System.Boolean Suckable::canBeSucked
	bool ___canBeSucked_15;
	// System.Boolean Suckable::canBeHooked
	bool ___canBeHooked_16;
	// System.Boolean Suckable::wasAttached
	bool ___wasAttached_17;
	// System.Boolean Suckable::isHooked
	bool ___isHooked_18;
	// System.Single Suckable::growSpeed
	float ___growSpeed_19;
	// System.Boolean Suckable::isGrowing
	bool ___isGrowing_20;
	// UnityEngine.Vector3 Suckable::originalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalScale_21;
	// UnityEngine.Sprite Suckable::thumbnail
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___thumbnail_22;
	// UnityEngine.Vector3 Suckable::flowDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___flowDirection_23;
	// System.Single Suckable::flowSpeed
	float ___flowSpeed_24;
	// System.Boolean Suckable::isFlowing
	bool ___isFlowing_25;
	// System.Single Suckable::SwooshIntensity
	float ___SwooshIntensity_26;
	// System.Single Suckable::SwooshFrequency
	float ___SwooshFrequency_27;
	// System.Boolean Suckable::isSwooshing
	bool ___isSwooshing_28;
	// GameManager Suckable::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_29;
	// UnityEngine.Vector3 Suckable::oldSwoosh
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldSwoosh_30;
	// System.Single Suckable::sX
	float ___sX_31;
	// System.Single Suckable::sY
	float ___sY_32;
	// System.Single Suckable::sZ
	float ___sZ_33;
};

// SuckingMachineCollectionController
struct SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SuckingMachineController SuckingMachineCollectionController::suckingMachineController
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* ___suckingMachineController_4;
	// UnityEngine.SpriteRenderer SuckingMachineCollectionController::display
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___display_5;
	// UnityEngine.Sprite SuckingMachineCollectionController::emptySprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___emptySprite_6;
	// UnityEngine.Sprite SuckingMachineCollectionController::notFound
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___notFound_7;
};

// SuckingMachineController
struct SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SuckingMachineController::radius
	float ___radius_4;
	// System.Single SuckingMachineController::depth
	float ___depth_5;
	// System.Single SuckingMachineController::angle
	float ___angle_6;
	// System.Single SuckingMachineController::suckPower
	float ___suckPower_7;
	// System.Boolean SuckingMachineController::disableSuckButton
	bool ___disableSuckButton_8;
	// UnityEngine.InputSystem.InputActionProperty SuckingMachineController::enableSuck
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___enableSuck_9;
	// UnityEngine.InputSystem.InputActionProperty SuckingMachineController::suckPowerInput
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___suckPowerInput_10;
	// UnityEngine.InputSystem.InputActionProperty SuckingMachineController::shootTriggerInput
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___shootTriggerInput_11;
	// UnityEngine.InputSystem.InputActionProperty SuckingMachineController::suckingMachineModeInput
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___suckingMachineModeInput_12;
	// Haptic SuckingMachineController::haptic
	Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* ___haptic_13;
	// UnityEngine.GameObject SuckingMachineController::pivot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pivot_14;
	// System.Single SuckingMachineController::maxOpTemp
	float ___maxOpTemp_15;
	// System.Boolean SuckingMachineController::coolingDown
	bool ___coolingDown_16;
	// System.Single SuckingMachineController::tempBarMult
	float ___tempBarMult_17;
	// System.Single SuckingMachineController::temp
	float ___temp_18;
	// SuckingMachineCollectionController SuckingMachineController::collectionController
	SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46* ___collectionController_19;
	// System.Single SuckingMachineController::maxCapacity
	float ___maxCapacity_20;
	// UnityEngine.GameObject SuckingMachineController::capacityBar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___capacityBar_21;
	// System.Single SuckingMachineController::capacityBarMult
	float ___capacityBarMult_22;
	// System.Single SuckingMachineController::trashItemAmount
	float ___trashItemAmount_23;
	// System.Boolean SuckingMachineController::storageFull
	bool ___storageFull_24;
	// UnityEngine.Color SuckingMachineController::heatAlbedoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___heatAlbedoColor_25;
	// UnityEngine.Color SuckingMachineController::heatEmmisionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___heatEmmisionColor_26;
	// UnityEngine.Sprite SuckingMachineController::heatColor
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___heatColor_27;
	// UnityEngine.Sprite SuckingMachineController::heatEmmision
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___heatEmmision_28;
	// UnityEngine.GameObject SuckingMachineController::modeArrow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___modeArrow_29;
	// System.Single SuckingMachineController::modeChangingDelay
	float ___modeChangingDelay_30;
	// System.Boolean SuckingMachineController::gunModeChanging
	bool ___gunModeChanging_31;
	// System.Single SuckingMachineController::modeChangingTime
	float ___modeChangingTime_32;
	// System.Single SuckingMachineController::shootingModeDirection
	float ___shootingModeDirection_33;
	// System.Single SuckingMachineController::arrowSpeed
	float ___arrowSpeed_34;
	// System.Single SuckingMachineController::triggerValue
	float ___triggerValue_35;
	// System.Boolean SuckingMachineController::machineModeSucking
	bool ___machineModeSucking_36;
	// System.Boolean SuckingMachineController::modeButtonBeingPressed
	bool ___modeButtonBeingPressed_37;
	// FanController SuckingMachineController::fanController
	FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* ___fanController_38;
	// System.Boolean SuckingMachineController::shooting
	bool ___shooting_39;
	// System.Boolean SuckingMachineController::sucking
	bool ___sucking_40;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SuckingMachineController::suckedObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___suckedObjects_41;
	// UnityEngine.Physics SuckingMachineController::physics
	Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56* ___physics_42;
};

// TrashChute
struct TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GarbageProperty TrashChute::garbageProperty
	int32_t ___garbageProperty_4;
	// UnityEngine.Transform TrashChute::ejectTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ejectTransform_5;
	// System.Single TrashChute::ejectForce
	float ___ejectForce_6;
	// GameManager TrashChute::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_7;
	// System.Single TrashChute::ejectDelay
	float ___ejectDelay_8;
	// System.Single TrashChute::ejectTime
	float ___ejectTime_9;
	// TMPro.TextMeshPro TrashChute::streakDisplay
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___streakDisplay_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TrashChute::itemsToEject
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___itemsToEject_11;
};

// TrashChuteSucking
struct TrashChuteSucking_t1D53D116AE39B10108C546A4BEC867E4BF37839C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TrashChuteSucking::suckForce
	float ___suckForce_4;
};

// TrashGenerator
struct TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 TrashGenerator::spawnAngle
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___spawnAngle_4;
	// System.Single TrashGenerator::radius
	float ___radius_5;
	// System.Single TrashGenerator::spawnRate
	float ___spawnRate_6;
	// System.Single TrashGenerator::consistentSpawnRate
	float ___consistentSpawnRate_7;
	// UnityEngine.Vector2 TrashGenerator::randomHorizontalOffsetRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___randomHorizontalOffsetRange_8;
	// UnityEngine.Vector2 TrashGenerator::randomVerticalOffsetRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___randomVerticalOffsetRange_9;
	// UnityEngine.Vector2 TrashGenerator::randomSpeedRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___randomSpeedRange_10;
	// System.Single TrashGenerator::spread
	float ___spread_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TrashGenerator::generalTrash
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___generalTrash_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TrashGenerator::plasticTrash
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___plasticTrash_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TrashGenerator::wasteTrash
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___wasteTrash_14;
	// System.Single TrashGenerator::trashTypeSpread
	float ___trashTypeSpread_15;
	// System.Single TrashGenerator::trashType
	float ___trashType_16;
	// System.Single TrashGenerator::trashSwooshIntensity
	float ___trashSwooshIntensity_17;
	// System.Single TrashGenerator::trashSwooshFrequency
	float ___trashSwooshFrequency_18;
	// System.Single TrashGenerator::maxGameTimeMinute
	float ___maxGameTimeMinute_19;
	// System.Collections.Generic.List`1<WaveSettings> TrashGenerator::waves
	List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* ___waves_20;
	// System.Collections.Generic.List`1<System.Single> TrashGenerator::waveIntensityValues
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___waveIntensityValues_21;
	// System.Single TrashGenerator::time
	float ___time_22;
	// System.Single TrashGenerator::t
	float ___t_23;
	// System.Int32 TrashGenerator::tW
	int32_t ___tW_24;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// SuckableAnimal
struct SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD  : public Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4
{
	// System.Boolean SuckableAnimal::isSaved
	bool ___isSaved_34;
	// System.Collections.Generic.List`1<Suckable> SuckableAnimal::preDefinedGarbageOnPrefab
	List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* ___preDefinedGarbageOnPrefab_35;
	// System.Collections.Generic.List`1<Suckable> SuckableAnimal::attachedGarbage
	List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* ___attachedGarbage_36;
	// System.Single SuckableAnimal::suckItemInterval
	float ___suckItemInterval_37;
	// System.Single SuckableAnimal::suckPowerRequiredPerTrash
	float ___suckPowerRequiredPerTrash_38;
	// System.Single SuckableAnimal::maxTrashAllowed
	float ___maxTrashAllowed_39;
	// UnityEngine.Collider SuckableAnimal::attachCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___attachCollider_40;
	// UnityEngine.GameObject SuckableAnimal::playerObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerObj_41;
	// System.Single SuckableAnimal::maxPlayerRange
	float ___maxPlayerRange_42;
	// System.Single SuckableAnimal::distanceToPlayer
	float ___distanceToPlayer_43;
	// System.Boolean SuckableAnimal::stayWithinPlayerRange
	bool ___stayWithinPlayerRange_44;
	// System.Single SuckableAnimal::swimSpeed
	float ___swimSpeed_45;
	// System.Single SuckableAnimal::rotateSpeed
	float ___rotateSpeed_46;
	// System.Boolean SuckableAnimal::isRotating
	bool ___isRotating_47;
	// System.Single SuckableAnimal::targetAngle
	float ___targetAngle_48;
	// System.Boolean SuckableAnimal::isDead
	bool ___isDead_49;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDDDE5696826C7F74925D950F06671083FD179431_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_gshared (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_gshared_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m88587A0ABD2A6917EFAE4F72B496BA19A55BDBCC_gshared_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.RaycastHit>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_gshared (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<WaveSettings>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664 List_1_GetEnumerator_mD412BBF12BE17D0825D883DA192F5A61B72D5C1B_gshared (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<WaveSettings>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m4BA2EB796E9F9D3BE28F0A6CFE9240FF8D1FED44_gshared (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<WaveSettings>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE Enumerator_get_Current_mE2E801611054E5282D7EDB03F8D97409346B2D64_gshared_inline (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<WaveSettings>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m81DB14AA57C09427AA6DC34D462C6DE1BE4CB59C_gshared (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<WaveSettings>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mCD5400ADE86636B75D19AA37097E8992E3FA1784_gshared_inline (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<WaveSettings>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4FA50681BE20A724488448F92D5B86CEEA18F04B_gshared (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponentInParent<SuckableAnimal>()
inline SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* Component_GetComponentInParent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_mFEF5CE134EC3E40E465FF567B3134C2D1677CAFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Suckable>()
inline Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void SuckableAnimal::AttachTrash(Suckable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_AttachTrash_m0C00AAE7C8FA8DEFE0663DD3420C1F0703EDE581 (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* ___attachedGarbageObj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void FanController::BladeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController_BladeRotation_m75E4FCFF95D2BA9AF7A03FBA614DC450717AB206 (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) ;
// System.Void FanController::MachineMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController_MachineMode_m1C7DFEF062D01B3852758358A281A9B7C235ED4E (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, int32_t ___relativeTo3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_runInBackground_m4CD0DF59011994C4DB76D7A2FE7A02BC07B4AF67 (bool ___value0, const RuntimeMethod* method) ;
// HelmetController HelmetController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* HelmetController_get_Instance_m1EE9739508E9EAD3FFF83C30D055DF65C5418510 (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Boolean>()
inline bool InputAction_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDDDE5696826C7F74925D950F06671083FD179431 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDDDE5696826C7F74925D950F06671083FD179431_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::StartStreakTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartStreakTimer_mD036BC97D7997BDAC8309E0317429D7D245D2739 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void HelmetController::UpdateScoreBar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelmetController_UpdateScoreBar_m93E737F5535C7CFE976D4210F8ACF8F8E977DA10 (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, float ____currentTrashpoints0, const RuntimeMethod* method) ;
// System.Void GameManager/<StartStreakTimer>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStreakTimerU3Ed__26__ctor_m305B446F5E4787585CF05A206DCBA6080CB44F99 (U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void ScoreController::UpdateScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_UpdateScreen_mFD3DB040F527585BC97D6B81753339782F7786F5 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) ;
// System.Void HelmetController::SetUpHelmet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelmetController_SetUpHelmet_mDAFEEAA33DF38EBB0EDEC0E8FFD2A17FD4405D93 (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HelmetController::StartGameTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HelmetController_StartGameTimer_m4CAC9C8E083320AD58BEE213C88F23EF6651A98A (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, float ____timer0, const RuntimeMethod* method) ;
// System.Void HelmetController/<StartGameTimer>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameTimerU3Ed__17__ctor_mF27DBE0745D8034C74FB0F56FCD7159381640FDB (U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean HookController::IsAttached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HookController_IsAttached_m760A9C1886636EBC0A5D826FBBBBC58A8D2DEAB5 (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void HookController::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookController_Retrieve_mEAB382DAAC16AE0E159ED71E11CFAF4ADEF187F4 (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) ;
// System.Void HookController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookController_Move_m571724CC65421DF108A7C201936BF69499768C93 (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<GrapplingHookShoot>()
inline GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* GameObject_GetComponent_TisGrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C_m740386D66DAA47C6AF5EC0701B11043494F473A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 HookGunController::CalculateDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HookGunController_CalculateDirection_m93249784EA8C76FFA1D1E877C34D765BC6D12946 (HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single HookGunController::PullFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HookGunController_PullFactor_mB12D5261A815F1C3FE9B7CA6D3D4883080EEFD90 (HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void GrapplingHookShoot::Pull(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_Pull_m9C8A5F370C4CF4670D8426865C0948A7FB29AF21 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, float ____pullStrength0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::SphereCastAll(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_SphereCastAll_m90D15BED8E37CCDC16BCD900697FDCB221A399EB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, float ___maxDistance3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::.ctor()
inline void List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, const RuntimeMethod*))List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Add(T)
inline void List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, const RuntimeMethod*))List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RaycastHit>::get_Count()
inline int32_t List_1_get_Count_m88587A0ABD2A6917EFAE4F72B496BA19A55BDBCC_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, const RuntimeMethod*))List_1_get_Count_m88587A0ABD2A6917EFAE4F72B496BA19A55BDBCC_gshared_inline)(__this, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.RaycastHit>::ToArray()
inline RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797 (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method)
{
	return ((  RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, const RuntimeMethod*))List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_gshared)(__this, method);
}
// Haptic Haptic::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* Haptic_get_Instance_m08B701575323EC53472DCEB31E639F2B74594403 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<HookController>()
inline HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* GameObject_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m009EBC2D63242B5428345D2A704803A739AFD6A7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Haptic::SendHapticsLeftController(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic_SendHapticsLeftController_m3FB636C0F64B220C414510708DF93656E4EB7AA5 (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, float ___amplitude0, float ___duration1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::IsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void GrapplingHookShoot::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_Shoot_mBA6C93C95FC156E09E578389A7F76A97F9EC909D (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) ;
// System.Void GrapplingHookShoot::CheckForRetrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_CheckForRetrieve_mCA5DC4FDCB647E0E2E5E6EAF8D15B3DD39C27D53 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void GrapplingHookShoot::LetGo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_LetGo_m7442B9972FB41284BE241C7592D93ADC055386FD (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) ;
// System.Void GrapplingHookShoot::ReturnInGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_ReturnInGun_mD83E21C2B6498983C8CFE630447F81DA86A6E411 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) ;
// System.Void GrapplingHookShoot::DrawRope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_DrawRope_m04B017F53EFBA01DDBD324E8F7FDE195CEE7DA18 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Suckable>()
inline Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void Suckable::DeleteItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_DeleteItem_m54C9F5B23D21A3C938DF95DB65E72ACF289F8F9A (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) ;
// System.Void Suckable::Flow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Flow_mE874E3E39B2F4DCA289FC02A01D35740FA7E6FC6 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) ;
// System.Void Suckable::Shrink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Shrink_mAF621E3A34371F4947D902F6980199F34A01EDAD (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) ;
// System.Void Suckable::Grow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Grow_m83DF1BD4CA77C00C8434F7C71514B6D2860C1F4C (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) ;
// System.Void Suckable::ShrinkTrashChute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_ShrinkTrashChute_m8B1BB44F9EA6564E85F996FAA800B032E4010677 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) ;
// System.Void Suckable::Swooshes(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Swooshes_m754AF3D52BBB73DEECEA16D8CF3E973B4C4D4424 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, float ____intensity0, float ____frequency1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HookController>()
inline HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* Component_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m6ED7C74701449147948FA42E2A0F3EB4F1EDA53F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Haptic::SendHapticsRightController(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic_SendHapticsRightController_m765E5DD565AE8A77B1BEB0988939628C3E9A1492 (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, float ___amplitude0, float ___duration1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void GameManager::AddTrashPoints(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddTrashPoints_m70B80061C0CC961BFF87EB760342CDA0FB212ABB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ____trashPoints0, float ____streakTime1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___torque0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Suckable>::.ctor()
inline void List_1__ctor_m858E27980654409E97389136C255D13D717B5187 (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Suckable>::GetEnumerator()
inline Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832 List_1_GetEnumerator_m1DCC9E2F61BD5980BE700934628DB0C6330BD56E (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832 (*) (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Suckable>::Dispose()
inline void Enumerator_Dispose_m11D03401B59A80FC46D791DF81EE89E41FB11AB6 (Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Suckable>::get_Current()
inline Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* Enumerator_get_Current_m581F0C26788C5C3B945B5A465968A6070D0BDD8A_inline (Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832* __this, const RuntimeMethod* method)
{
	return ((  Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* (*) (Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Suckable>::MoveNext()
inline bool Enumerator_MoveNext_mEFA8D682AC5F5F4F6D058ADED99502A70D687FDA (Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Suckable>::get_Count()
inline int32_t List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_inline (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Suckable>::get_Item(System.Int32)
inline Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* List_1_get_Item_m823B09C2C6516AA31D01B2B8B817546D13BF2AC2 (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* (*) (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Suckable>::Remove(T)
inline bool List_1_Remove_m4008E5FF5766D37F39021D56776D933703C05E06 (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* __this, Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6*, Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxRadiansDelta2, float ___maxMagnitudeDelta3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SuckableAnimal::RelaseRandomTrash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_RelaseRandomTrash_m0CA41EABC550546A7DDC89F2252CAE1D3B8F012B (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Suckable>::Add(T)
inline void List_1_Add_m4F738339515FA493A5F91F3E9806528570FA2771_inline (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* __this, Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6*, Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void SuckableAnimal::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_OnDeath_mA87155595ECE4E9298D52B4E3EB21E164CFED485 (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) ;
// System.Void Suckable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable__ctor_mF233F4A12E9F47A487E4540F400B4DB4A93F71DE (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<SuckingMachineController>()
inline SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* Component_GetComponentInParent_TisSuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044_m03A45648C4EB1400C5844C26E00D12C18CFE1C64 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void SuckingMachineCollectionController::UpdateDisplay(Suckable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineCollectionController_UpdateDisplay_mAB6603EE65FC88958BF96941804DD5CFAEC40643 (SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46* __this, Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* ___item0, const RuntimeMethod* method) ;
// System.Void SuckingMachineController::ChangeTrashItemAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_ChangeTrashItemAmount_m5FF8F781BFB72D02502A54565676E49B97349058 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, float ___amount0, const RuntimeMethod* method) ;
// System.Void SuckingMachineController::CalculateBarMult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_CalculateBarMult_m10F935845A2992731C97F145860A3231F9F04CCC (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) ;
// System.Void SuckingMachineController::UpdateRadiatorMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_UpdateRadiatorMaterial_m9C6EB476FEA0312E83263B9C9EE54A4F71CD8F3D (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void SuckingMachineController::ChangeGunMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_ChangeGunMode_mD86A54EC37E7CAA55FF142D401C54400F7B32A88 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, bool ___shooting0, const RuntimeMethod* method) ;
// System.Void SuckingMachineController::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_Shoot_m2B89AE7E9056D567BDFC6B829E8311907C963761 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) ;
// System.Void SuckingMachineController::UpdateBars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_UpdateBars_mA0FB7D64952D63B007940ED1AFC703245F4BD09E (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void SuckingMachineController::Sucking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_Sucking_m7C858319D15D2DB8213F153780110C138C395D8C (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) ;
// System.Void SuckingMachineController::CooldownMechanics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_CooldownMechanics_mCB4DF86803FF5A264CFF8EFE4FA5F406BAD3F2FE (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) ;
// System.Void SuckingMachineController::ArrowChanging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_ArrowChanging_m8DB26AFACC9AF1407BC4C46716BDB1D5331584BB (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] ConeCast::ConeCastAll(UnityEngine.Physics,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ConeCast_ConeCastAll_mB8B6EF562C96E08ACB9F20FCE152511A1D7FCB7B (Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56* ___physics0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin1, float ___maxRadius2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction3, float ___maxDistance4, float ___coneAngle5, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void Suckable::Suck(UnityEngine.Vector3,System.Single,SuckingMachineController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Suck_mD553A7856DEE7C905925426F11DA0AEDBF7C9001 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____origin0, float ____suckPower1, SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* ____suckMachine2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SuckableAnimal>()
inline SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* GameObject_GetComponent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_m50B072FDA6ED8ECA971F4D35E0996EA2D2B512B5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SuckableAnimal::SuckedAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_SuckedAnimal_mF5885A507DF61980DED2E35CEA4861FA08C33B44 (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// TSource System.Linq.Enumerable::Last<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared)(___source0, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
inline bool List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void TrashChute::EjectItem(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChute_EjectItem_m08653AE78F5A493773EF6475490B10A9D35797BB (TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method) ;
// System.Void TrashGenerator::BakeWaveValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_BakeWaveValues_m6A154874705B82CC42194E53C22D4DB14884D5AB (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<WaveSettings>::GetEnumerator()
inline Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664 List_1_GetEnumerator_mD412BBF12BE17D0825D883DA192F5A61B72D5C1B (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664 (*) (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD*, const RuntimeMethod*))List_1_GetEnumerator_mD412BBF12BE17D0825D883DA192F5A61B72D5C1B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<WaveSettings>::Dispose()
inline void Enumerator_Dispose_m4BA2EB796E9F9D3BE28F0A6CFE9240FF8D1FED44 (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664*, const RuntimeMethod*))Enumerator_Dispose_m4BA2EB796E9F9D3BE28F0A6CFE9240FF8D1FED44_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<WaveSettings>::get_Current()
inline WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE Enumerator_get_Current_mE2E801611054E5282D7EDB03F8D97409346B2D64_inline (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664* __this, const RuntimeMethod* method)
{
	return ((  WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE (*) (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664*, const RuntimeMethod*))Enumerator_get_Current_mE2E801611054E5282D7EDB03F8D97409346B2D64_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<WaveSettings>::MoveNext()
inline bool Enumerator_MoveNext_m81DB14AA57C09427AA6DC34D462C6DE1BE4CB59C (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664*, const RuntimeMethod*))Enumerator_MoveNext_m81DB14AA57C09427AA6DC34D462C6DE1BE4CB59C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
inline void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<WaveSettings>::get_Count()
inline int32_t List_1_get_Count_mCD5400ADE86636B75D19AA37097E8992E3FA1784_inline (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD*, const RuntimeMethod*))List_1_get_Count_mCD5400ADE86636B75D19AA37097E8992E3FA1784_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TrashGenerator::CalculateSpread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TrashGenerator_CalculateSpread_m0C4DB34964AEDAFE7A8D6CE6A7D4584AECE3B12F (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, float ____spreadValue0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void TrashGenerator::WaveCalculations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_WaveCalculations_mD871EC404E13229ECDB3BACFD3AACC9AD9EDFBA3 (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) ;
// System.Void TrashGenerator::KeepSpawnRateConsistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_KeepSpawnRateConsistent_mACC6DC408451FAAD5FEDA24F80F53E4830EA5847 (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) ;
// System.Void TrashGenerator::SpawnItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_SpawnItem_m01F329A16D1A376794888B96BA5ACF21BB140ECA (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<WaveSettings>::.ctor()
inline void List_1__ctor_m4FA50681BE20A724488448F92D5B86CEEA18F04B (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD*, const RuntimeMethod*))List_1__ctor_m4FA50681BE20A724488448F92D5B86CEEA18F04B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void WaveSettings::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSettings__ctor_mA589520FF4E6143CDEAA234573DD571D130F3E0A (WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE* __this, float ___pTime0, float ___pDuration1, float ___pIntensity2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
// System.Void AttachTrashController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachTrashController_Start_mA09A253DC47D1F61F8AC4BB69A0BB56CA491624B (AttachTrashController_t2352CCEA3AC3053D96D2492497EE15B9A40DEF0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_mFEF5CE134EC3E40E465FF567B3134C2D1677CAFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animalController = this.GetComponentInParent<SuckableAnimal>();
		SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* L_0;
		L_0 = Component_GetComponentInParent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_mFEF5CE134EC3E40E465FF567B3134C2D1677CAFB(__this, Component_GetComponentInParent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_mFEF5CE134EC3E40E465FF567B3134C2D1677CAFB_RuntimeMethod_var);
		__this->___animalController_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animalController_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AttachTrashController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachTrashController_OnTriggerEnter_m09E3BE2C334D152DB62283A79A9334FDF6F7661C (AttachTrashController_t2352CCEA3AC3053D96D2492497EE15B9A40DEF0D* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930);
		s_Il2CppMethodInitialized = true;
	}
	Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* V_0 = NULL;
	{
		// if (other.tag == "Suckable")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Suckable suckable = other.GetComponent<Suckable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_4;
		L_4 = Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80(L_3, Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80_RuntimeMethod_var);
		V_0 = L_4;
		// if(!suckable.wasAttached) animalController.AttachTrash(suckable);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->___wasAttached_17;
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		// if(!suckable.wasAttached) animalController.AttachTrash(suckable);
		SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* L_7 = __this->___animalController_4;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_8 = V_0;
		NullCheck(L_7);
		SuckableAnimal_AttachTrash_m0C00AAE7C8FA8DEFE0663DD3420C1F0703EDE581(L_7, L_8, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void AttachTrashController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttachTrashController__ctor_mE63D3800688C02F967F36B6290EE2E247F1C5F58 (AttachTrashController_t2352CCEA3AC3053D96D2492497EE15B9A40DEF0D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FanController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController_Start_m9894AB2B4787A70D2F94409ADA73C16313E461FB (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FanController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController_Update_mCD455958C6124834ABCAE139AEE39D40FB8F2D8E (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) 
{
	{
		// if (suckMachine.shooting) recoil = 1;
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_0 = __this->___suckMachine_4;
		NullCheck(L_0);
		bool L_1 = L_0->___shooting_39;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (suckMachine.shooting) recoil = 1;
		__this->___recoil_13 = (1.0f);
		return;
	}

IL_0019:
	{
		// else recoil = 0;
		__this->___recoil_13 = (0.0f);
		// }
		return;
	}
}
// System.Void FanController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController_FixedUpdate_mEBDD4E952869E444AB949EFA19ED25032A183927 (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) 
{
	{
		// BladeRotation();
		FanController_BladeRotation_m75E4FCFF95D2BA9AF7A03FBA614DC450717AB206(__this, NULL);
		// if (machineModeChanging) MachineMode();
		bool L_0 = __this->___machineModeChanging_8;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (machineModeChanging) MachineMode();
		FanController_MachineMode_m1C7DFEF062D01B3852758358A281A9B7C235ED4E(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void FanController::BladeRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController_BladeRotation_m75E4FCFF95D2BA9AF7A03FBA614DC450717AB206 (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* G_B3_2 = NULL;
	{
		// fanRotation = fanRotation * 0.97f + (suckMachine.sucking?fanSpeed:0) * 0.03f;
		float L_0 = __this->___fanRotation_7;
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_1 = __this->___suckMachine_4;
		NullCheck(L_1);
		bool L_2 = L_1->___sucking_40;
		G_B1_0 = ((float)il2cpp_codegen_multiply(L_0, (0.970000029f)));
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = ((float)il2cpp_codegen_multiply(L_0, (0.970000029f)));
			G_B2_1 = __this;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0027;
	}

IL_0021:
	{
		float L_3 = __this->___fanSpeed_6;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0027:
	{
		NullCheck(G_B3_2);
		G_B3_2->___fanRotation_7 = ((float)il2cpp_codegen_add(G_B3_1, ((float)il2cpp_codegen_multiply(G_B3_0, (0.0299999993f)))));
		// this.gameObject.transform.Rotate(new Vector3(fanRotation, 0, 0), Space.Self);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		float L_6 = __this->___fanRotation_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), L_6, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_5, L_7, 1, NULL);
		// }
		return;
	}
}
// System.Void FanController::MachineMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController_MachineMode_m1C7DFEF062D01B3852758358A281A9B7C235ED4E (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (machineModeSucking)
		bool L_0 = __this->___machineModeSucking_9;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		// foldingRotation = foldingSpeed;
		float L_1 = __this->___foldingSpeed_11;
		__this->___foldingRotation_12 = L_1;
		// modeValue += foldingRotation;
		float L_2 = __this->___modeValue_10;
		float L_3 = __this->___foldingRotation_12;
		__this->___modeValue_10 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if(modeValue > 65)machineModeChanging = false;
		float L_4 = __this->___modeValue_10;
		if ((!(((float)L_4) > ((float)(65.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		// if(modeValue > 65)machineModeChanging = false;
		__this->___machineModeChanging_8 = (bool)0;
		goto IL_0071;
	}

IL_003d:
	{
		// foldingRotation = -foldingSpeed;
		float L_5 = __this->___foldingSpeed_11;
		__this->___foldingRotation_12 = ((-L_5));
		// modeValue += foldingRotation;
		float L_6 = __this->___modeValue_10;
		float L_7 = __this->___foldingRotation_12;
		__this->___modeValue_10 = ((float)il2cpp_codegen_add(L_6, L_7));
		// if (modeValue < 0) machineModeChanging = false;
		float L_8 = __this->___modeValue_10;
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		// if (modeValue < 0) machineModeChanging = false;
		__this->___machineModeChanging_8 = (bool)0;
	}

IL_0071:
	{
		// foreach (GameObject blade in blades)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___blades_5;
		NullCheck(L_9);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_10;
		L_10 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_9, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ac:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a1_1;
			}

IL_007f_1:
			{
				// foreach (GameObject blade in blades)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// blade.transform.Rotate(0, 0, foldingRotation, Space.Self);
				NullCheck(L_11);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
				L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
				float L_13 = __this->___foldingRotation_12;
				NullCheck(L_12);
				Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_12, (0.0f), (0.0f), L_13, 1, NULL);
			}

IL_00a1_1:
			{
				// foreach (GameObject blade in blades)
				bool L_14;
				L_14 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_007f_1;
				}
			}
			{
				goto IL_00ba;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void FanController::Shooting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController_Shooting_m4B3012357CB4ADD9CD7C816B7CAFDD2A5F4E5761 (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// recoilValue = recoilValue * 0.8f + recoil * 0.2f;
		float L_0 = __this->___recoilValue_14;
		float L_1 = __this->___recoil_13;
		__this->___recoilValue_14 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, (0.800000012f))), ((float)il2cpp_codegen_multiply(L_1, (0.200000003f)))));
		// foreach (GameObject blade in blades)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___blades_5;
		NullCheck(L_2);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_3;
		L_3 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_2, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004f_1;
			}

IL_002d_1:
			{
				// foreach (GameObject blade in blades)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
				L_4 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// blade.transform.Rotate(0, 0, recoilValue, Space.Self);
				NullCheck(L_4);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
				float L_6 = __this->___recoilValue_14;
				NullCheck(L_5);
				Transform_Rotate_mE12DB27208410BB7090FA117D53DBEBBC0A36B30(L_5, (0.0f), (0.0f), L_6, 1, NULL);
			}

IL_004f_1:
			{
				// foreach (GameObject blade in blades)
				bool L_7;
				L_7 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void FanController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanController__ctor_mFCB419E7C1A6AB556DC0593A6DEA8A19150FAB8C (FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GameObject> blades = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___blades_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blades_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99FEF1A02DD3126FA20D1DE54B52067995B34379);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null) Debug.LogError("There is no GameManager");
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_instance == null) Debug.LogError("There is no GameManager");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral99FEF1A02DD3126FA20D1DE54B52067995B34379, NULL);
	}

IL_0017:
	{
		// return _instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4;
		return L_2;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// Application.runInBackground = true;
		Application_set_runInBackground_m4CD0DF59011994C4DB76D7A2FE7A02BC07B4AF67((bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// isPaused = false;
		__this->___isPaused_21 = (bool)0;
		// helmetController = HelmetController.Instance;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_0;
		L_0 = HelmetController_get_Instance_m1EE9739508E9EAD3FFF83C30D055DF65C5418510(NULL);
		__this->___helmetController_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___helmetController_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDDDE5696826C7F74925D950F06671083FD179431_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6063F82E937E2089973A417C938B9201A95FEF9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (menuButton.action.ReadValue<bool>())
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___menuButton_20);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InputAction_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDDDE5696826C7F74925D950F06671083FD179431(L_1, InputAction_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDDDE5696826C7F74925D950F06671083FD179431_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// isPaused = true;
		__this->___isPaused_21 = (bool)1;
		// Debug.Log($"Game paused");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB6063F82E937E2089973A417C938B9201A95FEF9, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void GameManager::CalculateBarMult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CalculateBarMult_m5A2E53B17A91583D3C470D182358AC705D67FFD1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// cleannessBarMult = 1 / cleannessLevel;
		float L_0 = __this->___cleannessLevel_12;
		__this->___cleannessBarMult_17 = ((float)((1.0f)/L_0));
		// }
		return;
	}
}
// System.Void GameManager::UpdateBars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateBars_m06A7502C891EFE5FA868F9510871F55B6A72685B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float cleanBarX = cleannessLevel * cleannessBarMult;
		float L_0 = __this->___cleannessLevel_12;
		float L_1 = __this->___cleannessBarMult_17;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// cleannessBar.transform.localScale = new Vector3(cleanBarX, cleannessBar.transform.localScale.y, cleannessBar.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___cleannessBar_16;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		float L_4 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___cleannessBar_16;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		float L_8 = L_7.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___cleannessBar_16;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_4, L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_13, NULL);
		// }
		return;
	}
}
// System.Void GameManager::AddTrashPoints(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddTrashPoints_m70B80061C0CC961BFF87EB760342CDA0FB212ABB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ____trashPoints0, float ____streakTime1, const RuntimeMethod* method) 
{
	{
		// currentTrashpoints += _trashPoints;
		float L_0 = __this->___currentTrashpoints_15;
		float L_1 = ____trashPoints0;
		__this->___currentTrashpoints_15 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (onStreak) combos++;
		bool L_2 = __this->___onStreak_9;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// if (onStreak) combos++;
		float L_3 = __this->___combos_6;
		__this->___combos_6 = ((float)il2cpp_codegen_add(L_3, (1.0f)));
		goto IL_0035;
	}

IL_002a:
	{
		// else combos = 0;
		__this->___combos_6 = (0.0f);
	}

IL_0035:
	{
		// onStreak = true;
		__this->___onStreak_9 = (bool)1;
		// if (0 >= streakTimer) StartCoroutine(StartStreakTimer());
		float L_4 = __this->___streakTimer_10;
		if ((!(((float)(0.0f)) >= ((float)L_4))))
		{
			goto IL_0058;
		}
	}
	{
		// if (0 >= streakTimer) StartCoroutine(StartStreakTimer());
		RuntimeObject* L_5;
		L_5 = GameManager_StartStreakTimer_mD036BC97D7997BDAC8309E0317429D7D245D2739(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		goto IL_0066;
	}

IL_0058:
	{
		// else streakTimer += _streakTime;
		float L_7 = __this->___streakTimer_10;
		float L_8 = ____streakTime1;
		__this->___streakTimer_10 = ((float)il2cpp_codegen_add(L_7, L_8));
	}

IL_0066:
	{
		// helmetController.UpdateScoreBar(currentTrashpoints);
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_9 = __this->___helmetController_11;
		float L_10 = __this->___currentTrashpoints_15;
		NullCheck(L_9);
		HelmetController_UpdateScoreBar_m93E737F5535C7CFE976D4210F8ACF8F8E977DA10(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::StartStreakTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartStreakTimer_mD036BC97D7997BDAC8309E0317429D7D245D2739 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* L_0 = (U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC*)il2cpp_codegen_object_new(U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartStreakTimerU3Ed__26__ctor_m305B446F5E4787585CF05A206DCBA6080CB44F99(L_0, 0, NULL);
		U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// scoreController.UpdateScreen();
		ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* L_0 = __this->___scoreController_19;
		NullCheck(L_0);
		ScoreController_UpdateScreen_mFD3DB040F527585BC97D6B81753339782F7786F5(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartGame_m2CAC97E2C33DD5FF5CF10FAF17313080A85464B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// helmetController.SetUpHelmet();
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_0 = __this->___helmetController_11;
		NullCheck(L_0);
		HelmetController_SetUpHelmet_mDAFEEAA33DF38EBB0EDEC0E8FFD2A17FD4405D93(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public float perComboValue = 0.25f;
		__this->___perComboValue_7 = (0.25f);
		// public float objective = 10;
		__this->___objective_8 = (10.0f);
		// public bool onStreak = true;
		__this->___onStreak_9 = (bool)1;
		// public float cleannessLevel = 100;
		__this->___cleannessLevel_12 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<StartStreakTimer>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStreakTimerU3Ed__26__ctor_m305B446F5E4787585CF05A206DCBA6080CB44F99 (U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<StartStreakTimer>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStreakTimerU3Ed__26_System_IDisposable_Dispose_m13D509C2E9F1554FA112580327F7163ED916F59C (U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<StartStreakTimer>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartStreakTimerU3Ed__26_MoveNext_m837C70C0DADD303AE1F0F292E82AF54A7210683E (U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0981220016E9159BC3D2336A31A5CA7C790FD610);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CFED77C2D321772CF6B9FD841F62425002AD9A9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0078;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Streak Timer Started" + onStreak);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		NullCheck(L_4);
		bool* L_5 = (&L_4->___onStreak_9);
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8CFED77C2D321772CF6B9FD841F62425002AD9A9, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// streakTimer = 1.5f;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_8 = V_1;
		NullCheck(L_8);
		L_8->___streakTimer_10 = (1.5f);
		goto IL_007f;
	}

IL_0045:
	{
		// streakTimer -= 0.1f;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = V_1;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->___streakTimer_10;
		NullCheck(L_9);
		L_9->___streakTimer_10 = ((float)il2cpp_codegen_subtract(L_11, (0.100000001f)));
		// if (!onStreak) break;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = V_1;
		NullCheck(L_12);
		bool L_13 = L_12->___onStreak_9;
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_14 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_14, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0078:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007f:
	{
		// while (streakTimer > 0 )
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___streakTimer_10;
		if ((((float)L_16) > ((float)(0.0f))))
		{
			goto IL_0045;
		}
	}

IL_008c:
	{
		// Debug.Log("Streak ended");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0981220016E9159BC3D2336A31A5CA7C790FD610, NULL);
		// onStreak = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17 = V_1;
		NullCheck(L_17);
		L_17->___onStreak_9 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<StartStreakTimer>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartStreakTimerU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE40617A37C677B2F3992B7F9D886AAFFF5770E2E (U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<StartStreakTimer>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartStreakTimerU3Ed__26_System_Collections_IEnumerator_Reset_m1DE1C9982492795D3F42BC364D6449316DF2BA41 (U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartStreakTimerU3Ed__26_System_Collections_IEnumerator_Reset_m1DE1C9982492795D3F42BC364D6449316DF2BA41_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<StartStreakTimer>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartStreakTimerU3Ed__26_System_Collections_IEnumerator_get_Current_mE551F9678BD8F4EE6E81A5F02084DBA544ED5A8F (U3CStartStreakTimerU3Ed__26_tF892B714770E0687F894A97001FAE86DB7ADE1BC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// HelmetController HelmetController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* HelmetController_get_Instance_m1EE9739508E9EAD3FFF83C30D055DF65C5418510 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0789A6B1BB45E3084F65C8FF8F27F7B3DBF67DB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null) Debug.LogError("There is no HelmetController");
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_0 = ((HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_StaticFields*)il2cpp_codegen_static_fields_for(HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_il2cpp_TypeInfo_var))->____instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_instance == null) Debug.LogError("There is no HelmetController");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0789A6B1BB45E3084F65C8FF8F27F7B3DBF67DB4, NULL);
	}

IL_0017:
	{
		// return _instance;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_2 = ((HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_StaticFields*)il2cpp_codegen_static_fields_for(HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_il2cpp_TypeInfo_var))->____instance_6;
		return L_2;
	}
}
// System.Void HelmetController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelmetController_Awake_mA5447E500F91E65D6A3155B8DCEBB4DE9F7B2201 (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_StaticFields*)il2cpp_codegen_static_fields_for(HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_il2cpp_TypeInfo_var))->____instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_StaticFields*)il2cpp_codegen_static_fields_for(HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35_il2cpp_TypeInfo_var))->____instance_6), (void*)__this);
		// }
		return;
	}
}
// System.Void HelmetController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelmetController_Start_m548F3D9488688B48163ACC366FACDA43F9488CCF (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, const RuntimeMethod* method) 
{
	{
		// gameManager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		__this->___gameManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_5), (void*)L_0);
		// defaultPosition = UICamera.transform.localPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___UICamera_11;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->___defaultPosition_4 = L_3;
		// }
		return;
	}
}
// System.Void HelmetController::SetUpHelmet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelmetController_SetUpHelmet_mDAFEEAA33DF38EBB0EDEC0E8FFD2A17FD4405D93 (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2980DF1E93883B92A79582EB299BA76B8EA1C808);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objective = gameManager.objective;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___gameManager_5;
		NullCheck(L_0);
		float L_1 = L_0->___objective_8;
		__this->___objective_9 = L_1;
		// slider.maxValue = objective;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___slider_8;
		float L_3 = __this->___objective_9;
		NullCheck(L_2);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_2, L_3, NULL);
		// slider.value = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_8;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, (0.0f));
		// objText.text = $"{currentTrashpoints} / {objective} lbs";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___objText_13;
		float L_6 = __this->___currentTrashpoints_10;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		float L_9 = __this->___objective_9;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2980DF1E93883B92A79582EB299BA76B8EA1C808, L_8, L_11, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_12);
		// StartCoroutine(StartGameTimer(gameManager.timerInSeconds));
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = __this->___gameManager_5;
		NullCheck(L_13);
		float L_14 = L_13->___timerInSeconds_5;
		RuntimeObject* L_15;
		L_15 = HelmetController_StartGameTimer_m4CAC9C8E083320AD58BEE213C88F23EF6651A98A(__this, L_14, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16;
		L_16 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void HelmetController::UpdateScoreBar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelmetController_UpdateScoreBar_m93E737F5535C7CFE976D4210F8ACF8F8E977DA10 (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, float ____currentTrashpoints0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2980DF1E93883B92A79582EB299BA76B8EA1C808);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTrashpoints = _currentTrashpoints;
		float L_0 = ____currentTrashpoints0;
		__this->___currentTrashpoints_10 = L_0;
		// slider.value = currentTrashpoints;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___slider_8;
		float L_2 = __this->___currentTrashpoints_10;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_2);
		// objText.text = $"{currentTrashpoints} / {objective} lbs";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___objText_13;
		float L_4 = __this->___currentTrashpoints_10;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = __this->___objective_9;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2980DF1E93883B92A79582EB299BA76B8EA1C808, L_6, L_9, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_10);
		// }
		return;
	}
}
// System.Collections.IEnumerator HelmetController::StartGameTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HelmetController_StartGameTimer_m4CAC9C8E083320AD58BEE213C88F23EF6651A98A (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, float ____timer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* L_0 = (U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D*)il2cpp_codegen_object_new(U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartGameTimerU3Ed__17__ctor_mF27DBE0745D8034C74FB0F56FCD7159381640FDB(L_0, 0, NULL);
		U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* L_2 = L_1;
		float L_3 = ____timer0;
		NullCheck(L_2);
		L_2->____timer_3 = L_3;
		return L_2;
	}
}
// System.Void HelmetController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HelmetController__ctor_m2C5B9E45F6E63AEF1923746C2D092B5E49A29975 (HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HelmetController/<StartGameTimer>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameTimerU3Ed__17__ctor_mF27DBE0745D8034C74FB0F56FCD7159381640FDB (U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HelmetController/<StartGameTimer>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameTimerU3Ed__17_System_IDisposable_Dispose_mEA71CC1F3BCFCFCFD350FEE8D8AF567CE0401916 (U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HelmetController/<StartGameTimer>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGameTimerU3Ed__17_MoveNext_mEC9693F9DD6B1B4F47EF8719151AF34F75B1D78A (U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46447F1314EA2A8C390D8F2A005B6AFAB1AB5461);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55D00F4E44FDA275E39511BD5B2515D1A66D151E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_008e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// timer = _timer;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_4 = V_1;
		float L_5 = __this->____timer_3;
		NullCheck(L_4);
		L_4->___timer_14 = L_5;
		goto IL_0095;
	}

IL_002c:
	{
		// timer--;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_6 = V_1;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___timer_14;
		NullCheck(L_6);
		L_6->___timer_14 = ((float)il2cpp_codegen_subtract(L_8, (1.0f)));
		// int minutes = (int)timer / 60;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___timer_14;
		V_2 = ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_10)/((int32_t)60)));
		// int second = (int)timer % 60;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___timer_14;
		V_3 = ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_12)%((int32_t)60)));
		// timerText.text = $"{minutes}:{second}";//TODO: Format to MM:SS
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_13 = V_1;
		NullCheck(L_13);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = L_13->___timerText_7;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAD6CD2C36915DEB6A18BCF0F46B294FC1D97072F, L_17, L_20, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_21);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_22 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_22, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008e:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0095:
	{
		// while (timer > 0)
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->___timer_14;
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_002c;
		}
	}
	{
		// Debug.Log("The Game Timer has finished");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral46447F1314EA2A8C390D8F2A005B6AFAB1AB5461, NULL);
		// timerText.text = $"Game Ended";
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_25 = V_1;
		NullCheck(L_25);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = L_25->___timerText_7;
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, _stringLiteral55D00F4E44FDA275E39511BD5B2515D1A66D151E);
		// gameManager.EndGame();
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_27 = V_1;
		NullCheck(L_27);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_28 = L_27->___gameManager_5;
		NullCheck(L_28);
		GameManager_EndGame_m280CB4AB8F3243752E42BBAE128D1ABC092E6D62(L_28, NULL);
		// }
		return (bool)0;
	}
}
// System.Object HelmetController/<StartGameTimer>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameTimerU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB086BDF66A512C9C1242D7FFDB91B5C3CC474F52 (U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HelmetController/<StartGameTimer>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameTimerU3Ed__17_System_Collections_IEnumerator_Reset_m5C4C2AE4BE83E3C78F2DB8A7E872DD53B9EF6C9B (U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGameTimerU3Ed__17_System_Collections_IEnumerator_Reset_m5C4C2AE4BE83E3C78F2DB8A7E872DD53B9EF6C9B_RuntimeMethod_var)));
	}
}
// System.Object HelmetController/<StartGameTimer>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameTimerU3Ed__17_System_Collections_IEnumerator_get_Current_m5408865537C19180D9D383F3093B79B3B3552E91 (U3CStartGameTimerU3Ed__17_t5651358AFF53F2FC5A08B87A8991B43E15CA358D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void HookController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookController_Start_mEEF3B5805E25FC4DFD65631964A4A977C346DCFB (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HookController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookController_OnTriggerEnter_m3A1EDBDDA0D75F675CA2F9598CCEE2B6E3B3EA25 (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95BBE583587BFB3CA7025B9D3AA1DBD7C0F48C11);
		s_Il2CppMethodInitialized = true;
	}
	Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* V_0 = NULL;
	{
		// if (!IsAttached() && isShooting)
		bool L_0;
		L_0 = HookController_IsAttached_m760A9C1886636EBC0A5D826FBBBBC58A8D2DEAB5(__this, NULL);
		if (L_0)
		{
			goto IL_0073;
		}
	}
	{
		bool L_1 = __this->___isShooting_7;
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// if (other.tag == "Suckable" || other.tag == "SuckableAnimal")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930, NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral95BBE583587BFB3CA7025B9D3AA1DBD7C0F48C11, NULL);
		if (!L_7)
		{
			goto IL_0073;
		}
	}

IL_0034:
	{
		// Suckable suckController = other.GetComponent<Suckable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = ___other0;
		NullCheck(L_8);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_9;
		L_9 = Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80(L_8, Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80_RuntimeMethod_var);
		V_0 = L_9;
		// if (suckController.canBeHooked)
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = L_10->___canBeHooked_16;
		if (!L_11)
		{
			goto IL_0073;
		}
	}
	{
		// suckController.isHooked = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_12 = V_0;
		NullCheck(L_12);
		L_12->___isHooked_18 = (bool)1;
		// attachedObj = other.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_13 = ___other0;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		__this->___attachedObj_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attachedObj_8), (void*)L_14);
		// this.transform.parent = attachedObj.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___attachedObj_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_15);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_15, L_17, NULL);
		// isShooting = false;
		__this->___isShooting_7 = (bool)0;
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void HookController::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookController_Retrieve_mEAB382DAAC16AE0E159ED71E11CFAF4ADEF187F4 (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) 
{
	{
		// if (!moveParent || !IsAttached()) this.transform.position = Vector3.MoveTowards(transform.position, grapplingHookObj.transform.position, pullBackSpeed);
		bool L_0 = __this->___moveParent_10;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = HookController_IsAttached_m760A9C1886636EBC0A5D826FBBBBC58A8D2DEAB5(__this, NULL);
		if (L_1)
		{
			goto IL_0042;
		}
	}

IL_0010:
	{
		// if (!moveParent || !IsAttached()) this.transform.position = Vector3.MoveTowards(transform.position, grapplingHookObj.transform.position, pullBackSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___grapplingHookObj_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = __this->___pullBackSpeed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_4, L_7, L_8, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_9, NULL);
		return;
	}

IL_0042:
	{
		// else attachedObj.transform.position = Vector3.MoveTowards(attachedObj.transform.position, grapplingHookObj.transform.position, pullBackSpeed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___attachedObj_8;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___attachedObj_8;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___grapplingHookObj_5;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = __this->___pullBackSpeed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_14, L_17, L_18, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_19, NULL);
		// }
		return;
	}
}
// System.Void HookController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookController_Move_m571724CC65421DF108A7C201936BF69499768C93 (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 fwd = transform.TransformDirection(Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_0, L_1, NULL);
		V_0 = L_2;
		// transform.position += (fwd * hookPower);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = __this->___hookPower_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_8, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_9, NULL);
		// }
		return;
	}
}
// System.Void HookController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookController_FixedUpdate_m699F292D5AAE7403D922D66CA2F24554F759EB5C (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) 
{
	{
		// if (isRetrieving) Retrieve();
		bool L_0 = __this->___isRetrieving_6;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (isRetrieving) Retrieve();
		HookController_Retrieve_mEAB382DAAC16AE0E159ED71E11CFAF4ADEF187F4(__this, NULL);
		return;
	}

IL_000f:
	{
		// else if (isShooting) Move();
		bool L_1 = __this->___isShooting_7;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// else if (isShooting) Move();
		HookController_Move_m571724CC65421DF108A7C201936BF69499768C93(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Boolean HookController::IsAttached()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HookController_IsAttached_m760A9C1886636EBC0A5D826FBBBBC58A8D2DEAB5 (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (attachedObj != null) return true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attachedObj_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (attachedObj != null) return true;
		return (bool)1;
	}

IL_0010:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void HookController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookController__ctor_m5929B2FCD386423ECBC773E2D6838A11688EFAA9 (HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* __this, const RuntimeMethod* method) 
{
	{
		// bool moveParent = true;
		__this->___moveParent_10 = (bool)1;
		// public float pullBackSpeed = 0.4f;
		__this->___pullBackSpeed_12 = (0.400000006f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HookGunController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookGunController_Start_m00017A23E73654A49408777A1FAB6C1277485FA5 (HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C_m740386D66DAA47C6AF5EC0701B11043494F473A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// grapplingHookScript = gameObject.GetComponent<GrapplingHookShoot>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* L_1;
		L_1 = GameObject_GetComponent_TisGrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C_m740386D66DAA47C6AF5EC0701B11043494F473A0(L_0, GameObject_GetComponent_TisGrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C_m740386D66DAA47C6AF5EC0701B11043494F473A0_RuntimeMethod_var);
		__this->___grapplingHookScript_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___grapplingHookScript_10), (void*)L_1);
		// }
		return;
	}
}
// System.Void HookGunController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookGunController_Update_mB464EBFC8E79BBBAFE2CFE8136FA2F0C4DB7F9D4 (HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1F6DF584888EF8649BBAE998341A7C4BD4ED5DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6FC92C06BD2D2840AA37CD0D19BE0CE6947EC1A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// hookGunAcceleration = CalculateDirection();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = HookGunController_CalculateDirection_m93249784EA8C76FFA1D1E877C34D765BC6D12946(__this, NULL);
		__this->___hookGunAcceleration_11 = L_0;
		// if (hookGunAcceleration.magnitude > 0.1f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___hookGunAcceleration_11);
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_1, NULL);
		if ((!(((float)L_2) > ((float)(0.100000001f)))))
		{
			goto IL_004d;
		}
	}
	{
		// pulling = true;
		__this->___pulling_14 = (bool)1;
		// pullFactor = PullFactor();
		float L_3;
		L_3 = HookGunController_PullFactor_mB12D5261A815F1C3FE9B7CA6D3D4883080EEFD90(__this, NULL);
		__this->___pullFactor_12 = L_3;
		// if (pullFactor > maxPullFactor) maxPullFactor = pullFactor;
		float L_4 = __this->___pullFactor_12;
		float L_5 = __this->___maxPullFactor_13;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0063;
		}
	}
	{
		// if (pullFactor > maxPullFactor) maxPullFactor = pullFactor;
		float L_6 = __this->___pullFactor_12;
		__this->___maxPullFactor_13 = L_6;
		goto IL_0063;
	}

IL_004d:
	{
		// pullFactor = 0;
		__this->___pullFactor_12 = (0.0f);
		// maxPullFactor = 0;
		__this->___maxPullFactor_13 = (0.0f);
	}

IL_0063:
	{
		// if ((grapplingHookScript.hookController.IsAttached() || grapplingHookScript.hookController.isShooting) && maxPullFactor != 0)
		GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* L_7 = __this->___grapplingHookScript_10;
		NullCheck(L_7);
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_8 = L_7->___hookController_7;
		NullCheck(L_8);
		bool L_9;
		L_9 = HookController_IsAttached_m760A9C1886636EBC0A5D826FBBBBC58A8D2DEAB5(L_8, NULL);
		if (L_9)
		{
			goto IL_0087;
		}
	}
	{
		GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* L_10 = __this->___grapplingHookScript_10;
		NullCheck(L_10);
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_11 = L_10->___hookController_7;
		NullCheck(L_11);
		bool L_12 = L_11->___isShooting_7;
		if (!L_12)
		{
			goto IL_00ee;
		}
	}

IL_0087:
	{
		float L_13 = __this->___maxPullFactor_13;
		if ((((float)L_13) == ((float)(0.0f))))
		{
			goto IL_00ee;
		}
	}
	{
		// Debug.Log("Puleed and max factor was : " + maxPullFactor);
		float* L_14 = (&__this->___maxPullFactor_13);
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE6FC92C06BD2D2840AA37CD0D19BE0CE6947EC1A, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
		// Debug.Log("Pull back speed : " + (1 - (1 / (maxPullFactor/10))));
		float L_17 = __this->___maxPullFactor_13;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), ((float)((1.0f)/((float)(L_17/(10.0f)))))));
		String_t* L_18;
		L_18 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD1F6DF584888EF8649BBAE998341A7C4BD4ED5DD, L_18, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// grapplingHookScript.Pull(maxPullFactor);
		GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* L_20 = __this->___grapplingHookScript_10;
		float L_21 = __this->___maxPullFactor_13;
		NullCheck(L_20);
		GrapplingHookShoot_Pull_m9C8A5F370C4CF4670D8426865C0948A7FB29AF21(L_20, L_21, NULL);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void HookGunController::DrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookGunController_DrawGizmos_m04594A5FF737776074A89895C2799B3132AAAB61 (HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3* __this, const RuntimeMethod* method) 
{
	{
		// startGizmos.transform.position = hookGun.transform.position + Vector3.up * 0.2f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___startGizmos_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___hookGun_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, (0.200000003f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// endGizmos.transform.position = startGizmos.transform.position + hookGunAcceleration;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___endGizmos_6;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___startGizmos_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___hookGunAcceleration_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_14, NULL);
		// shaftGizmos.transform.LookAt(endGizmos.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___shaftGizmos_7;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___endGizmos_6;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		NullCheck(L_16);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_16, L_19, NULL);
		// shaftGizmos.transform.localScale = new Vector3(0.2f, 0.2f, hookGunAcceleration.magnitude*100);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___shaftGizmos_7;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___hookGunAcceleration_11);
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.200000003f), (0.200000003f), ((float)il2cpp_codegen_multiply(L_23, (100.0f))), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_24, NULL);
		// pullFactorText.text = maxPullFactor.ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_25 = __this->___pullFactorText_9;
		float* L_26 = (&__this->___maxPullFactor_13);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, L_27);
		// }
		return;
	}
}
// UnityEngine.Vector3 HookGunController::CalculateDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HookGunController_CalculateDirection_m93249784EA8C76FFA1D1E877C34D765BC6D12946 (HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// if (positions.Count < 4)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___positions_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)4)))
		{
			goto IL_002f;
		}
	}
	{
		// positions.Add(this.gameObject.transform.position);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = __this->___positions_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_2);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_2, L_5, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_6;
	}

IL_002f:
	{
		// positions.Add(this.gameObject.transform.position);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_7 = __this->___positions_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		NullCheck(L_7);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_7, L_10, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// Vector3 pos1 = positions[0];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = __this->___positions_4;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_11, 0, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_0 = L_12;
		// Vector3 pos2 = positions[1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = __this->___positions_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_13, 1, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_14;
		// Vector3 pos3 = positions[2];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = __this->___positions_4;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_15, 2, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_2 = L_16;
		// Vector3 pos4 = positions[3];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_17 = __this->___positions_4;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_17, 3, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_3 = L_18;
		// Vector3 pos5 = positions[4];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = __this->___positions_4;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_19, 4, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		// Vector3 v1 = pos2 - pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_22, NULL);
		V_4 = L_23;
		// Vector3 v2 = pos3 - pos2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_25, NULL);
		V_5 = L_26;
		// Vector3 v3 = pos4 - pos3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_28, NULL);
		V_6 = L_29;
		// Vector3 v4 = pos5 - pos4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_30, NULL);
		V_7 = L_31;
		// Vector3 totalVector = v1 + v2 + v3 + v4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_37, NULL);
		// Vector3 direction = totalVector / 4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_38, (4.0f), NULL);
		// direction *= 10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, (10.0f), NULL);
		// positions.RemoveAt(0);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_41 = __this->___positions_4;
		NullCheck(L_41);
		List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679(L_41, 0, List_1_RemoveAt_m482122FD05018D3A1F5EE75A17852A8F8A911679_RuntimeMethod_var);
		// return direction;
		return L_40;
	}
}
// System.Single HookGunController::PullFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HookGunController_PullFactor_mB12D5261A815F1C3FE9B7CA6D3D4883080EEFD90 (HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 target = transform.forward * 2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (2.0f), NULL);
		V_0 = L_2;
		// float factor = Vector3.Angle(hookGunAcceleration, target);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___hookGunAcceleration_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5;
		L_5 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// if (factor < 120) factor = 0;
		float L_6 = V_1;
		if ((!(((float)L_6) < ((float)(120.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// if (factor < 120) factor = 0;
		V_1 = (0.0f);
	}

IL_0031:
	{
		// factor *= hookGunAcceleration.magnitude;
		float L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___hookGunAcceleration_11);
		float L_9;
		L_9 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_8, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_7, L_9));
		// return factor;
		float L_10 = V_1;
		return L_10;
	}
}
// System.Void HookGunController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HookGunController__ctor_m486E7E399001A70862F5B11260B3BB5933A6A9BD (HookGunController_t63C163B8C92276FEDC095CA066FC3BF5D2C047A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Vector3> positions = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		__this->___positions_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___positions_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// playerRigidbody.AddForce(Vector3.down);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___playerRigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ScoreController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_Start_m1D6585F7BBBC730961CFB8BACC546A124F0D9646 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	{
		// gameManager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		__this->___gameManager_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void ScoreController::UpdateScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_UpdateScreen_mFD3DB040F527585BC97D6B81753339782F7786F5 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral704EA316AF9CB11D5A9D4E7AE2B40CC8E5FB89FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B6C70267899394EDC0B823A6897DE823AF860B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectiveValueText.text = $"{gameManager.objective}lbs";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___objectiveValueText_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___gameManager_12;
		NullCheck(L_1);
		float L_2 = L_1->___objective_8;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral73B6C70267899394EDC0B823A6897DE823AF860B, L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// comboValueText.text = $"{gameManager.combos * gameManager.perComboValue}$";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___comboValueText_9;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = __this->___gameManager_12;
		NullCheck(L_7);
		float L_8 = L_7->___combos_6;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = __this->___gameManager_12;
		NullCheck(L_9);
		float L_10 = L_9->___perComboValue_7;
		float L_11 = ((float)il2cpp_codegen_multiply(L_8, L_10));
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral704EA316AF9CB11D5A9D4E7AE2B40CC8E5FB89FE, L_12, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_13);
		// extraFromLevelValueText.text = $"{gameManager.score - gameManager.objective}$";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___extraFromLevelValueText_10;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = __this->___gameManager_12;
		NullCheck(L_15);
		float L_16 = L_15->___score_14;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17 = __this->___gameManager_12;
		NullCheck(L_17);
		float L_18 = L_17->___objective_8;
		float L_19 = ((float)il2cpp_codegen_subtract(L_16, L_18));
		RuntimeObject* L_20 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral704EA316AF9CB11D5A9D4E7AE2B40CC8E5FB89FE, L_20, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_21);
		// totalValueText.text = $"{gameManager.objective + (gameManager.combos * gameManager.perComboValue) + (gameManager.score - gameManager.objective)}$";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_22 = __this->___totalValueText_11;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = __this->___gameManager_12;
		NullCheck(L_23);
		float L_24 = L_23->___objective_8;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_25 = __this->___gameManager_12;
		NullCheck(L_25);
		float L_26 = L_25->___combos_6;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_27 = __this->___gameManager_12;
		NullCheck(L_27);
		float L_28 = L_27->___perComboValue_7;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_29 = __this->___gameManager_12;
		NullCheck(L_29);
		float L_30 = L_29->___score_14;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_31 = __this->___gameManager_12;
		NullCheck(L_31);
		float L_32 = L_31->___objective_8;
		float L_33 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(L_26, L_28)))), ((float)il2cpp_codegen_subtract(L_30, L_32))));
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral704EA316AF9CB11D5A9D4E7AE2B40CC8E5FB89FE, L_34, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_22, L_35);
		// }
		return;
	}
}
// System.Void ScoreController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController__ctor_m161DBF9A2ED8098CD117A438518B3C716F0BC5F7 (ScoreController_tD0A8C4C0BB3FE285665B33782F252080F6D74805* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.RaycastHit[] ConeCast::ConeCastAll(UnityEngine.Physics,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ConeCast_ConeCastAll_mB8B6EF562C96E08ACB9F20FCE152511A1D7FCB7B (Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56* ___physics0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin1, float ___maxRadius2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction3, float ___maxDistance4, float ___coneAngle5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88587A0ABD2A6917EFAE4F72B496BA19A55BDBCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_0 = NULL;
	List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// RaycastHit[] sphereCastHits = Physics.SphereCastAll(origin - new Vector3(0, 0, maxRadius), maxRadius, direction, maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___origin1;
		float L_1 = ___maxRadius2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_2, NULL);
		float L_4 = ___maxRadius2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___direction3;
		float L_6 = ___maxDistance4;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_7;
		L_7 = Physics_SphereCastAll_m90D15BED8E37CCDC16BCD900697FDCB221A399EB(L_3, L_4, L_5, L_6, NULL);
		V_0 = L_7;
		// List<RaycastHit> coneCastHitList = new List<RaycastHit>();
		List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* L_8 = (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*)il2cpp_codegen_object_new(List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC(L_8, List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_RuntimeMethod_var);
		V_1 = L_8;
		// if (sphereCastHits.Length > 0)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_9 = V_0;
		NullCheck(L_9);
		if (!(((RuntimeArray*)L_9)->max_length))
		{
			goto IL_0063;
		}
	}
	{
		// for (int i = 0; i < sphereCastHits.Length; i++)
		V_2 = 0;
		goto IL_005d;
	}

IL_002e:
	{
		// Vector3 hitPoint = sphereCastHits[i].point;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), NULL);
		// Vector3 directionToHit = hitPoint - origin;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___origin1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		V_3 = L_14;
		// float angleToHit = Vector3.Angle(direction, directionToHit);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___direction3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_3;
		float L_17;
		L_17 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_15, L_16, NULL);
		// if (angleToHit < coneAngle)
		float L_18 = ___coneAngle5;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_0059;
		}
	}
	{
		// coneCastHitList.Add(sphereCastHits[i]);
		List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* L_19 = V_1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_20 = V_0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_19);
		List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_inline(L_19, L_23, List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_RuntimeMethod_var);
	}

IL_0059:
	{
		// for (int i = 0; i < sphereCastHits.Length; i++)
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_005d:
	{
		// for (int i = 0; i < sphereCastHits.Length; i++)
		int32_t L_25 = V_2;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0063:
	{
		// RaycastHit[] coneCastHits = new RaycastHit[coneCastHitList.Count];
		List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m88587A0ABD2A6917EFAE4F72B496BA19A55BDBCC_inline(L_27, List_1_get_Count_m88587A0ABD2A6917EFAE4F72B496BA19A55BDBCC_RuntimeMethod_var);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_29 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)L_28);
		// coneCastHits = coneCastHitList.ToArray();
		List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* L_30 = V_1;
		NullCheck(L_30);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_31;
		L_31 = List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797(L_30, List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_RuntimeMethod_var);
		// return coneCastHits;
		return L_31;
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
// System.Void GrapplingHookShoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_Start_m75BDA03709395D21FE3BE1672B6CEBD6604710E1 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m009EBC2D63242B5428345D2A704803A739AFD6A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// haptic = Haptic.Instance;
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_0;
		L_0 = Haptic_get_Instance_m08B701575323EC53472DCEB31E639F2B74594403(NULL);
		__this->___haptic_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___haptic_11), (void*)L_0);
		// lineRenderer = this.GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1;
		L_1 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___lineRenderer_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lineRenderer_6), (void*)L_1);
		// hookController = hookObj.GetComponent<HookController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___hookObj_14;
		NullCheck(L_2);
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_3;
		L_3 = GameObject_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m009EBC2D63242B5428345D2A704803A739AFD6A7(L_2, GameObject_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m009EBC2D63242B5428345D2A704803A739AFD6A7_RuntimeMethod_var);
		__this->___hookController_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hookController_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_Shoot_mBA6C93C95FC156E09E578389A7F76A97F9EC909D (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	{
		// isShot = true;
		__this->___isShot_5 = (bool)1;
		// haptic.SendHapticsLeftController(0.5f,0.5f);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_0 = __this->___haptic_11;
		NullCheck(L_0);
		Haptic_SendHapticsLeftController_m3FB636C0F64B220C414510708DF93656E4EB7AA5(L_0, (0.5f), (0.5f), NULL);
		// hookObj.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___hookObj_14;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// hookController.isShooting = true;
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_3 = __this->___hookController_7;
		NullCheck(L_3);
		L_3->___isShooting_7 = (bool)1;
		// resetButtonPress = false;
		__this->___resetButtonPress_13 = (bool)0;
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_Update_mD1101C5E82394E857E30C0C620190B5623CD6260 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	{
		// if (!shootButton.action.IsPressed()) resetButtonPress = true;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___shootButton_9);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (!shootButton.action.IsPressed()) resetButtonPress = true;
		__this->___resetButtonPress_13 = (bool)1;
	}

IL_0019:
	{
		// if(!isShot && shootButton.action.IsPressed() && resetButtonPress) Shoot();
		bool L_3 = __this->___isShot_5;
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_4 = (&__this->___shootButton_9);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_5, NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		bool L_7 = __this->___resetButtonPress_13;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// if(!isShot && shootButton.action.IsPressed() && resetButtonPress) Shoot();
		GrapplingHookShoot_Shoot_mBA6C93C95FC156E09E578389A7F76A97F9EC909D(__this, NULL);
	}

IL_0041:
	{
		// if (isShot) CheckForRetrieve();
		bool L_8 = __this->___isShot_5;
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		// if (isShot) CheckForRetrieve();
		GrapplingHookShoot_CheckForRetrieve_mCA5DC4FDCB647E0E2E5E6EAF8D15B3DD39C27D53(__this, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::CheckForRetrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_CheckForRetrieve_mCA5DC4FDCB647E0E2E5E6EAF8D15B3DD39C27D53 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	{
		// if (Vector3.Distance(transform.position, hookObj.transform.position) > ropeLength)//Return if it is too far away
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___hookObj_14;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		float L_6 = __this->___ropeLength_4;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_003a;
		}
	}
	{
		// hookController.isRetrieving = true;
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_7 = __this->___hookController_7;
		NullCheck(L_7);
		L_7->___isRetrieving_6 = (bool)1;
		// LetGo();
		GrapplingHookShoot_LetGo_m7442B9972FB41284BE241C7592D93ADC055386FD(__this, NULL);
	}

IL_003a:
	{
		// if(hookController.IsAttached() && hookController.isRetrieving){
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_8 = __this->___hookController_7;
		NullCheck(L_8);
		bool L_9;
		L_9 = HookController_IsAttached_m760A9C1886636EBC0A5D826FBBBBC58A8D2DEAB5(L_8, NULL);
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_10 = __this->___hookController_7;
		NullCheck(L_10);
		bool L_11 = L_10->___isRetrieving_6;
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		// if (Vector3.Distance(transform.position, hookObj.transform.position) < letGoDistance)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___hookObj_14;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17;
		L_17 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_13, L_16, NULL);
		float L_18 = __this->___letGoDistance_10;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_0082;
		}
	}
	{
		// LetGo();
		GrapplingHookShoot_LetGo_m7442B9972FB41284BE241C7592D93ADC055386FD(__this, NULL);
	}

IL_0082:
	{
		// if (Vector3.Distance(transform.position, hookObj.transform.position) < 1 && hookController.isRetrieving)//Once it's close enough, return the hook in to the slot.
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___hookObj_14;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24;
		L_24 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_20, L_23, NULL);
		if ((!(((float)L_24) < ((float)(1.0f)))))
		{
			goto IL_00bc;
		}
	}
	{
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_25 = __this->___hookController_7;
		NullCheck(L_25);
		bool L_26 = L_25->___isRetrieving_6;
		if (!L_26)
		{
			goto IL_00bc;
		}
	}
	{
		// ReturnInGun();
		GrapplingHookShoot_ReturnInGun_mD83E21C2B6498983C8CFE630447F81DA86A6E411(__this, NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_LateUpdate_m6F40F507C743D717B355BFCB5FA2F6D5F1FEF35B (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	{
		// DrawRope();//Always draw the rope.
		GrapplingHookShoot_DrawRope_m04B017F53EFBA01DDBD324E8F7FDE195CEE7DA18(__this, NULL);
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::DrawRope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_DrawRope_m04B017F53EFBA01DDBD324E8F7FDE195CEE7DA18 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.SetPosition(0, hookObj.transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___hookObj_14;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_0, 0, L_3, NULL);
		// lineRenderer.SetPosition(1, hookEndpoint.transform.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->___lineRenderer_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___hookEndpoint_15;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_4);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_4, 1, L_7, NULL);
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::Pull(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_Pull_m9C8A5F370C4CF4670D8426865C0948A7FB29AF21 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, float ____pullStrength0, const RuntimeMethod* method) 
{
	{
		// pullStrength = _pullStrength;
		float L_0 = ____pullStrength0;
		__this->___pullStrength_12 = L_0;
		// haptic.SendHapticsLeftController(0.5f, 0.5f);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_1 = __this->___haptic_11;
		NullCheck(L_1);
		Haptic_SendHapticsLeftController_m3FB636C0F64B220C414510708DF93656E4EB7AA5(L_1, (0.5f), (0.5f), NULL);
		// hookController.isRetrieving = true;
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_2 = __this->___hookController_7;
		NullCheck(L_2);
		L_2->___isRetrieving_6 = (bool)1;
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::LetGo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_LetGo_m7442B9972FB41284BE241C7592D93ADC055386FD (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE93DB412AB0398B3BFFB4DD44CA34151F08EA4C);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Debug.Log("Letting go...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralDE93DB412AB0398B3BFFB4DD44CA34151F08EA4C, NULL);
		// if (hookController.IsAttached())
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_0 = __this->___hookController_7;
		NullCheck(L_0);
		bool L_1;
		L_1 = HookController_IsAttached_m760A9C1886636EBC0A5D826FBBBBC58A8D2DEAB5(L_0, NULL);
		if (!L_1)
		{
			goto IL_006c;
		}
	}
	{
		// Vector3 pullVelocity = (hookEndpoint.transform.position - hookObj.transform.position).normalized * (2.75f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___hookEndpoint_15;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___hookObj_14;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_7, NULL);
		V_1 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (2.75f), NULL);
		V_0 = L_10;
		// Suckable suckController = hookController.attachedObj.GetComponent<Suckable>();
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_11 = __this->___hookController_7;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___attachedObj_8;
		NullCheck(L_12);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_13;
		L_13 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_12, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		// suckController.flowDirection = pullVelocity;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_14 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		NullCheck(L_14);
		L_14->___flowDirection_23 = L_15;
		// suckController.isHooked = false;
		NullCheck(L_14);
		L_14->___isHooked_18 = (bool)0;
	}

IL_006c:
	{
		// hookObj.transform.parent = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___hookObj_14;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		NullCheck(L_17);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_17, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// hookController.attachedObj = null;
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_18 = __this->___hookController_7;
		NullCheck(L_18);
		L_18->___attachedObj_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___attachedObj_8), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::ReturnInGun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot_ReturnInGun_mD83E21C2B6498983C8CFE630447F81DA86A6E411 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	{
		// hookObj.transform.parent = this.transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hookObj_14;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_1);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_1, L_3, NULL);
		// isShot = false;
		__this->___isShot_5 = (bool)0;
		// hookController.isRetrieving = false;
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_4 = __this->___hookController_7;
		NullCheck(L_4);
		L_4->___isRetrieving_6 = (bool)0;
		// hookController.isShooting = false;
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_5 = __this->___hookController_7;
		NullCheck(L_5);
		L_5->___isShooting_7 = (bool)0;
		// hookObj.transform.localRotation = Quaternion.Euler(0, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___hookObj_14;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_8, NULL);
		// haptic.SendHapticsLeftController(0.5f, 0.5f);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_9 = __this->___haptic_11;
		NullCheck(L_9);
		Haptic_SendHapticsLeftController_m3FB636C0F64B220C414510708DF93656E4EB7AA5(L_9, (0.5f), (0.5f), NULL);
		// hookObj.transform.localPosition = new Vector3(0.0009f, -0.0954f, -0.0025f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___hookObj_14;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.000899999985f), (-0.0953999981f), (-0.00249999994f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void GrapplingHookShoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrapplingHookShoot__ctor_mE28A78EC311D207EF2135B7725DB2AC6FA5323A8 (GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* __this, const RuntimeMethod* method) 
{
	{
		// public float ropeLength = 50;
		__this->___ropeLength_4 = (50.0f);
		// public float letGoDistance = 6f;
		__this->___letGoDistance_10 = (6.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Haptic Haptic::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* Haptic_get_Instance_m08B701575323EC53472DCEB31E639F2B74594403 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral590FB6F8ED68B3797765A22CDA7CF7A46C7E447C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_instance == null) Debug.LogError("There is no haptic in the current scene");
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_0 = ((Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_StaticFields*)il2cpp_codegen_static_fields_for(Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_instance == null) Debug.LogError("There is no haptic in the current scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral590FB6F8ED68B3797765A22CDA7CF7A46C7E447C, NULL);
	}

IL_0017:
	{
		// return _instance;
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_2 = ((Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_StaticFields*)il2cpp_codegen_static_fields_for(Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_il2cpp_TypeInfo_var))->____instance_4;
		return L_2;
	}
}
// System.Void Haptic::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic_Awake_m13F703C316116106EF077FF8D7492BB7BB656814 (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_StaticFields*)il2cpp_codegen_static_fields_for(Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_il2cpp_TypeInfo_var))->____instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_StaticFields*)il2cpp_codegen_static_fields_for(Haptic_tC8A67D343F25A7234E81452F710387326151AEDB_il2cpp_TypeInfo_var))->____instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void Haptic::SendHapticsLeftController(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic_SendHapticsLeftController_m3FB636C0F64B220C414510708DF93656E4EB7AA5 (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, float ___amplitude0, float ___duration1, const RuntimeMethod* method) 
{
	{
		// leftController.SendHapticImpulse(amplitude, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = __this->___leftController_5;
		float L_1 = ___amplitude0;
		float L_2 = ___duration1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, float, float >::Invoke(14 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Haptic::SendHapticsRightController(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic_SendHapticsRightController_m765E5DD565AE8A77B1BEB0988939628C3E9A1492 (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, float ___amplitude0, float ___duration1, const RuntimeMethod* method) 
{
	{
		// rightController.SendHapticImpulse(amplitude, duration);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = __this->___rightController_6;
		float L_1 = ___amplitude0;
		float L_2 = ___duration1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, float, float >::Invoke(14 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Haptic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Haptic__ctor_m2F0C7BDCD2320E80E9F7ACED8E51A5E84CEC216E (Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SettingsController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController_Start_m7D3582F7E06664BAF4F0084D8E1005DF225DE7E0 (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	{
		// helmetController = HelmetController.Instance;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_0;
		L_0 = HelmetController_get_Instance_m1EE9739508E9EAD3FFF83C30D055DF65C5418510(NULL);
		__this->___helmetController_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___helmetController_7), (void*)L_0);
		// defaultPosition = helmetController.defaultPosition;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_1 = __this->___helmetController_7;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___defaultPosition_4;
		__this->___defaultPosition_9 = L_2;
		// customPosition = defaultPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___defaultPosition_9;
		__this->___customPosition_10 = L_3;
		// UICameraObj = helmetController.UICamera.gameObject;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_4 = __this->___helmetController_7;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = L_4->___UICamera_11;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___UICameraObj_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UICameraObj_8), (void*)L_6);
		// }
		return;
	}
}
// System.Void SettingsController::ResetHelmet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController_ResetHelmet_mB73B52B6921D999F6E7169D9B836B05432BF8D6E (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	{
		// sliderX.value = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___sliderX_4;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (0.0f));
		// sliderY.value = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___sliderY_5;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (0.0f));
		// sliderZ.value = 0;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___sliderZ_6;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, (0.0f));
		// UICameraObj.transform.localPosition = defaultPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___UICameraObj_8;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___defaultPosition_9;
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void SettingsController::MoveX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController_MoveX_m289DFEF38DFF35555F3153CBFC57F08172B8C29F (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	{
		// customPosition.x =  defaultPosition.x + sliderX.value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___customPosition_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___defaultPosition_9);
		float L_2 = L_1->___x_2;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___sliderX_4;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		L_0->___x_2 = ((float)il2cpp_codegen_add(L_2, L_4));
		// UICameraObj.transform.localPosition = customPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___UICameraObj_8;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___customPosition_10;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SettingsController::MoveY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController_MoveY_m724566A7B92C2CB8F3C477957FB880015F333081 (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	{
		// customPosition.y = defaultPosition.y - sliderY.value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___customPosition_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___defaultPosition_9);
		float L_2 = L_1->___y_3;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___sliderY_5;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		L_0->___y_3 = ((float)il2cpp_codegen_subtract(L_2, L_4));
		// UICameraObj.transform.localPosition = customPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___UICameraObj_8;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___customPosition_10;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SettingsController::MoveZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController_MoveZ_mA445313D30DDD829D3BC68B185CDF993B4B99C56 (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	{
		// customPosition.z = defaultPosition.z + sliderZ.value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___customPosition_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___defaultPosition_9);
		float L_2 = L_1->___z_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___sliderZ_6;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_3);
		L_0->___z_4 = ((float)il2cpp_codegen_add(L_2, L_4));
		// UICameraObj.transform.localPosition = customPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___UICameraObj_8;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___customPosition_10;
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void SettingsController::SaveHelmetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController_SaveHelmetSettings_mE2B58C262465D9EE018AA63DD89A9DF9A883CC9D (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	{
		// helmetController.customCameraPosition = customPosition;
		HelmetController_t143B4525FB45C42EB5CFBA355913A9895BD37F35* L_0 = __this->___helmetController_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___customPosition_10;
		NullCheck(L_0);
		L_0->___customCameraPosition_12 = L_1;
		// }
		return;
	}
}
// System.Void SettingsController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsController__ctor_mC1D5DFEFE813AC5732F61D424190E259768F4795 (SettingsController_tA99F50357B608814E46DA255DA9B390012A779C4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Suckable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Start_m835ABDEF2DB4D13CD82DFC635317369CCE59EA68 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		__this->___gameManager_29 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_29), (void*)L_0);
		// rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidbody_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody_4), (void*)L_1);
		// haptic = Haptic.Instance;
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_2;
		L_2 = Haptic_get_Instance_m08B701575323EC53472DCEB31E639F2B74594403(NULL);
		__this->___haptic_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___haptic_12), (void*)L_2);
		// originalScale = this.transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		__this->___originalScale_21 = L_4;
		// sX = Random.Range(0, 10);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)10), NULL);
		__this->___sX_31 = ((float)L_5);
		// sY = Random.Range(0, 10);
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)10), NULL);
		__this->___sY_32 = ((float)L_6);
		// sZ = Random.Range(0, 10);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)10), NULL);
		__this->___sZ_33 = ((float)L_7);
		// growSpeed = 1 - shrinkSpeed + 1;
		float L_8 = __this->___shrinkSpeed_8;
		__this->___growSpeed_19 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract((1.0f), L_8)), (1.0f)));
		// }
		return;
	}
}
// System.Void Suckable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Update_m646795073D2F6EBF69BC6814ED5D1CD70184E983 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	{
		// DeleteItem();
		Suckable_DeleteItem_m54C9F5B23D21A3C938DF95DB65E72ACF289F8F9A(__this, NULL);
		// }
		return;
	}
}
// System.Void Suckable::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_FixedUpdate_m66B57094834866670DBEC7B358D93C6A6586CB12 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isFlowing) Flow();
		bool L_0 = __this->___isFlowing_25;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (isFlowing) Flow();
		Suckable_Flow_mE874E3E39B2F4DCA289FC02A01D35740FA7E6FC6(__this, NULL);
	}

IL_000e:
	{
		// if (sucked) Shrink();
		bool L_1 = __this->___sucked_5;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if (sucked) Shrink();
		Suckable_Shrink_mAF621E3A34371F4947D902F6980199F34A01EDAD(__this, NULL);
	}

IL_001c:
	{
		// if (isGrowing) Grow();
		bool L_2 = __this->___isGrowing_20;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// if (isGrowing) Grow();
		Suckable_Grow_m83DF1BD4CA77C00C8434F7C71514B6D2860C1F4C(__this, NULL);
	}

IL_002a:
	{
		// if (trashChute != null) ShrinkTrashChute();
		TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* L_3 = __this->___trashChute_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// if (trashChute != null) ShrinkTrashChute();
		Suckable_ShrinkTrashChute_m8B1BB44F9EA6564E85F996FAA800B032E4010677(__this, NULL);
	}

IL_003e:
	{
		// if (isSwooshing) Swooshes(SwooshIntensity, SwooshFrequency);
		bool L_5 = __this->___isSwooshing_28;
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		// if (isSwooshing) Swooshes(SwooshIntensity, SwooshFrequency);
		float L_6 = __this->___SwooshIntensity_26;
		float L_7 = __this->___SwooshFrequency_27;
		Suckable_Swooshes_m754AF3D52BBB73DEECEA16D8CF3E973B4C4D4424(__this, L_6, L_7, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Suckable::DeleteItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_DeleteItem_m54C9F5B23D21A3C938DF95DB65E72ACF289F8F9A (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (transform.position.magnitude > 20)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_2) > ((float)(20.0f)))))
		{
			goto IL_002b;
		}
	}
	{
		// flowDirection = -flowDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___flowDirection_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_3, NULL);
		__this->___flowDirection_23 = L_4;
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Suckable::Suck(UnityEngine.Vector3,System.Single,SuckingMachineController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Suck_mD553A7856DEE7C905925426F11DA0AEDBF7C9001 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____origin0, float ____suckPower1, SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* ____suckMachine2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (canBeSucked)
		bool L_0 = __this->___canBeSucked_15;
		if (!L_0)
		{
			goto IL_007a;
		}
	}
	{
		// suckMachine = _suckMachine;
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_1 = ____suckMachine2;
		__this->___suckMachine_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___suckMachine_11), (void*)L_1);
		// if (rigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rigidbody_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		// Vector3 direction = (_origin - this.transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ____origin0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_6, NULL);
		V_0 = L_7;
		// if (direction.magnitude != 0)
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_007a;
		}
	}
	{
		// Vector3 velocity = direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		V_1 = L_9;
		// velocity /= direction.magnitude * 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_10, ((float)il2cpp_codegen_multiply(L_11, (3.0f))), NULL);
		V_1 = L_12;
		// velocity *= _suckPower;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14 = ____suckPower1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		V_1 = L_15;
		// rigidbody.AddForce(velocity);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___rigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		NullCheck(L_16);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_16, L_17, NULL);
		// flowDirection = velocity.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		__this->___flowDirection_23 = L_18;
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Suckable::Shrink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Shrink_mAF621E3A34371F4947D902F6980199F34A01EDAD (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m6ED7C74701449147948FA42E2A0F3EB4F1EDA53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FCD9DFEDB4B5B0CC0587121C4AB1682B834E22B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isHooked)
		bool L_0 = __this->___isHooked_18;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// GrapplingHookShoot graplingcon = transform.Find("Hook").GetComponent<HookController>().grapplingHookController;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral8FCD9DFEDB4B5B0CC0587121C4AB1682B834E22B, NULL);
		NullCheck(L_2);
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_3;
		L_3 = Component_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m6ED7C74701449147948FA42E2A0F3EB4F1EDA53F(L_2, Component_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m6ED7C74701449147948FA42E2A0F3EB4F1EDA53F_RuntimeMethod_var);
		NullCheck(L_3);
		GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* L_4 = L_3->___grapplingHookController_4;
		// graplingcon.LetGo();
		GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* L_5 = L_4;
		NullCheck(L_5);
		GrapplingHookShoot_LetGo_m7442B9972FB41284BE241C7592D93ADC055386FD(L_5, NULL);
		// graplingcon.hookController.isRetrieving = true;
		NullCheck(L_5);
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_6 = L_5->___hookController_7;
		NullCheck(L_6);
		L_6->___isRetrieving_6 = (bool)1;
	}

IL_0033:
	{
		// this.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z) * shrinkSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		float L_10 = L_9.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_11, NULL);
		float L_13 = L_12.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_10, L_13, L_16, /*hidden argument*/NULL);
		float L_18 = __this->___shrinkSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_19, NULL);
		// if (transform.localScale.x < 0.1)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_20, NULL);
		float L_22 = L_21.___x_2;
		if ((!(((double)((double)L_22)) < ((double)(0.10000000000000001)))))
		{
			goto IL_00c9;
		}
	}
	{
		// GameObject suckedItem = this.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// sucked = false;
		__this->___sucked_5 = (bool)0;
		// haptic.SendHapticsRightController(0.25f, 0.25f);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_25 = __this->___haptic_12;
		NullCheck(L_25);
		Haptic_SendHapticsRightController_m765E5DD565AE8A77B1BEB0988939628C3E9A1492(L_25, (0.25f), (0.25f), NULL);
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Suckable::Grow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Grow_m83DF1BD4CA77C00C8434F7C71514B6D2860C1F4C (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m6ED7C74701449147948FA42E2A0F3EB4F1EDA53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FCD9DFEDB4B5B0CC0587121C4AB1682B834E22B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isHooked)
		bool L_0 = __this->___isHooked_18;
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// GrapplingHookShoot graplingcon = transform.Find("Hook").GetComponent<HookController>().grapplingHookController;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral8FCD9DFEDB4B5B0CC0587121C4AB1682B834E22B, NULL);
		NullCheck(L_2);
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_3;
		L_3 = Component_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m6ED7C74701449147948FA42E2A0F3EB4F1EDA53F(L_2, Component_GetComponent_TisHookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79_m6ED7C74701449147948FA42E2A0F3EB4F1EDA53F_RuntimeMethod_var);
		NullCheck(L_3);
		GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* L_4 = L_3->___grapplingHookController_4;
		// graplingcon.LetGo();
		GrapplingHookShoot_tCE0D0FBF3C15465197A4C96A7BE270218354963C* L_5 = L_4;
		NullCheck(L_5);
		GrapplingHookShoot_LetGo_m7442B9972FB41284BE241C7592D93ADC055386FD(L_5, NULL);
		// graplingcon.hookController.isRetrieving = true;
		NullCheck(L_5);
		HookController_tAF46FC70DDD23B68448AE1E64D34C75394D69D79* L_6 = L_5->___hookController_7;
		NullCheck(L_6);
		L_6->___isRetrieving_6 = (bool)1;
	}

IL_0033:
	{
		// this.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z) * growSpeed ;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		float L_10 = L_9.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_11, NULL);
		float L_13 = L_12.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_10, L_13, L_16, /*hidden argument*/NULL);
		float L_18 = __this->___growSpeed_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_19, NULL);
		// if (transform.localScale.x > 1)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_20, NULL);
		float L_22 = L_21.___x_2;
		if ((!(((float)L_22) > ((float)(1.0f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// transform.localScale = new Vector3(1, 1, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_23, L_24, NULL);
		// isGrowing = false;
		__this->___isGrowing_20 = (bool)0;
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void Suckable::ShrinkTrashChute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_ShrinkTrashChute_m8B1BB44F9EA6564E85F996FAA800B032E4010677 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10832241F822E63894D4C13F78015A3F65342A3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.transform.localScale = new Vector3(transform.localScale.x, transform.localScale.y, transform.localScale.z) * shrinkSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_3, L_6, L_9, /*hidden argument*/NULL);
		float L_11 = __this->___shrinkSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_12, NULL);
		// if (transform.localScale.x < 0.1)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		float L_15 = L_14.___x_2;
		if ((!(((double)((double)L_15)) < ((double)(0.10000000000000001)))))
		{
			goto IL_010f;
		}
	}
	{
		// trashChuteSucked = false;
		__this->___trashChuteSucked_6 = (bool)0;
		// if(trashChute.garbageProperty != garbageProperty)
		TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* L_16 = __this->___trashChute_7;
		NullCheck(L_16);
		int32_t L_17 = L_16->___garbageProperty_4;
		int32_t L_18 = __this->___garbageProperty_9;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_00ae;
		}
	}
	{
		// trashChute.itemsToEject.Add(this.gameObject);
		TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* L_19 = __this->___trashChute_7;
		NullCheck(L_19);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = L_19->___itemsToEject_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_20);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_20, L_21, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// trashChute = null;
		__this->___trashChute_7 = (TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trashChute_7), (void*)(TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859*)NULL);
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		return;
	}

IL_00ae:
	{
		// gameManager.AddTrashPoints(1);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_23 = __this->___gameManager_29;
		NullCheck(L_23);
		GameManager_AddTrashPoints_m70B80061C0CC961BFF87EB760342CDA0FB212ABB(L_23, (1.0f), (0.5f), NULL);
		// gameManager.cleannessLevel++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_24 = __this->___gameManager_29;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_25 = L_24;
		NullCheck(L_25);
		float L_26 = L_25->___cleannessLevel_12;
		NullCheck(L_25);
		L_25->___cleannessLevel_12 = ((float)il2cpp_codegen_add(L_26, (1.0f)));
		// trashChute.streakDisplay.text = $"Streak {gameManager.combos}";
		TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* L_27 = __this->___trashChute_7;
		NullCheck(L_27);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_28 = L_27->___streakDisplay_10;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_29 = __this->___gameManager_29;
		NullCheck(L_29);
		float L_30 = L_29->___combos_6;
		float L_31 = L_30;
		RuntimeObject* L_32 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral10832241F822E63894D4C13F78015A3F65342A3B, L_32, NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_28, L_33);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_34, NULL);
	}

IL_010f:
	{
		// }
		return;
	}
}
// System.Void Suckable::Flow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Flow_mE874E3E39B2F4DCA289FC02A01D35740FA7E6FC6 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	{
		// transform.position += oldSwoosh;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___oldSwoosh_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// rigidbody.AddForce(flowDirection * flowSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___flowDirection_23;
		float L_7 = __this->___flowSpeed_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void Suckable::Swooshes(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable_Swooshes_m754AF3D52BBB73DEECEA16D8CF3E973B4C4D4424 (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, float ____intensity0, float ____frequency1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// _frequency /= 10;
		float L_0 = ____frequency1;
		____frequency1 = ((float)(L_0/(10.0f)));
		// _intensity /= 100;
		float L_1 = ____intensity0;
		____intensity0 = ((float)(L_1/(100.0f)));
		// sX += Random.Range(0.5f, 1f);
		float L_2 = __this->___sX_31;
		float L_3;
		L_3 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (1.0f), NULL);
		__this->___sX_31 = ((float)il2cpp_codegen_add(L_2, L_3));
		// sY += Random.Range(0.5f, 1f);
		float L_4 = __this->___sY_32;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (1.0f), NULL);
		__this->___sY_32 = ((float)il2cpp_codegen_add(L_4, L_5));
		// sZ += Random.Range(0.5f, 1f);
		float L_6 = __this->___sZ_33;
		float L_7;
		L_7 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (1.0f), NULL);
		__this->___sZ_33 = ((float)il2cpp_codegen_add(L_6, L_7));
		// float sinX = _intensity * Mathf.Sin(sX * _frequency);
		float L_8 = ____intensity0;
		float L_9 = __this->___sX_31;
		float L_10 = ____frequency1;
		float L_11;
		L_11 = sinf(((float)il2cpp_codegen_multiply(L_9, L_10)));
		V_0 = ((float)il2cpp_codegen_multiply(L_8, L_11));
		// float sinY = _intensity * Mathf.Sin(sY * _frequency);
		float L_12 = ____intensity0;
		float L_13 = __this->___sY_32;
		float L_14 = ____frequency1;
		float L_15;
		L_15 = sinf(((float)il2cpp_codegen_multiply(L_13, L_14)));
		V_1 = ((float)il2cpp_codegen_multiply(L_12, L_15));
		// float sinZ = _intensity * Mathf.Sin(sZ * _frequency);
		float L_16 = ____intensity0;
		float L_17 = __this->___sZ_33;
		float L_18 = ____frequency1;
		float L_19;
		L_19 = sinf(((float)il2cpp_codegen_multiply(L_17, L_18)));
		V_2 = ((float)il2cpp_codegen_multiply(L_16, L_19));
		// Vector3 swoosh = new Vector3(sinX, sinY, sinZ);
		float L_20 = V_0;
		float L_21 = V_1;
		float L_22 = V_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_20, L_21, L_22, NULL);
		// oldSwoosh = swoosh;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		__this->___oldSwoosh_30 = L_23;
		// rigidbody.AddTorque(swoosh / 50);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = __this->___rigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_25, (50.0f), NULL);
		NullCheck(L_24);
		Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6(L_24, L_26, NULL);
		// transform.position -= swoosh;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_30, NULL);
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_31, NULL);
		// }
		return;
	}
}
// System.Void Suckable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Suckable__ctor_mF233F4A12E9F47A487E4540F400B4DB4A93F71DE (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* __this, const RuntimeMethod* method) 
{
	{
		// public float trashPointsValue = 1;//This is in pounds, how much should it contribute to the objective?
		__this->___trashPointsValue_13 = (1.0f);
		// public bool canBeVacuumed = true;
		__this->___canBeVacuumed_14 = (bool)1;
		// public bool canBeSucked = true;
		__this->___canBeSucked_15 = (bool)1;
		// public bool canBeHooked = true;
		__this->___canBeHooked_16 = (bool)1;
		// public Vector3 flowDirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___flowDirection_23 = L_0;
		// public bool isFlowing = true;
		__this->___isFlowing_25 = (bool)1;
		// public bool isSwooshing = true;
		__this->___isSwooshing_28 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SuckableAnimal::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_Start_m007DD0ACDDD947897B09E176F64694E3F4F2F40A (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m11D03401B59A80FC46D791DF81EE89E41FB11AB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEFA8D682AC5F5F4F6D058ADED99502A70D687FDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m581F0C26788C5C3B945B5A465968A6070D0BDD8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1DCC9E2F61BD5980BE700934628DB0C6330BD56E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m858E27980654409E97389136C255D13D717B5187_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* V_1 = NULL;
	{
		// attachedGarbage = new List<Suckable>();
		List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* L_0 = (List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6*)il2cpp_codegen_object_new(List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m858E27980654409E97389136C255D13D717B5187(L_0, List_1__ctor_m858E27980654409E97389136C255D13D717B5187_RuntimeMethod_var);
		__this->___attachedGarbage_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attachedGarbage_36), (void*)L_0);
		// playerObj = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___playerObj_41 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerObj_41), (void*)L_1);
		// rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___rigidbody_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___rigidbody_4), (void*)L_2);
		// canBeSucked = false;
		((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___canBeSucked_15 = (bool)0;
		// canBeVacuumed = false;
		((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___canBeVacuumed_14 = (bool)0;
		// canBeHooked = false;
		((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___canBeHooked_16 = (bool)0;
		// wasAttached = true;
		((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___wasAttached_17 = (bool)1;
		// isFlowing = false;
		((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___isFlowing_25 = (bool)0;
		// isSwooshing = false;
		((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___isSwooshing_28 = (bool)0;
		// foreach (Suckable attachedGarbage in preDefinedGarbageOnPrefab)
		List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* L_3 = __this->___preDefinedGarbageOnPrefab_35;
		NullCheck(L_3);
		Enumerator_tF9F07C4970B4DFD497377823838336E6148BB832 L_4;
		L_4 = List_1_GetEnumerator_m1DCC9E2F61BD5980BE700934628DB0C6330BD56E(L_3, List_1_GetEnumerator_m1DCC9E2F61BD5980BE700934628DB0C6330BD56E_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m11D03401B59A80FC46D791DF81EE89E41FB11AB6((&V_0), Enumerator_Dispose_m11D03401B59A80FC46D791DF81EE89E41FB11AB6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006e_1;
			}

IL_005f_1:
			{
				// foreach (Suckable attachedGarbage in preDefinedGarbageOnPrefab)
				Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_5;
				L_5 = Enumerator_get_Current_m581F0C26788C5C3B945B5A465968A6070D0BDD8A_inline((&V_0), Enumerator_get_Current_m581F0C26788C5C3B945B5A465968A6070D0BDD8A_RuntimeMethod_var);
				V_1 = L_5;
				// AttachTrash(attachedGarbage);
				Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_6 = V_1;
				SuckableAnimal_AttachTrash_m0C00AAE7C8FA8DEFE0663DD3420C1F0703EDE581(__this, L_6, NULL);
			}

IL_006e_1:
			{
				// foreach (Suckable attachedGarbage in preDefinedGarbageOnPrefab)
				bool L_7;
				L_7 = Enumerator_MoveNext_mEFA8D682AC5F5F4F6D058ADED99502A70D687FDA((&V_0), Enumerator_MoveNext_mEFA8D682AC5F5F4F6D058ADED99502A70D687FDA_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_005f_1;
				}
			}
			{
				goto IL_0087;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void SuckableAnimal::RelaseRandomTrash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_RelaseRandomTrash_m0CA41EABC550546A7DDC89F2252CAE1D3B8F012B (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m4008E5FF5766D37F39021D56776D933703C05E06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m823B09C2C6516AA31D01B2B8B817546D13BF2AC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* V_1 = NULL;
	{
		// int rand = Random.Range(0, attachedGarbage.Count);
		List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* L_0 = __this->___attachedGarbage_36;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_inline(L_0, List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_1, NULL);
		V_0 = L_2;
		// Suckable suckableScript = attachedGarbage[rand];
		List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* L_3 = __this->___attachedGarbage_36;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_5;
		L_5 = List_1_get_Item_m823B09C2C6516AA31D01B2B8B817546D13BF2AC2(L_3, L_4, List_1_get_Item_m823B09C2C6516AA31D01B2B8B817546D13BF2AC2_RuntimeMethod_var);
		V_1 = L_5;
		// suckableScript.wasAttached = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_6 = V_1;
		NullCheck(L_6);
		L_6->___wasAttached_17 = (bool)1;
		// suckableScript.canBeSucked = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_7 = V_1;
		NullCheck(L_7);
		L_7->___canBeSucked_15 = (bool)1;
		// suckableScript.canBeHooked = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_8 = V_1;
		NullCheck(L_8);
		L_8->___canBeHooked_16 = (bool)1;
		// suckableScript.canBeVacuumed = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_9 = V_1;
		NullCheck(L_9);
		L_9->___canBeVacuumed_14 = (bool)1;
		// suckableScript.isFlowing = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_10 = V_1;
		NullCheck(L_10);
		L_10->___isFlowing_25 = (bool)1;
		// suckableScript.isSwooshing = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_11 = V_1;
		NullCheck(L_11);
		L_11->___isSwooshing_28 = (bool)1;
		// suckableScript.gameObject.transform.parent = null;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_14);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_14, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// suckableScript.GetComponent<Collider>().enabled = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_15 = V_1;
		NullCheck(L_15);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16;
		L_16 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(L_15, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_16);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_16, (bool)1, NULL);
		// attachedGarbage.Remove(suckableScript);
		List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* L_17 = __this->___attachedGarbage_36;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_18 = V_1;
		NullCheck(L_17);
		bool L_19;
		L_19 = List_1_Remove_m4008E5FF5766D37F39021D56776D933703C05E06(L_17, L_18, List_1_Remove_m4008E5FF5766D37F39021D56776D933703C05E06_RuntimeMethod_var);
		// suckableScript.GetComponent<Rigidbody>().isKinematic = false;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_20 = V_1;
		NullCheck(L_20);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21;
		L_21 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_20, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_21);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_21, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SuckableAnimal::Saved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_Saved_m4C27E383DB82ECE1F1FE0D4FA83CA5DCAF8B875B (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) 
{
	{
		// isSaved = true;
		__this->___isSaved_34 = (bool)1;
		// }
		return;
	}
}
// System.Void SuckableAnimal::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_Update_mF9BFAB030F443D36E858AE0D5DC4A0ED18F5BD18 (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) 
{
	{
		// if (!isDead)
		bool L_0 = __this->___isDead_49;
		if (L_0)
		{
			goto IL_0128;
		}
	}
	{
		// distanceToPlayer = Vector3.Distance(this.gameObject.transform.position, playerObj.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___playerObj_41;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_6, NULL);
		__this->___distanceToPlayer_43 = L_7;
		// if (stayWithinPlayerRange)
		bool L_8 = __this->___stayWithinPlayerRange_44;
		if (!L_8)
		{
			goto IL_006b;
		}
	}
	{
		// if (distanceToPlayer > maxPlayerRange && !isRotating)
		float L_9 = __this->___distanceToPlayer_43;
		float L_10 = __this->___maxPlayerRange_42;
		if ((!(((float)L_9) > ((float)L_10))))
		{
			goto IL_006b;
		}
	}
	{
		bool L_11 = __this->___isRotating_47;
		if (L_11)
		{
			goto IL_006b;
		}
	}
	{
		// isRotating = true;
		__this->___isRotating_47 = (bool)1;
		// targetAngle = Random.Range(20, 60);
		int32_t L_12;
		L_12 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)20), ((int32_t)60), NULL);
		__this->___targetAngle_48 = ((float)L_12);
	}

IL_006b:
	{
		// rigidbody.AddForce(transform.forward * swimSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = ((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___rigidbody_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		float L_16 = __this->___swimSpeed_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		NullCheck(L_13);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_13, L_17, NULL);
		// if (isRotating)
		bool L_18 = __this->___isRotating_47;
		if (!L_18)
		{
			goto IL_014d;
		}
	}
	{
		// float angleBetween = Vector3.Angle(transform.forward, playerObj.transform.position - transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___playerObj_41;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_25, NULL);
		float L_27;
		L_27 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_20, L_26, NULL);
		// if (angleBetween > targetAngle)
		float L_28 = __this->___targetAngle_48;
		if ((!(((float)L_27) > ((float)L_28))))
		{
			goto IL_0120;
		}
	}
	{
		// transform.rotation = Quaternion.LookRotation(Vector3.RotateTowards(transform.forward, playerObj.transform.position - transform.position, 1f * Time.deltaTime, 0.0f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_30, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___playerObj_41;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_34, L_36, NULL);
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_RotateTowards_m884BB56D5A071EF6008F9354D5FF1C9A1913AF92(L_31, L_37, ((float)il2cpp_codegen_multiply((1.0f), L_38)), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_39, NULL);
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_40, NULL);
		return;
	}

IL_0120:
	{
		// isRotating = false;
		__this->___isRotating_47 = (bool)0;
		return;
	}

IL_0128:
	{
		// rigidbody.AddForce((-transform.up) * 0.2f);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_41 = ((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___rigidbody_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, (0.200000003f), NULL);
		NullCheck(L_41);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_41, L_45, NULL);
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Void SuckableAnimal::OnDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_OnDeath_mA87155595ECE4E9298D52B4E3EB21E164CFED485 (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AA4AD8D922A828B55063374C73379A287EB1E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB0E83A3090DA50484C7A1362B1F58B6CAD21B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"The animal {gameObject.name} has died!");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral08AA4AD8D922A828B55063374C73379A287EB1E0, L_1, _stringLiteral8EB0E83A3090DA50484C7A1362B1F58B6CAD21B9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// canBeHooked = true;
		((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___canBeHooked_16 = (bool)1;
		// isDead = true;
		__this->___isDead_49 = (bool)1;
		// rigidbody.velocity = Vector3.down;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = ((Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)__this)->___rigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_4, NULL);
		// GetComponent<Collider>().isTrigger = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_5);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_5, (bool)0, NULL);
		// attachCollider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = __this->___attachCollider_40;
		NullCheck(L_6);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_6, (bool)0, NULL);
		// gameObject.layer = LayerMask.NameToLayer("Trash");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_8;
		L_8 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral90965A2B2C5B2319664CD8D1B8111F63279D7E9B, NULL);
		NullCheck(L_7);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void SuckableAnimal::SuckedAnimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_SuckedAnimal_mF5885A507DF61980DED2E35CEA4861FA08C33B44 (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isDead)
		bool L_0 = __this->___isDead_49;
		if (L_0)
		{
			goto IL_0047;
		}
	}
	{
		// suckItemInterval += 0.10f;
		float L_1 = __this->___suckItemInterval_37;
		__this->___suckItemInterval_37 = ((float)il2cpp_codegen_add(L_1, (0.100000001f)));
		// if (suckItemInterval > suckPowerRequiredPerTrash)
		float L_2 = __this->___suckItemInterval_37;
		float L_3 = __this->___suckPowerRequiredPerTrash_38;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0047;
		}
	}
	{
		// if (attachedGarbage.Count > 0) RelaseRandomTrash();
		List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* L_4 = __this->___attachedGarbage_36;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_inline(L_4, List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// if (attachedGarbage.Count > 0) RelaseRandomTrash();
		SuckableAnimal_RelaseRandomTrash_m0CA41EABC550546A7DDC89F2252CAE1D3B8F012B(__this, NULL);
	}

IL_003c:
	{
		// suckItemInterval = 0;
		__this->___suckItemInterval_37 = (0.0f);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void SuckableAnimal::AttachTrash(Suckable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal_AttachTrash_m0C00AAE7C8FA8DEFE0663DD3420C1F0703EDE581 (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* ___attachedGarbageObj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4F738339515FA493A5F91F3E9806528570FA2771_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attachedGarbage.Add(attachedGarbageObj);
		List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* L_0 = __this->___attachedGarbage_36;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_1 = ___attachedGarbageObj0;
		NullCheck(L_0);
		List_1_Add_m4F738339515FA493A5F91F3E9806528570FA2771_inline(L_0, L_1, List_1_Add_m4F738339515FA493A5F91F3E9806528570FA2771_RuntimeMethod_var);
		// isSaved = false;
		__this->___isSaved_34 = (bool)0;
		// attachedGarbageObj.transform.parent = this.transform;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_2 = ___attachedGarbageObj0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, L_4, NULL);
		// attachedGarbageObj.wasAttached = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_5 = ___attachedGarbageObj0;
		NullCheck(L_5);
		L_5->___wasAttached_17 = (bool)1;
		// attachedGarbageObj.canBeSucked = false;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_6 = ___attachedGarbageObj0;
		NullCheck(L_6);
		L_6->___canBeSucked_15 = (bool)0;
		// attachedGarbageObj.canBeHooked = false;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_7 = ___attachedGarbageObj0;
		NullCheck(L_7);
		L_7->___canBeHooked_16 = (bool)0;
		// attachedGarbageObj.canBeVacuumed = false;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_8 = ___attachedGarbageObj0;
		NullCheck(L_8);
		L_8->___canBeVacuumed_14 = (bool)0;
		// attachedGarbageObj.isFlowing = false;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_9 = ___attachedGarbageObj0;
		NullCheck(L_9);
		L_9->___isFlowing_25 = (bool)0;
		// attachedGarbageObj.isSwooshing = false;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_10 = ___attachedGarbageObj0;
		NullCheck(L_10);
		L_10->___isSwooshing_28 = (bool)0;
		// attachedGarbageObj.GetComponent<Collider>().enabled = false;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_11 = ___attachedGarbageObj0;
		NullCheck(L_11);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12;
		L_12 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(L_11, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_12);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_12, (bool)0, NULL);
		// attachedGarbageObj.GetComponent<Rigidbody>().isKinematic = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_13 = ___attachedGarbageObj0;
		NullCheck(L_13);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14;
		L_14 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_13, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_14);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_14, (bool)1, NULL);
		// if (maxTrashAllowed < attachedGarbage.Count) OnDeath();
		float L_15 = __this->___maxTrashAllowed_39;
		List_1_tCF0F9F7D5838C39DA39C4DE7FB79534236F3EDC6* L_16 = __this->___attachedGarbage_36;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_inline(L_16, List_1_get_Count_mAAAA0A4887A0410BDC08697891868F37CB9B30FF_RuntimeMethod_var);
		if ((!(((float)L_15) < ((float)((float)L_17)))))
		{
			goto IL_0080;
		}
	}
	{
		// if (maxTrashAllowed < attachedGarbage.Count) OnDeath();
		SuckableAnimal_OnDeath_mA87155595ECE4E9298D52B4E3EB21E164CFED485(__this, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void SuckableAnimal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckableAnimal__ctor_m4A00218A8763E37CF3967AC3CDDF08C13C2A2729 (SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* __this, const RuntimeMethod* method) 
{
	{
		// float suckPowerRequiredPerTrash = 5f;
		__this->___suckPowerRequiredPerTrash_38 = (5.0f);
		// public float maxTrashAllowed = 8f;
		__this->___maxTrashAllowed_39 = (8.0f);
		// float maxPlayerRange = 2f;
		__this->___maxPlayerRange_42 = (2.0f);
		// bool stayWithinPlayerRange = true;
		__this->___stayWithinPlayerRange_44 = (bool)1;
		// public float swimSpeed = 2;
		__this->___swimSpeed_45 = (2.0f);
		// public float rotateSpeed = 1.3f;
		__this->___rotateSpeed_46 = (1.29999995f);
		Suckable__ctor_mF233F4A12E9F47A487E4540F400B4DB4A93F71DE(__this, NULL);
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
// System.Void SuckingMachineCollectionController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineCollectionController_Start_mB8268FF23825787BBCBF66687E5C473E2ACB57B1 (SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisSuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044_m03A45648C4EB1400C5844C26E00D12C18CFE1C64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// suckingMachineController = this.GetComponentInParent<SuckingMachineController>();
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_0;
		L_0 = Component_GetComponentInParent_TisSuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044_m03A45648C4EB1400C5844C26E00D12C18CFE1C64(__this, Component_GetComponentInParent_TisSuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044_m03A45648C4EB1400C5844C26E00D12C18CFE1C64_RuntimeMethod_var);
		__this->___suckingMachineController_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___suckingMachineController_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SuckingMachineCollectionController::UpdateDisplay(Suckable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineCollectionController_UpdateDisplay_mAB6603EE65FC88958BF96941804DD5CFAEC40643 (SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46* __this, Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (item != null)
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_0 = ___item0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		// if(item.thumbnail != null) display.sprite = item.thumbnail;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_2 = ___item0;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = L_2->___thumbnail_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// if(item.thumbnail != null) display.sprite = item.thumbnail;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___display_5;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_6 = ___item0;
		NullCheck(L_6);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = L_6->___thumbnail_22;
		NullCheck(L_5);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_5, L_7, NULL);
		return;
	}

IL_0029:
	{
		// else display.sprite = notFound;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___display_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = __this->___notFound_7;
		NullCheck(L_8);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_8, L_9, NULL);
		return;
	}

IL_003b:
	{
		// else display.sprite = emptySprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___display_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___emptySprite_6;
		NullCheck(L_10);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void SuckingMachineCollectionController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineCollectionController_OnTriggerEnter_mC9F3365F2F2BB96648495B9E875B6595DB3E2478 (SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6752DF6098CE82A5A22C9F41956A6D2CF6FF6B10);
		s_Il2CppMethodInitialized = true;
	}
	Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* V_0 = NULL;
	{
		// if (!suckingMachineController.suckedObjects.Contains(other.gameObject) && other.gameObject.tag == "Suckable" && suckingMachineController.triggerValue > 0.5f && !suckingMachineController.coolingDown && !suckingMachineController.storageFull && !suckingMachineController.machineModeSucking)
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_0 = __this->___suckingMachineController_4;
		NullCheck(L_0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = L_0->___suckedObjects_41;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_1, L_3, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_00fc;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_6, NULL);
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930, NULL);
		if (!L_8)
		{
			goto IL_00fc;
		}
	}
	{
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_9 = __this->___suckingMachineController_4;
		NullCheck(L_9);
		float L_10 = L_9->___triggerValue_35;
		if ((!(((float)L_10) > ((float)(0.5f)))))
		{
			goto IL_00fc;
		}
	}
	{
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_11 = __this->___suckingMachineController_4;
		NullCheck(L_11);
		bool L_12 = L_11->___coolingDown_16;
		if (L_12)
		{
			goto IL_00fc;
		}
	}
	{
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_13 = __this->___suckingMachineController_4;
		NullCheck(L_13);
		bool L_14 = L_13->___storageFull_24;
		if (L_14)
		{
			goto IL_00fc;
		}
	}
	{
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_15 = __this->___suckingMachineController_4;
		NullCheck(L_15);
		bool L_16 = L_15->___machineModeSucking_36;
		if (L_16)
		{
			goto IL_00fc;
		}
	}
	{
		// if (other.gameObject.GetComponent<Suckable>().canBeVacuumed)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17 = ___other0;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_19;
		L_19 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_18, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		NullCheck(L_19);
		bool L_20 = L_19->___canBeVacuumed_14;
		if (!L_20)
		{
			goto IL_00fc;
		}
	}
	{
		// Debug.Log("Object SHould be sucked " + other.gameObject.name);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_21 = ___other0;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6752DF6098CE82A5A22C9F41956A6D2CF6FF6B10, L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_24, NULL);
		// Suckable suckable = other.gameObject.GetComponent<Suckable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25 = ___other0;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_26);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_27;
		L_27 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_26, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		V_0 = L_27;
		// suckable.sucked = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_28 = V_0;
		NullCheck(L_28);
		L_28->___sucked_5 = (bool)1;
		// UpdateDisplay(suckable);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_29 = V_0;
		SuckingMachineCollectionController_UpdateDisplay_mAB6603EE65FC88958BF96941804DD5CFAEC40643(__this, L_29, NULL);
		// GameManager gamemanager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_30;
		L_30 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		// gamemanager.cleannessLevel++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_31 = L_30;
		NullCheck(L_31);
		float L_32 = L_31->___cleannessLevel_12;
		NullCheck(L_31);
		L_31->___cleannessLevel_12 = ((float)il2cpp_codegen_add(L_32, (1.0f)));
		// suckingMachineController.suckedObjects.Add(other.gameObject);
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_33 = __this->___suckingMachineController_4;
		NullCheck(L_33);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_34 = L_33->___suckedObjects_41;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_35 = ___other0;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		NullCheck(L_34);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_34, L_36, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// suckingMachineController.ChangeTrashItemAmount(1);
		SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* L_37 = __this->___suckingMachineController_4;
		NullCheck(L_37);
		SuckingMachineController_ChangeTrashItemAmount_m5FF8F781BFB72D02502A54565676E49B97349058(L_37, (1.0f), NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void SuckingMachineCollectionController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineCollectionController__ctor_mFDDEE9CA9FE5D647F692CB2532CC9C3C26C39997 (SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SuckingMachineController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_Start_mA645913FDB01B274F50AAB88D3BC9ADBB2CB8A3A (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	{
		// haptic = Haptic.Instance;
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_0;
		L_0 = Haptic_get_Instance_m08B701575323EC53472DCEB31E639F2B74594403(NULL);
		__this->___haptic_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___haptic_13), (void*)L_0);
		// arrowSpeed /= 200;
		float L_1 = __this->___arrowSpeed_34;
		__this->___arrowSpeed_34 = ((float)(L_1/(200.0f)));
		// modeChangingDelay /= 10;
		float L_2 = __this->___modeChangingDelay_30;
		__this->___modeChangingDelay_30 = ((float)(L_2/(10.0f)));
		// CalculateBarMult();
		SuckingMachineController_CalculateBarMult_m10F935845A2992731C97F145860A3231F9F04CCC(__this, NULL);
		// UpdateRadiatorMaterial();
		SuckingMachineController_UpdateRadiatorMaterial_m9C6EB476FEA0312E83263B9C9EE54A4F71CD8F3D(__this, NULL);
		// }
		return;
	}
}
// System.Void SuckingMachineController::CalculateBarMult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_CalculateBarMult_m10F935845A2992731C97F145860A3231F9F04CCC (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	{
		// tempBarMult = 1 / maxOpTemp;
		float L_0 = __this->___maxOpTemp_15;
		__this->___tempBarMult_17 = ((float)((1.0f)/L_0));
		// temp = 0;
		__this->___temp_18 = (0.0f);
		// capacityBarMult = capacityBar.transform.localScale.x / maxCapacity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___capacityBar_21;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___x_2;
		float L_5 = __this->___maxCapacity_20;
		__this->___capacityBarMult_22 = ((float)(L_4/L_5));
		// trashItemAmount = 0;
		__this->___trashItemAmount_23 = (0.0f);
		// }
		return;
	}
}
// System.Void SuckingMachineController::ChangeTrashItemAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_ChangeTrashItemAmount_m5FF8F781BFB72D02502A54565676E49B97349058 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, float ___amount0, const RuntimeMethod* method) 
{
	{
		// trashItemAmount += amount;
		float L_0 = __this->___trashItemAmount_23;
		float L_1 = ___amount0;
		__this->___trashItemAmount_23 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (trashItemAmount < 0) trashItemAmount = 0;
		float L_2 = __this->___trashItemAmount_23;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0026;
		}
	}
	{
		// if (trashItemAmount < 0) trashItemAmount = 0;
		__this->___trashItemAmount_23 = (0.0f);
	}

IL_0026:
	{
		// if (trashItemAmount > maxCapacity) storageFull = true;
		float L_3 = __this->___trashItemAmount_23;
		float L_4 = __this->___maxCapacity_20;
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_003c;
		}
	}
	{
		// if (trashItemAmount > maxCapacity) storageFull = true;
		__this->___storageFull_24 = (bool)1;
		return;
	}

IL_003c:
	{
		// else storageFull = false;
		__this->___storageFull_24 = (bool)0;
		// }
		return;
	}
}
// System.Void SuckingMachineController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_Update_mE389D74A1159D5405AEC716DF57038C5BABB2DF5 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B13_0 = NULL;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B14_1 = NULL;
	{
		// triggerValue = shootTriggerInput.action.ReadValue<float>();
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_0 = (&__this->___shootTriggerInput_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_0, NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_1, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		__this->___triggerValue_35 = L_2;
		// if (triggerValue > 0.5f && !disableSuckButton && !machineModeSucking)
		float L_3 = __this->___triggerValue_35;
		if ((!(((float)L_3) > ((float)(0.5f)))))
		{
			goto IL_0055;
		}
	}
	{
		bool L_4 = __this->___disableSuckButton_8;
		if (L_4)
		{
			goto IL_0055;
		}
	}
	{
		bool L_5 = __this->___machineModeSucking_36;
		if (L_5)
		{
			goto IL_0055;
		}
	}
	{
		// if (!coolingDown && !storageFull) sucking = true;
		bool L_6 = __this->___coolingDown_16;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		bool L_7 = __this->___storageFull_24;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		// if (!coolingDown && !storageFull) sucking = true;
		__this->___sucking_40 = (bool)1;
		goto IL_005c;
	}

IL_004c:
	{
		// else sucking = false;
		__this->___sucking_40 = (bool)0;
		goto IL_005c;
	}

IL_0055:
	{
		// else sucking = false;
		__this->___sucking_40 = (bool)0;
	}

IL_005c:
	{
		// if (suckingMachineModeInput.action.IsPressed() && !modeButtonBeingPressed && !gunModeChanging)
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_8 = (&__this->___suckingMachineModeInput_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9;
		L_9 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_9, NULL);
		if (!L_10)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_11 = __this->___modeButtonBeingPressed_37;
		if (L_11)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_12 = __this->___gunModeChanging_31;
		if (L_12)
		{
			goto IL_00c2;
		}
	}
	{
		// modeButtonBeingPressed = true;
		__this->___modeButtonBeingPressed_37 = (bool)1;
		// machineModeSucking = machineModeSucking ? false : true;
		bool L_13 = __this->___machineModeSucking_36;
		G_B12_0 = __this;
		if (L_13)
		{
			G_B13_0 = __this;
			goto IL_0091;
		}
	}
	{
		G_B14_0 = 1;
		G_B14_1 = G_B12_0;
		goto IL_0092;
	}

IL_0091:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
	}

IL_0092:
	{
		NullCheck(G_B14_1);
		G_B14_1->___machineModeSucking_36 = (bool)G_B14_0;
		// ChangeGunMode(machineModeSucking);
		bool L_14 = __this->___machineModeSucking_36;
		SuckingMachineController_ChangeGunMode_mD86A54EC37E7CAA55FF142D401C54400F7B32A88(__this, L_14, NULL);
		// fanController.machineModeChanging = true;
		FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* L_15 = __this->___fanController_38;
		NullCheck(L_15);
		L_15->___machineModeChanging_8 = (bool)1;
		// fanController.machineModeSucking = machineModeSucking;
		FanController_t65AB708135DD322154511C4636B441CCA2BBA99A* L_16 = __this->___fanController_38;
		bool L_17 = __this->___machineModeSucking_36;
		NullCheck(L_16);
		L_16->___machineModeSucking_9 = L_17;
		goto IL_00db;
	}

IL_00c2:
	{
		// else if (!suckingMachineModeInput.action.IsPressed()) modeButtonBeingPressed = false;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_18 = (&__this->___suckingMachineModeInput_12);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_19;
		L_19 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_18, NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_19, NULL);
		if (L_20)
		{
			goto IL_00db;
		}
	}
	{
		// else if (!suckingMachineModeInput.action.IsPressed()) modeButtonBeingPressed = false;
		__this->___modeButtonBeingPressed_37 = (bool)0;
	}

IL_00db:
	{
		// if (machineModeSucking && triggerValue == 1 && !shooting)
		bool L_21 = __this->___machineModeSucking_36;
		if (!L_21)
		{
			goto IL_0107;
		}
	}
	{
		float L_22 = __this->___triggerValue_35;
		if ((!(((float)L_22) == ((float)(1.0f)))))
		{
			goto IL_0107;
		}
	}
	{
		bool L_23 = __this->___shooting_39;
		if (L_23)
		{
			goto IL_0107;
		}
	}
	{
		// shooting = true;
		__this->___shooting_39 = (bool)1;
		// Shoot();
		SuckingMachineController_Shoot_m2B89AE7E9056D567BDFC6B829E8311907C963761(__this, NULL);
		goto IL_011b;
	}

IL_0107:
	{
		// else if (triggerValue < 1) shooting = false;
		float L_24 = __this->___triggerValue_35;
		if ((!(((float)L_24) < ((float)(1.0f)))))
		{
			goto IL_011b;
		}
	}
	{
		// else if (triggerValue < 1) shooting = false;
		__this->___shooting_39 = (bool)0;
	}

IL_011b:
	{
		// UpdateBars();
		SuckingMachineController_UpdateBars_mA0FB7D64952D63B007940ED1AFC703245F4BD09E(__this, NULL);
		// }
		return;
	}
}
// System.Void SuckingMachineController::ChangeGunMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_ChangeGunMode_mD86A54EC37E7CAA55FF142D401C54400F7B32A88 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, bool ___shooting0, const RuntimeMethod* method) 
{
	{
		// gunModeChanging = true;
		__this->___gunModeChanging_31 = (bool)1;
		// modeChangingTime = 0;
		__this->___modeChangingTime_32 = (0.0f);
		// if (shooting)
		bool L_0 = ___shooting0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// shootingModeDirection = 180;
		__this->___shootingModeDirection_33 = (180.0f);
		return;
	}

IL_0021:
	{
		// shootingModeDirection = 0;
		__this->___shootingModeDirection_33 = (0.0f);
		// }
		return;
	}
}
// System.Void SuckingMachineController::ArrowChanging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_ArrowChanging_m8DB26AFACC9AF1407BC4C46716BDB1D5331584BB (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	{
		// modeChangingTime += Time.fixedDeltaTime;
		float L_0 = __this->___modeChangingTime_32;
		float L_1;
		L_1 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		__this->___modeChangingTime_32 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (modeChangingTime > modeChangingDelay / 2 && modeChangingTime < modeChangingDelay)
		float L_2 = __this->___modeChangingTime_32;
		float L_3 = __this->___modeChangingDelay_30;
		if ((!(((float)L_2) > ((float)((float)(L_3/(2.0f)))))))
		{
			goto IL_006c;
		}
	}
	{
		float L_4 = __this->___modeChangingTime_32;
		float L_5 = __this->___modeChangingDelay_30;
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_006c;
		}
	}
	{
		// modeArrow.transform.position += modeArrow.transform.forward * arrowSpeed;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___modeArrow_29;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___modeArrow_29;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		float L_13 = __this->___arrowSpeed_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_14, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_15, NULL);
		goto IL_00b6;
	}

IL_006c:
	{
		// else if (modeChangingTime < modeChangingDelay / 2)
		float L_16 = __this->___modeChangingTime_32;
		float L_17 = __this->___modeChangingDelay_30;
		if ((!(((float)L_16) < ((float)((float)(L_17/(2.0f)))))))
		{
			goto IL_00b6;
		}
	}
	{
		// modeArrow.transform.position -= modeArrow.transform.forward * arrowSpeed;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___modeArrow_29;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___modeArrow_29;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_23, NULL);
		float L_25 = __this->___arrowSpeed_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_26, NULL);
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_27, NULL);
	}

IL_00b6:
	{
		// if(modeChangingTime < modeChangingDelay * 2 - modeChangingDelay / 2 && modeChangingTime > modeChangingDelay / 2)
		float L_28 = __this->___modeChangingTime_32;
		float L_29 = __this->___modeChangingDelay_30;
		float L_30 = __this->___modeChangingDelay_30;
		if ((!(((float)L_28) < ((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_29, (2.0f))), ((float)(L_30/(2.0f)))))))))
		{
			goto IL_0110;
		}
	}
	{
		float L_31 = __this->___modeChangingTime_32;
		float L_32 = __this->___modeChangingDelay_30;
		if ((!(((float)L_31) > ((float)((float)(L_32/(2.0f)))))))
		{
			goto IL_0110;
		}
	}
	{
		// modeArrow.transform.localRotation = Quaternion.Euler(0, -7, shootingModeDirection);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___modeArrow_29;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		float L_35 = __this->___shootingModeDirection_33;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (-7.0f), L_35, NULL);
		NullCheck(L_34);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_34, L_36, NULL);
	}

IL_0110:
	{
		// if (modeChangingTime > modeChangingDelay)
		float L_37 = __this->___modeChangingTime_32;
		float L_38 = __this->___modeChangingDelay_30;
		if ((!(((float)L_37) > ((float)L_38))))
		{
			goto IL_0125;
		}
	}
	{
		// gunModeChanging = false;
		__this->___gunModeChanging_31 = (bool)0;
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void SuckingMachineController::UpdateBars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_UpdateBars_mA0FB7D64952D63B007940ED1AFC703245F4BD09E (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float capacityBarX = trashItemAmount * capacityBarMult;
		float L_0 = __this->___trashItemAmount_23;
		float L_1 = __this->___capacityBarMult_22;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// capacityBar.transform.localScale = new Vector3(capacityBarX, capacityBar.transform.localScale.y, capacityBar.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___capacityBar_21;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		float L_4 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___capacityBar_21;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		float L_8 = L_7.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___capacityBar_21;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_4, L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_13, NULL);
		// }
		return;
	}
}
// System.Void SuckingMachineController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_FixedUpdate_m7E59043D06577CE273A809CE71F390A3FE747AC1 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	{
		// if(sucking) Sucking();
		bool L_0 = __this->___sucking_40;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(sucking) Sucking();
		SuckingMachineController_Sucking_m7C858319D15D2DB8213F153780110C138C395D8C(__this, NULL);
	}

IL_000e:
	{
		// CooldownMechanics();
		SuckingMachineController_CooldownMechanics_mCB4DF86803FF5A264CFF8EFE4FA5F406BAD3F2FE(__this, NULL);
		// if (gunModeChanging) ArrowChanging();
		bool L_1 = __this->___gunModeChanging_31;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// if (gunModeChanging) ArrowChanging();
		SuckingMachineController_ArrowChanging_m8DB26AFACC9AF1407BC4C46716BDB1D5331584BB(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void SuckingMachineController::Sucking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_Sucking_m7C858319D15D2DB8213F153780110C138C395D8C (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_m50B072FDA6ED8ECA971F4D35E0996EA2D2B512B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95BBE583587BFB3CA7025B9D3AA1DBD7C0F48C11);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// float suckValue = triggerValue * suckPower;
		float L_0 = __this->___triggerValue_35;
		float L_1 = __this->___suckPower_7;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// Vector3 origin = pivot.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pivot_14;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_1 = L_4;
		// RaycastHit[] coneHits = physics.ConeCastAll(origin, radius, transform.forward, depth, angle);
		Physics_t1244C2983AEAFA149425AFFC3DF53BC91C18ED56* L_5 = __this->___physics_42;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = __this->___radius_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		float L_10 = __this->___depth_5;
		float L_11 = __this->___angle_6;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_12;
		L_12 = ConeCast_ConeCastAll_mB8B6EF562C96E08ACB9F20FCE152511A1D7FCB7B(L_5, L_6, L_7, L_9, L_10, L_11, NULL);
		V_2 = L_12;
		// if (coneHits.Length > 0)
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_13 = V_2;
		NullCheck(L_13);
		if (!(((RuntimeArray*)L_13)->max_length))
		{
			goto IL_00fd;
		}
	}
	{
		// for (int i = 0; i < coneHits.Length; i++)
		V_3 = 0;
		goto IL_00f4;
	}

IL_0057:
	{
		// if (coneHits[i].collider.gameObject.tag == "Suckable")
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16;
		L_16 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), NULL);
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930, NULL);
		if (!L_19)
		{
			goto IL_00b3;
		}
	}
	{
		// coneHits[i].collider.gameObject.GetComponent<Suckable>().Suck(origin + transform.forward * -0.5f, suckValue, this);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_22;
		L_22 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), NULL);
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_24;
		L_24 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_23, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, (-0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_28, NULL);
		float L_30 = V_0;
		NullCheck(L_24);
		Suckable_Suck_mD553A7856DEE7C905925426F11DA0AEDBF7C9001(L_24, L_29, L_30, __this, NULL);
		goto IL_00f0;
	}

IL_00b3:
	{
		// else if (coneHits[i].collider.gameObject.tag == "SuckableAnimal")
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_31 = V_2;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_33;
		L_33 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), NULL);
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_34, NULL);
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral95BBE583587BFB3CA7025B9D3AA1DBD7C0F48C11, NULL);
		if (!L_36)
		{
			goto IL_00f0;
		}
	}
	{
		// coneHits[i].collider.gameObject.GetComponent<SuckableAnimal>().SuckedAnimal();
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_37 = V_2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_39;
		L_39 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), NULL);
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		NullCheck(L_40);
		SuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD* L_41;
		L_41 = GameObject_GetComponent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_m50B072FDA6ED8ECA971F4D35E0996EA2D2B512B5(L_40, GameObject_GetComponent_TisSuckableAnimal_tF41E8EB1B989FE44A565BAD7287BB2572641B3AD_m50B072FDA6ED8ECA971F4D35E0996EA2D2B512B5_RuntimeMethod_var);
		NullCheck(L_41);
		SuckableAnimal_SuckedAnimal_mF5885A507DF61980DED2E35CEA4861FA08C33B44(L_41, NULL);
	}

IL_00f0:
	{
		// for (int i = 0; i < coneHits.Length; i++)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00f4:
	{
		// for (int i = 0; i < coneHits.Length; i++)
		int32_t L_43 = V_3;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_44 = V_2;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0057;
		}
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void SuckingMachineController::CooldownMechanics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_CooldownMechanics_mCB4DF86803FF5A264CFF8EFE4FA5F406BAD3F2FE (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	float G_B6_0 = 0.0f;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B6_1 = NULL;
	float G_B1_0 = 0.0f;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B1_1 = NULL;
	float G_B5_0 = 0.0f;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B5_1 = NULL;
	float G_B2_0 = 0.0f;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B2_1 = NULL;
	float G_B4_0 = 0.0f;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B4_1 = NULL;
	float G_B3_0 = 0.0f;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B3_1 = NULL;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* G_B7_2 = NULL;
	{
		// temp += coolingDown ? 0 : storageFull ? 0 : machineModeSucking ? 0 : triggerValue / 10;
		float L_0 = __this->___temp_18;
		bool L_1 = __this->___coolingDown_16;
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B6_0 = L_0;
			G_B6_1 = __this;
			goto IL_003b;
		}
	}
	{
		bool L_2 = __this->___storageFull_24;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if (L_2)
		{
			G_B5_0 = G_B1_0;
			G_B5_1 = G_B1_1;
			goto IL_0034;
		}
	}
	{
		bool L_3 = __this->___machineModeSucking_36;
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
		if (L_3)
		{
			G_B4_0 = G_B2_0;
			G_B4_1 = G_B2_1;
			goto IL_002d;
		}
	}
	{
		float L_4 = __this->___triggerValue_35;
		G_B7_0 = ((float)(L_4/(10.0f)));
		G_B7_1 = G_B3_0;
		G_B7_2 = G_B3_1;
		goto IL_0040;
	}

IL_002d:
	{
		G_B7_0 = (0.0f);
		G_B7_1 = G_B4_0;
		G_B7_2 = G_B4_1;
		goto IL_0040;
	}

IL_0034:
	{
		G_B7_0 = (0.0f);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0040;
	}

IL_003b:
	{
		G_B7_0 = (0.0f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0040:
	{
		NullCheck(G_B7_2);
		G_B7_2->___temp_18 = ((float)il2cpp_codegen_add(G_B7_1, G_B7_0));
		// if (temp > maxOpTemp) coolingDown = true;
		float L_5 = __this->___temp_18;
		float L_6 = __this->___maxOpTemp_15;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_005b;
		}
	}
	{
		// if (temp > maxOpTemp) coolingDown = true;
		__this->___coolingDown_16 = (bool)1;
	}

IL_005b:
	{
		// temp -= 0.05f;
		float L_7 = __this->___temp_18;
		__this->___temp_18 = ((float)il2cpp_codegen_subtract(L_7, (0.0500000007f)));
		// if(coolingDown) temp -= 0.15f;
		bool L_8 = __this->___coolingDown_16;
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		// if(coolingDown) temp -= 0.15f;
		float L_9 = __this->___temp_18;
		__this->___temp_18 = ((float)il2cpp_codegen_subtract(L_9, (0.150000006f)));
	}

IL_0087:
	{
		// if(temp < 0)
		float L_10 = __this->___temp_18;
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_00a6;
		}
	}
	{
		// coolingDown = false;
		__this->___coolingDown_16 = (bool)0;
		// temp = 0;
		__this->___temp_18 = (0.0f);
	}

IL_00a6:
	{
		// UpdateRadiatorMaterial();
		SuckingMachineController_UpdateRadiatorMaterial_m9C6EB476FEA0312E83263B9C9EE54A4F71CD8F3D(__this, NULL);
		// }
		return;
	}
}
// System.Void SuckingMachineController::UpdateRadiatorMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_UpdateRadiatorMaterial_m9C6EB476FEA0312E83263B9C9EE54A4F71CD8F3D (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float tempPercentage = temp * tempBarMult;
		float L_0 = __this->___temp_18;
		float L_1 = __this->___tempBarMult_17;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// heatColor.texture.SetPixel(1, 1, Color.Lerp(Color.gray,heatAlbedoColor, tempPercentage));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___heatColor_27;
		NullCheck(L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___heatAlbedoColor_25;
		float L_6 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_4, L_5, L_6, NULL);
		NullCheck(L_3);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_3, 1, 1, L_7, NULL);
		// heatColor.texture.Apply();
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___heatColor_27;
		NullCheck(L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_8, NULL);
		NullCheck(L_9);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_9, NULL);
		// heatEmmision.texture.SetPixel(1, 1, Color.Lerp(Color.black, heatEmmisionColor, tempPercentage));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = __this->___heatEmmision_28;
		NullCheck(L_10);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11;
		L_11 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_10, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___heatEmmisionColor_26;
		float L_14 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_12, L_13, L_14, NULL);
		NullCheck(L_11);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_11, 1, 1, L_15, NULL);
		// heatEmmision.texture.Apply();
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = __this->___heatEmmision_28;
		NullCheck(L_16);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17;
		L_17 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_16, NULL);
		NullCheck(L_17);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_17, NULL);
		// haptic.SendHapticsRightController(tempPercentage/2,0.1f * Time.deltaTime);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_18 = __this->___haptic_13;
		float L_19 = V_0;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_18);
		Haptic_SendHapticsRightController_m765E5DD565AE8A77B1BEB0988939628C3E9A1492(L_18, ((float)(L_19/(2.0f))), ((float)il2cpp_codegen_multiply((0.100000001f), L_20)), NULL);
		// }
		return;
	}
}
// System.Void SuckingMachineController::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController_Shoot_m2B89AE7E9056D567BDFC6B829E8311907C963761 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (suckedObjects.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___suckedObjects_41;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0177;
		}
	}
	{
		// GameObject suckedItem = suckedObjects.Last();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___suckedObjects_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B(L_2, Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		V_0 = L_3;
		// suckedItem.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.200000003f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
		// suckedItem.transform.rotation = this.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_10, NULL);
		// suckedItem.transform.position = this.transform.position + (this.transform.forward * 0.3f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_17, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_18, NULL);
		// suckedItem.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_19, NULL);
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// Rigidbody suckedItemRigidbody = suckedItem.gameObject.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_21, NULL);
		NullCheck(L_22);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_23;
		L_23 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_22, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// suckedItemRigidbody.angularVelocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_24);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_24, L_25, NULL);
		// suckedItemRigidbody.velocity = (transform.forward * 20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, (20.0f), NULL);
		NullCheck(L_24);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_24, L_28, NULL);
		// Suckable suckedItemSuckable = suckedItem.gameObject.GetComponent<Suckable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_0;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_29, NULL);
		NullCheck(L_30);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_31;
		L_31 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_30, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		// suckedItemSuckable.isGrowing = true;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_32 = L_31;
		NullCheck(L_32);
		L_32->___isGrowing_20 = (bool)1;
		// suckedItemSuckable.wasAttached = false;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_33 = L_32;
		NullCheck(L_33);
		L_33->___wasAttached_17 = (bool)0;
		// suckedItemSuckable.flowDirection = transform.forward;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_34 = L_33;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_35, NULL);
		NullCheck(L_34);
		L_34->___flowDirection_23 = L_36;
		// suckedItemSuckable.flowSpeed = 1;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_37 = L_34;
		NullCheck(L_37);
		L_37->___flowSpeed_24 = (1.0f);
		// suckedItemSuckable.SwooshIntensity = 0;
		NullCheck(L_37);
		L_37->___SwooshIntensity_26 = (0.0f);
		// suckedObjects.Remove(suckedItem);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_38 = __this->___suckedObjects_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_0;
		NullCheck(L_38);
		bool L_40;
		L_40 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_38, L_39, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// if(suckedObjects.Count > 0) collectionController.UpdateDisplay(suckedObjects.Last().GetComponent<Suckable>());
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_41 = __this->___suckedObjects_41;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_41, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_42) <= ((int32_t)0)))
		{
			goto IL_0135;
		}
	}
	{
		// if(suckedObjects.Count > 0) collectionController.UpdateDisplay(suckedObjects.Last().GetComponent<Suckable>());
		SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46* L_43 = __this->___collectionController_19;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_44 = __this->___suckedObjects_41;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B(L_44, Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		NullCheck(L_45);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_46;
		L_46 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_45, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		NullCheck(L_43);
		SuckingMachineCollectionController_UpdateDisplay_mAB6603EE65FC88958BF96941804DD5CFAEC40643(L_43, L_46, NULL);
		goto IL_0141;
	}

IL_0135:
	{
		// else collectionController.UpdateDisplay(null);
		SuckingMachineCollectionController_t2D4C499A74FDA62B35500FECE0C177AF25FC8D46* L_47 = __this->___collectionController_19;
		NullCheck(L_47);
		SuckingMachineCollectionController_UpdateDisplay_mAB6603EE65FC88958BF96941804DD5CFAEC40643(L_47, (Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4*)NULL, NULL);
	}

IL_0141:
	{
		// GameManager gamemanager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_48;
		L_48 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		// gamemanager.cleannessLevel--;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_49 = L_48;
		NullCheck(L_49);
		float L_50 = L_49->___cleannessLevel_12;
		NullCheck(L_49);
		L_49->___cleannessLevel_12 = ((float)il2cpp_codegen_subtract(L_50, (1.0f)));
		// ChangeTrashItemAmount(-1);
		SuckingMachineController_ChangeTrashItemAmount_m5FF8F781BFB72D02502A54565676E49B97349058(__this, (-1.0f), NULL);
		// haptic.SendHapticsRightController(1,0.25f);
		Haptic_tC8A67D343F25A7234E81452F710387326151AEDB* L_51 = __this->___haptic_13;
		NullCheck(L_51);
		Haptic_SendHapticsRightController_m765E5DD565AE8A77B1BEB0988939628C3E9A1492(L_51, (1.0f), (0.25f), NULL);
	}

IL_0177:
	{
		// }
		return;
	}
}
// System.Void SuckingMachineController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuckingMachineController__ctor_m3F6175B2B0561D16A00A73809E074A4B87E62B05 (SuckingMachineController_t9713CA3159AC464C674F925AB5EDA3E26D85A044* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TrashChute::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChute_Start_mB1C6DF7A24D18E367A016437C38EC6FA0ABA9CF7 (TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* __this, const RuntimeMethod* method) 
{
	{
		// gameManager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		__this->___gameManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void TrashChute::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChute_FixedUpdate_m4E565A3ECB919D74127854ED31F8EB9F8DB1ED34 (TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TrashChute::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChute_Update_m5E98FD337F7402360FC0E38375EFA664514F56E7 (TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(itemsToEject.Count > 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___itemsToEject_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		// ejectTime += Time.deltaTime;
		float L_2 = __this->___ejectTime_9;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___ejectTime_9 = ((float)il2cpp_codegen_add(L_2, L_3));
		// if(ejectTime > ejectDelay)
		float L_4 = __this->___ejectTime_9;
		float L_5 = __this->___ejectDelay_8;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		// ejectTime = 0;
		__this->___ejectTime_9 = (0.0f);
		// EjectItem(itemsToEject[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___itemsToEject_11;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		TrashChute_EjectItem_m08653AE78F5A493773EF6475490B10A9D35797BB(__this, L_7, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void TrashChute::EjectItem(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChute_EjectItem_m08653AE78F5A493773EF6475490B10A9D35797BB (TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager.onStreak = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = __this->___gameManager_7;
		NullCheck(L_0);
		L_0->___onStreak_9 = (bool)0;
		// item.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___item0;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// item.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___item0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.200000003f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_3, L_4, NULL);
		// item.gameObject.transform.position = ejectTransform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___item0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___ejectTransform_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_9, NULL);
		// Rigidbody itemRigidbody = item.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___item0;
		NullCheck(L_10);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11;
		L_11 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_10, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// itemRigidbody.AddForce(ejectTransform.forward * ejectForce);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___ejectTransform_5;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		float L_15 = __this->___ejectForce_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_12);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_12, L_16, NULL);
		// itemRigidbody.velocity = ejectTransform.forward * ejectForce;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___ejectTransform_5;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_17, NULL);
		float L_19 = __this->___ejectForce_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_20, NULL);
		// Suckable itemSuckable = item.gameObject.GetComponent<Suckable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___item0;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_21, NULL);
		NullCheck(L_22);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_23;
		L_23 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_22, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		// itemSuckable.flowDirection = ejectTransform.forward;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_24 = L_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___ejectTransform_5;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_25, NULL);
		NullCheck(L_24);
		L_24->___flowDirection_23 = L_26;
		// itemSuckable.flowSpeed = 1;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_27 = L_24;
		NullCheck(L_27);
		L_27->___flowSpeed_24 = (1.0f);
		// itemSuckable.isGrowing = true;
		NullCheck(L_27);
		L_27->___isGrowing_20 = (bool)1;
		// itemsToEject.Remove(item);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_28 = __this->___itemsToEject_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = ___item0;
		NullCheck(L_28);
		bool L_30;
		L_30 = List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485(L_28, L_29, List_1_Remove_mCCE85D4D5326536C4B214C73D07030F4CCD18485_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TrashChute::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChute_OnTriggerEnter_mCB7435A69369DA93F6D5CAD0021F0D1001F431C7 (TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Suckable")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// Suckable suckable = other.gameObject.GetComponent<Suckable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___other0;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_6;
		L_6 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_5, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		// suckable.trashChute = this;
		NullCheck(L_6);
		L_6->___trashChute_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___trashChute_7), (void*)__this);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void TrashChute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChute__ctor_m87F716017D96CBD6E155F3FCD2D64ED1D36FE96F (TrashChute_tBB58645A68488D1CE85D39E3275EA79051800859* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> itemsToEject = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___itemsToEject_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemsToEject_11), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TrashChuteSucking::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChuteSucking_Start_m44D07C2941993AEC1DDCED75DD5DDB5D7ECC2546 (TrashChuteSucking_t1D53D116AE39B10108C546A4BEC867E4BF37839C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TrashChuteSucking::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChuteSucking_OnTriggerEnter_mC5C08915DA48486BAEDD8546E1EE6594ECD49A20 (TrashChuteSucking_t1D53D116AE39B10108C546A4BEC867E4BF37839C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (other.gameObject.tag == "Suckable")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral53527D2D7DB4D5362F8B80174F6D45C747BC3930, NULL);
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		// Vector3 suckDirection = transform.position - other.gameObject.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___other0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_9, NULL);
		V_0 = L_10;
		// suckDirection /= suckDirection.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_11, L_12, NULL);
		V_0 = L_13;
		// suckDirection *= suckForce;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = __this->___suckForce_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		V_0 = L_16;
		// other.gameObject.GetComponent<Rigidbody>().AddForce(suckDirection);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17 = ___other0;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_19;
		L_19 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_18, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_0;
		NullCheck(L_19);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_19, L_20, NULL);
		// Suckable itemSuckable = other.GetComponent<Suckable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_21 = ___other0;
		NullCheck(L_21);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_22;
		L_22 = Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80(L_21, Component_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m9F2F3A7F61866243F2156B8B3E5029A085040C80_RuntimeMethod_var);
		// itemSuckable.flowDirection = suckDirection;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_23 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		NullCheck(L_23);
		L_23->___flowDirection_23 = L_24;
		// itemSuckable.flowSpeed = suckDirection.magnitude;
		float L_25;
		L_25 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		NullCheck(L_23);
		L_23->___flowSpeed_24 = L_25;
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void TrashChuteSucking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashChuteSucking__ctor_m512288133C83C2EB0EF3419CB2F98165D89E9039 (TrashChuteSucking_t1D53D116AE39B10108C546A4BEC867E4BF37839C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TrashGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_Start_mFA7B31CCD86CF6C68010EE464FCBF5B2DDA0B004 (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach(GameObject item in generalTrash)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___generalTrash_12;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach(GameObject item in generalTrash)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// item.SetActive(false);
				NullCheck(L_2);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
			}

IL_001b_1:
			{
				// foreach(GameObject item in generalTrash)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// foreach (GameObject item in plasticTrash)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___plasticTrash_13;
		NullCheck(L_4);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_5;
		L_5 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_4, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004f_1;
			}

IL_0042_1:
			{
				// foreach (GameObject item in plasticTrash)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
				L_6 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// item.SetActive(false);
				NullCheck(L_6);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
			}

IL_004f_1:
			{
				// foreach (GameObject item in plasticTrash)
				bool L_7;
				L_7 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0042_1;
				}
			}
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// foreach (GameObject item in wasteTrash)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___wasteTrash_14;
		NullCheck(L_8);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_9;
		L_9 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_8, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0083_1;
			}

IL_0076_1:
			{
				// foreach (GameObject item in wasteTrash)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// item.SetActive(false);
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
			}

IL_0083_1:
			{
				// foreach (GameObject item in wasteTrash)
				bool L_11;
				L_11 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0076_1;
				}
			}
			{
				goto IL_009c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009c:
	{
		// BakeWaveValues();
		TrashGenerator_BakeWaveValues_m6A154874705B82CC42194E53C22D4DB14884D5AB(__this, NULL);
		// }
		return;
	}
}
// System.Void TrashGenerator::BakeWaveValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_BakeWaveValues_m6A154874705B82CC42194E53C22D4DB14884D5AB (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4BA2EB796E9F9D3BE28F0A6CFE9240FF8D1FED44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m81DB14AA57C09427AA6DC34D462C6DE1BE4CB59C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE2E801611054E5282D7EDB03F8D97409346B2D64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD412BBF12BE17D0825D883DA192F5A61B72D5C1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// maxGameTimeMinute *= 60;
		float L_0 = __this->___maxGameTimeMinute_19;
		__this->___maxGameTimeMinute_19 = ((float)il2cpp_codegen_multiply(L_0, (60.0f)));
		// for (int i = 0; i < maxGameTimeMinute; i++)
		V_0 = 0;
		goto IL_00cc;
	}

IL_0019:
	{
		// float j = 0;
		V_1 = (0.0f);
		// foreach (WaveSettings wave in waves)
		List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* L_1 = __this->___waves_20;
		NullCheck(L_1);
		Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664 L_2;
		L_2 = List_1_GetEnumerator_mD412BBF12BE17D0825D883DA192F5A61B72D5C1B(L_1, List_1_GetEnumerator_mD412BBF12BE17D0825D883DA192F5A61B72D5C1B_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ae:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4BA2EB796E9F9D3BE28F0A6CFE9240FF8D1FED44((&V_2), Enumerator_Dispose_m4BA2EB796E9F9D3BE28F0A6CFE9240FF8D1FED44_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a3_1;
			}

IL_002d_1:
			{
				// foreach (WaveSettings wave in waves)
				WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE L_3;
				L_3 = Enumerator_get_Current_mE2E801611054E5282D7EDB03F8D97409346B2D64_inline((&V_2), Enumerator_get_Current_mE2E801611054E5282D7EDB03F8D97409346B2D64_RuntimeMethod_var);
				// float d = wave.timeSeconds;
				WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE L_4 = L_3;
				float L_5 = L_4.___timeSeconds_0;
				V_3 = L_5;
				// float s = wave.duration;
				WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE L_6 = L_4;
				float L_7 = L_6.___duration_1;
				V_4 = L_7;
				// float a = wave.intesity;
				float L_8 = L_6.___intesity_2;
				// float k = 360 / s;
				float L_9 = V_4;
				V_5 = ((float)((360.0f)/L_9));
				// float h = a / 2;
				V_6 = ((float)(L_8/(2.0f)));
				// float f = h * Mathf.Cos((i - d) * k * Mathf.PI / 180) + h;
				float L_10 = V_6;
				int32_t L_11 = V_0;
				float L_12 = V_3;
				float L_13 = V_5;
				float L_14;
				L_14 = cosf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_11), L_12)), L_13)), (3.14159274f)))/(180.0f))));
				float L_15 = V_6;
				V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_10, L_14)), L_15));
				// if(i < -s/2 +d || i > s/2+d) f = 0;
				int32_t L_16 = V_0;
				float L_17 = V_4;
				float L_18 = V_3;
				if ((((float)((float)L_16)) < ((float)((float)il2cpp_codegen_add(((float)(((-L_17))/(2.0f))), L_18)))))
				{
					goto IL_0097_1;
				}
			}
			{
				int32_t L_19 = V_0;
				float L_20 = V_4;
				float L_21 = V_3;
				if ((!(((float)((float)L_19)) > ((float)((float)il2cpp_codegen_add(((float)(L_20/(2.0f))), L_21))))))
				{
					goto IL_009e_1;
				}
			}

IL_0097_1:
			{
				// if(i < -s/2 +d || i > s/2+d) f = 0;
				V_7 = (0.0f);
			}

IL_009e_1:
			{
				// j += f;
				float L_22 = V_1;
				float L_23 = V_7;
				V_1 = ((float)il2cpp_codegen_add(L_22, L_23));
			}

IL_00a3_1:
			{
				// foreach (WaveSettings wave in waves)
				bool L_24;
				L_24 = Enumerator_MoveNext_m81DB14AA57C09427AA6DC34D462C6DE1BE4CB59C((&V_2), Enumerator_MoveNext_m81DB14AA57C09427AA6DC34D462C6DE1BE4CB59C_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		// waveIntensityValues.Add(j);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_25 = __this->___waveIntensityValues_21;
		float L_26 = V_1;
		NullCheck(L_25);
		List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_inline(L_25, L_26, List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_RuntimeMethod_var);
		// for (int i = 0; i < maxGameTimeMinute; i++)
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00cc:
	{
		// for (int i = 0; i < maxGameTimeMinute; i++)
		int32_t L_28 = V_0;
		float L_29 = __this->___maxGameTimeMinute_19;
		if ((((float)((float)L_28)) < ((float)L_29)))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TrashGenerator::WaveCalculations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_WaveCalculations_mD871EC404E13229ECDB3BACFD3AACC9AD9EDFBA3 (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCD5400ADE86636B75D19AA37097E8992E3FA1784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0767326DBE1DD31063256737FD019DC6682353E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F64786E077EF3E8D77A6205AEB1DEFA542E2980);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// t += Time.deltaTime;
		float L_0 = __this->___t_23;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___t_23 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(waves.Count != 0)
		List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* L_2 = __this->___waves_20;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mCD5400ADE86636B75D19AA37097E8992E3FA1784_inline(L_2, List_1_get_Count_mCD5400ADE86636B75D19AA37097E8992E3FA1784_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0099;
		}
	}
	{
		// if (t > tW && t < maxGameTimeMinute)
		float L_4 = __this->___t_23;
		int32_t L_5 = __this->___tW_24;
		if ((!(((float)L_4) > ((float)((float)L_5)))))
		{
			goto IL_0099;
		}
	}
	{
		float L_6 = __this->___t_23;
		float L_7 = __this->___maxGameTimeMinute_19;
		if ((!(((float)L_6) < ((float)L_7))))
		{
			goto IL_0099;
		}
	}
	{
		// spawnRate = waveIntensityValues[tW];
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_8 = __this->___waveIntensityValues_21;
		int32_t L_9 = __this->___tW_24;
		NullCheck(L_8);
		float L_10;
		L_10 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_8, L_9, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		__this->___spawnRate_6 = L_10;
		// Debug.Log("Value logged : " + tW + " : " + waveIntensityValues[tW]);
		int32_t* L_11 = (&__this->___tW_24);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_13 = __this->___waveIntensityValues_21;
		int32_t L_14 = __this->___tW_24;
		NullCheck(L_13);
		float L_15;
		L_15 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_13, L_14, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_17;
		L_17 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral3F64786E077EF3E8D77A6205AEB1DEFA542E2980, L_12, _stringLiteral0767326DBE1DD31063256737FD019DC6682353E2, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// tW++;
		int32_t L_18 = __this->___tW_24;
		__this->___tW_24 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void TrashGenerator::KeepSpawnRateConsistent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_KeepSpawnRateConsistent_mACC6DC408451FAAD5FEDA24F80F53E4830EA5847 (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float arc = spawnAngle.y - spawnAngle.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___spawnAngle_4);
		float L_1 = L_0->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___spawnAngle_4);
		float L_3 = L_2->___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		// consistentSpawnRate = spawnRate * (arc / 360);
		float L_4 = __this->___spawnRate_6;
		float L_5 = V_0;
		__this->___consistentSpawnRate_7 = ((float)il2cpp_codegen_multiply(L_4, ((float)(L_5/(360.0f)))));
		// }
		return;
	}
}
// System.Void TrashGenerator::SpawnItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_SpawnItem_m01F329A16D1A376794888B96BA5ACF21BB140ECA (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float randomAngle = Random.Range(spawnAngle.x, spawnAngle.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___spawnAngle_4);
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___spawnAngle_4);
		float L_3 = L_2->___y_1;
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_1, L_3, NULL);
		V_0 = L_4;
		// float randomOffsetH = Random.Range(randomHorizontalOffsetRange.x, randomHorizontalOffsetRange.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___randomHorizontalOffsetRange_8);
		float L_6 = L_5->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___randomHorizontalOffsetRange_8);
		float L_8 = L_7->___y_1;
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_6, L_8, NULL);
		V_1 = L_9;
		// float randomOffsetV = Random.Range(randomVerticalOffsetRange.x, randomVerticalOffsetRange.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___randomVerticalOffsetRange_9);
		float L_11 = L_10->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___randomVerticalOffsetRange_9);
		float L_13 = L_12->___y_1;
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_11, L_13, NULL);
		V_2 = L_14;
		// float randomSpeed = Random.Range(randomSpeedRange.x, randomSpeedRange.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___randomSpeedRange_10);
		float L_16 = L_15->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (&__this->___randomSpeedRange_10);
		float L_18 = L_17->___y_1;
		float L_19;
		L_19 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_16, L_18, NULL);
		V_3 = L_19;
		// GameObject trashItem = null;
		V_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// float randomTrash = trashType + Random.Range(-trashTypeSpread, trashTypeSpread);
		float L_20 = __this->___trashType_16;
		float L_21 = __this->___trashTypeSpread_15;
		float L_22 = __this->___trashTypeSpread_15;
		float L_23;
		L_23 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_21)), L_22, NULL);
		V_5 = ((float)il2cpp_codegen_add(L_20, L_23));
		// if (randomTrash > 2) trashItem = generalTrash[Random.Range(0, generalTrash.Count)];
		float L_24 = V_5;
		if ((!(((float)L_24) > ((float)(2.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		// if (randomTrash > 2) trashItem = generalTrash[Random.Range(0, generalTrash.Count)];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->___generalTrash_12;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___generalTrash_12;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_26, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_28;
		L_28 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_27, NULL);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_25, L_28, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_4 = L_29;
	}

IL_00b5:
	{
		// if (randomTrash < 2 && trashType + randomTrash > 1) trashItem = plasticTrash[Random.Range(0, plasticTrash.Count)];
		float L_30 = V_5;
		if ((!(((float)L_30) < ((float)(2.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		float L_31 = __this->___trashType_16;
		float L_32 = V_5;
		if ((!(((float)((float)il2cpp_codegen_add(L_31, L_32))) > ((float)(1.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		// if (randomTrash < 2 && trashType + randomTrash > 1) trashItem = plasticTrash[Random.Range(0, plasticTrash.Count)];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_33 = __this->___plasticTrash_13;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_34 = __this->___plasticTrash_13;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_34, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_36;
		L_36 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_35, NULL);
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_33, L_36, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_4 = L_37;
	}

IL_00ec:
	{
		// if (randomTrash < 1) trashItem = wasteTrash[Random.Range(0, wasteTrash.Count)];
		float L_38 = V_5;
		if ((!(((float)L_38) < ((float)(1.0f)))))
		{
			goto IL_0113;
		}
	}
	{
		// if (randomTrash < 1) trashItem = wasteTrash[Random.Range(0, wasteTrash.Count)];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_39 = __this->___wasteTrash_14;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = __this->___wasteTrash_14;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_40, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_42;
		L_42 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_41, NULL);
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_39, L_42, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_4 = L_43;
	}

IL_0113:
	{
		// trashItem.transform.position = transform.position + Vector3.right * (radius + randomOffsetH) + Vector3.up * randomOffsetV;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = V_4;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_44, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_49 = __this->___radius_5;
		float L_50 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_48, ((float)il2cpp_codegen_add(L_49, L_50)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_54 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_53, L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_55, NULL);
		NullCheck(L_45);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_45, L_56, NULL);
		// trashItem.transform.RotateAround(transform.position, Vector3.up, randomAngle);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = V_4;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_62 = V_0;
		NullCheck(L_58);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_58, L_60, L_61, L_62, NULL);
		// Suckable trashItemSuckable = trashItem.GetComponent<Suckable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = V_4;
		NullCheck(L_63);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_64;
		L_64 = GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A(L_63, GameObject_GetComponent_TisSuckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4_m835EB1A6F0AAD0ADE5C26335632442D41947FF4A_RuntimeMethod_var);
		// trashItemSuckable.flowDirection = -trashItem.transform.position.normalized + CalculateSpread(spread);
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_65 = L_64;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_4;
		NullCheck(L_66);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_66, NULL);
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_67, NULL);
		V_6 = L_68;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_69, NULL);
		float L_71 = __this->___spread_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = TrashGenerator_CalculateSpread_m0C4DB34964AEDAFE7A8D6CE6A7D4584AECE3B12F(__this, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_70, L_72, NULL);
		NullCheck(L_65);
		L_65->___flowDirection_23 = L_73;
		// trashItemSuckable.flowSpeed = randomSpeed;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_74 = L_65;
		float L_75 = V_3;
		NullCheck(L_74);
		L_74->___flowSpeed_24 = L_75;
		// trashItemSuckable.SwooshIntensity = trashSwooshIntensity;
		Suckable_tF13F768DEC09CCAB0A3D9B95C8EE6F9104A863A4* L_76 = L_74;
		float L_77 = __this->___trashSwooshIntensity_17;
		NullCheck(L_76);
		L_76->___SwooshIntensity_26 = L_77;
		// trashItemSuckable.SwooshFrequency = trashSwooshFrequency;
		float L_78 = __this->___trashSwooshFrequency_18;
		NullCheck(L_76);
		L_76->___SwooshFrequency_27 = L_78;
		// GameManager gamemanager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_79;
		L_79 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		// gamemanager.cleannessLevel--;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_80 = L_79;
		NullCheck(L_80);
		float L_81 = L_80->___cleannessLevel_12;
		NullCheck(L_80);
		L_80->___cleannessLevel_12 = ((float)il2cpp_codegen_subtract(L_81, (1.0f)));
		// GameObject newTrashItem = Instantiate(trashItem);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83;
		L_83 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_82, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// newTrashItem.SetActive(true);
		NullCheck(L_83);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_83, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 TrashGenerator::CalculateSpread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TrashGenerator_CalculateSpread_m0C4DB34964AEDAFE7A8D6CE6A7D4584AECE3B12F (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, float ____spreadValue0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = Random.Range(-_spreadValue, _spreadValue);
		float L_0 = ____spreadValue0;
		float L_1 = ____spreadValue0;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_0)), L_1, NULL);
		// float y = Random.Range(-_spreadValue, _spreadValue);
		float L_3 = ____spreadValue0;
		float L_4 = ____spreadValue0;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_3)), L_4, NULL);
		V_0 = L_5;
		// float z = Random.Range(-_spreadValue, _spreadValue);
		float L_6 = ____spreadValue0;
		float L_7 = ____spreadValue0;
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_6)), L_7, NULL);
		V_1 = L_8;
		// return new Vector3(x,y,z);
		float L_9 = V_0;
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_2, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void TrashGenerator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_FixedUpdate_m04EEDEB186EDB4D6D377B896649159886FDD3F0F (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TrashGenerator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator_Update_m32C29032189BFDD4654EA71A4A6F1A68FF300375 (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) 
{
	{
		// time += Time.deltaTime;
		float L_0 = __this->___time_22;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___time_22 = ((float)il2cpp_codegen_add(L_0, L_1));
		// WaveCalculations();
		TrashGenerator_WaveCalculations_mD871EC404E13229ECDB3BACFD3AACC9AD9EDFBA3(__this, NULL);
		// KeepSpawnRateConsistent();
		TrashGenerator_KeepSpawnRateConsistent_mACC6DC408451FAAD5FEDA24F80F53E4830EA5847(__this, NULL);
		// if (time > 1/ consistentSpawnRate)
		float L_2 = __this->___time_22;
		float L_3 = __this->___consistentSpawnRate_7;
		if ((!(((float)L_2) > ((float)((float)((1.0f)/L_3))))))
		{
			goto IL_0043;
		}
	}
	{
		// time = 0;
		__this->___time_22 = (0.0f);
		// SpawnItem();
		TrashGenerator_SpawnItem_m01F329A16D1A376794888B96BA5ACF21BB140ECA(__this, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void TrashGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrashGenerator__ctor_m58BF269AEF0865D72D36AA6A76C20108273F9A98 (TrashGenerator_tEE1B69E25030326C5CBDA54C2ABDD673745CF6F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4FA50681BE20A724488448F92D5B86CEEA18F04B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<GameObject> generalTrash = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___generalTrash_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___generalTrash_12), (void*)L_0);
		// List<GameObject> plasticTrash = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___plasticTrash_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___plasticTrash_13), (void*)L_1);
		// List<GameObject> wasteTrash = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___wasteTrash_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wasteTrash_14), (void*)L_2);
		// List<WaveSettings> waves = new List<WaveSettings>();
		List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* L_3 = (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD*)il2cpp_codegen_object_new(List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m4FA50681BE20A724488448F92D5B86CEEA18F04B(L_3, List_1__ctor_m4FA50681BE20A724488448F92D5B86CEEA18F04B_RuntimeMethod_var);
		__this->___waves_20 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waves_20), (void*)L_3);
		// List<float> waveIntensityValues = new List<float>();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_4 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_4, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->___waveIntensityValues_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waveIntensityValues_21), (void*)L_4);
		// int tW = 1;
		__this->___tW_24 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
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
// System.Void WaveSettings::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSettings__ctor_mA589520FF4E6143CDEAA234573DD571D130F3E0A (WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE* __this, float ___pTime0, float ___pDuration1, float ___pIntensity2, const RuntimeMethod* method) 
{
	{
		// timeSeconds = pTime;
		float L_0 = ___pTime0;
		__this->___timeSeconds_0 = L_0;
		// duration = pDuration;
		float L_1 = ___pDuration1;
		__this->___duration_1 = L_1;
		// intesity = pIntensity;
		float L_2 = ___pIntensity2;
		__this->___intesity_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WaveSettings__ctor_mA589520FF4E6143CDEAA234573DD571D130F3E0A_AdjustorThunk (RuntimeObject* __this, float ___pTime0, float ___pDuration1, float ___pIntensity2, const RuntimeMethod* method)
{
	WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE*>(__this + _offset);
	WaveSettings__ctor_mA589520FF4E6143CDEAA234573DD571D130F3E0A(_thisAdjusted, ___pTime0, ___pDuration1, ___pIntensity2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_gshared_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___item0, const RuntimeMethod* method) 
{
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_1 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_6 = V_0;
		int32_t L_7 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5)L_8);
		return;
	}

IL_0034:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_9 = ___item0;
		((  void (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m88587A0ABD2A6917EFAE4F72B496BA19A55BDBCC_gshared_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method) 
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
		NullCheck(L_4);
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
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE Enumerator_get_Current_mE2E801611054E5282D7EDB03F8D97409346B2D64_gshared_inline (Enumerator_t9575E73585A26F7E8293F7741A7C1865D2C0F664* __this, const RuntimeMethod* method) 
{
	{
		WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE L_0 = (WaveSettings_tBAECAEA4421C8608BECCADC9F572E53B1AACF7CE)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m2F86E252D086E288E02FA1C830B7E86C0A431E51_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, float ___item0, const RuntimeMethod* method) 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (float)L_8);
		return;
	}

IL_0034:
	{
		float L_9 = ___item0;
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mCD5400ADE86636B75D19AA37097E8992E3FA1784_gshared_inline (List_1_t8655AEBEFA29974E64206D16EA4073044F6860AD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
