﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// BackgroundScroller
struct BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01;
// Collider
struct Collider_tB89A1A245C58AA3D7A220E6C6C76BB71A3D80283;
// DamageDealer
struct DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemyPathing
struct EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1;
// EnemySpawner
struct EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameSession
struct GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9;
// HealthDisplay
struct HealthDisplay_tDF964EAB678DBFBB1EC61B5554EE24E31F125DB8;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Level
struct Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93;
// MusicPlayer
struct MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreDisplay
struct ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WaveConfig
struct WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// EnemySpawner/<Start>d__2
struct U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E;
// EnemySpawner/<spawnAllEnemiesInWave>d__3
struct U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84;
// EnemySpawner/<spawnAllWaves>d__4
struct U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586;
// Level/<WaitAndLoadEnd>d__1
struct U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA;
// Level/<WaitAndLoadWinner>d__2
struct U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Collections.Generic.List`1<WaveConfig>
struct List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameSession[]
struct GameSessionU5BU5D_t61574D5AF894B8E93C237EA134E0CF350A34619D;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MusicPlayer[]
struct MusicPlayerU5BU5D_t1CF213646B46ACDC71B40C4B31C310C1BD4126CA;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WaveConfig[]
struct WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral664B0BA9D0FE8753D6E4330317FC4EC8774FF86F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279;
IL2CPP_EXTERN_C String_t* _stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE;
IL2CPP_EXTERN_C String_t* _stringLiteralAD7EC52251FC3EB973EA15A330DE458E006E53B4;
IL2CPP_EXTERN_C String_t* _stringLiteralB4525DEC730EDDA1A14353AAA2E40857BACC6F3A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAFE6A2D66A676D6E38B6831B5F7C7E5B544EBBBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA7F5DD47143A8E61B99207E9326B7CCB11551C51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2815D75D58BB4784254C0D15FEB6D38621CADDB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1_m3379968F3580F1A78D508358E60EB9EACD56B94B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2A711D3ADD853DAD96AEAB2C46E19F4824A4A697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mF6570188C76AA8664C062D7C5C72184B61133ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mB78770BA28598B62C52F073A37CA89FB7FEB94A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D_m2D59EFE3818E965BA586C6CDAB04501FE235056A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mEAEEB52A0DFBE1A4CA3FB8E7CCC75A7A21D9D054_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAndLoadEndU3Ed__1_System_Collections_IEnumerator_Reset_m503E99666A8302BA7879D876250744AB5A47FBE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAndLoadWinnerU3Ed__2_System_Collections_IEnumerator_Reset_mE93A4B0D2E72C2EDF34F6D0161B7606F5C3722E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspawnAllEnemiesInWaveU3Ed__3_System_Collections_IEnumerator_Reset_m906239505AE614470AD46CB505788778F926F1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspawnAllWavesU3Ed__4_System_Collections_IEnumerator_Reset_mD6C5F04EFED5C3F5A9196CA95E220E200C989DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BackgroundScroller_Start_mE4167530D769FE00F53556574705AE761E4D6544_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BackgroundScroller_Update_m4DA04F8EB8FE8ED936C1EAA93EFCB904AA8AA457_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Collider_OnTriggerEnter2D_m6BCB72ACDD738A4F2B233DA959F63B2C6E7C7414_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemyPathing_EnemyMove_mB5B2B02AA1828B2D5E445F85B308B2491B06E622_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemyPathing_Start_mBEB287D3E8C48CFA5AC150FCBA8A0DB214D0F44D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemySpawner_Start_m397934BCD27904E015FC514FAF7C940CA672E27F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemySpawner_spawnAllEnemiesInWave_mE0628891AD64C4EE8F285118682AAA6F46A2BE0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemySpawner_spawnAllWaves_m4CABE41411A46AEC1E08D280CBD81BCD1090E5C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_EnemyFire_m7B7E0FA24F8461965775AA833788669A17FF7161_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameSession_ResetGame_m5AAA74149896637E8655D08CFC4F8FA11F92A152_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameSession_SetUpSingleton_m3EBBFD4F49CBAE3FF13F8EE16DF19D53DB43DAA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HealthDisplay_Start_mEB17D54FB168B486E96767626AAF4E21752F040F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Level_LoadGame_m37B99D4AF36E778ADFCD54326003A392941A32CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Level_LoadStartMenu_m1FA3148093140D616278E650D0801420CD5CA9F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Level_QuitGame_m49D8506FD999542FDAE47BA04B556B2332A53F5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Level_WaitAndLoadEnd_m20AE556777AB8B73E520DC9884BB468D25726C15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Level_WaitAndLoadWinner_m512BC42F9DB64A7DE3A818E23C845A75E2EF44D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MusicPlayer_SetUpSingleton_m19A6DE140ED2A0F7B4E06592123C60FC8CCAA60B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_ProcessHit_mCBFF65ACF52F604E30DA7B868C6D57597E5A46EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreDisplay_Start_m18A9D066FCD5D2688F589FDD814B56EB48182E7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreDisplay_Update_m104674478C444000FAD9F531723CB626CAD7B82F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mEAEEB52A0DFBE1A4CA3FB8E7CCC75A7A21D9D054_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitAndLoadEndU3Ed__1_MoveNext_m20C942AD11248596806D6517B8ADF9306B2B21B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitAndLoadEndU3Ed__1_System_Collections_IEnumerator_Reset_m503E99666A8302BA7879D876250744AB5A47FBE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitAndLoadWinnerU3Ed__2_MoveNext_m644BAA476694F2915F79F711DDBC33F6B14F6AE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitAndLoadWinnerU3Ed__2_System_Collections_IEnumerator_Reset_mE93A4B0D2E72C2EDF34F6D0161B7606F5C3722E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CspawnAllEnemiesInWaveU3Ed__3_MoveNext_m0EB9527B9606712D35FDD169F90B4F04972584BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CspawnAllEnemiesInWaveU3Ed__3_System_Collections_IEnumerator_Reset_m906239505AE614470AD46CB505788778F926F1A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CspawnAllWavesU3Ed__4_MoveNext_m4A41915968BB23D04C639B0F571892C8C406FF38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CspawnAllWavesU3Ed__4_System_Collections_IEnumerator_Reset_mD6C5F04EFED5C3F5A9196CA95E220E200C989DD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CspawnAllWavesU3Ed__4_U3CU3Em__Finally1_mA0046731003626DF8794A0136EA6C69BA541BAA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WaveConfig_GetWaypoints_m967B53EF4FA329D74809A4A70DD91090E5599D70_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameSessionU5BU5D_t61574D5AF894B8E93C237EA134E0CF350A34619D;
struct MusicPlayerU5BU5D_t1CF213646B46ACDC71B40C4B31C310C1BD4126CA;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// EnemySpawner_<Start>d__2
struct  U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E  : public RuntimeObject
{
public:
	// System.Int32 EnemySpawner_<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawner_<Start>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnemySpawner EnemySpawner_<Start>d__2::<>4__this
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E, ___U3CU3E4__this_2)); }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// EnemySpawner_<spawnAllEnemiesInWave>d__3
struct  U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84  : public RuntimeObject
{
public:
	// System.Int32 EnemySpawner_<spawnAllEnemiesInWave>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawner_<spawnAllEnemiesInWave>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// WaveConfig EnemySpawner_<spawnAllEnemiesInWave>d__3::waveToSpawn
	WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveToSpawn_2;
	// System.Int32 EnemySpawner_<spawnAllEnemiesInWave>d__3::<enemyCount>5__2
	int32_t ___U3CenemyCountU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waveToSpawn_2() { return static_cast<int32_t>(offsetof(U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84, ___waveToSpawn_2)); }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * get_waveToSpawn_2() const { return ___waveToSpawn_2; }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 ** get_address_of_waveToSpawn_2() { return &___waveToSpawn_2; }
	inline void set_waveToSpawn_2(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * value)
	{
		___waveToSpawn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveToSpawn_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CenemyCountU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84, ___U3CenemyCountU3E5__2_3)); }
	inline int32_t get_U3CenemyCountU3E5__2_3() const { return ___U3CenemyCountU3E5__2_3; }
	inline int32_t* get_address_of_U3CenemyCountU3E5__2_3() { return &___U3CenemyCountU3E5__2_3; }
	inline void set_U3CenemyCountU3E5__2_3(int32_t value)
	{
		___U3CenemyCountU3E5__2_3 = value;
	}
};


// Level_<WaitAndLoadEnd>d__1
struct  U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA  : public RuntimeObject
{
public:
	// System.Int32 Level_<WaitAndLoadEnd>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Level_<WaitAndLoadEnd>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Level Level_<WaitAndLoadEnd>d__1::<>4__this
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA, ___U3CU3E4__this_2)); }
	inline Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Level_<WaitAndLoadWinner>d__2
struct  U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541  : public RuntimeObject
{
public:
	// System.Int32 Level_<WaitAndLoadWinner>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Level_<WaitAndLoadWinner>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Level Level_<WaitAndLoadWinner>d__2::<>4__this
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541, ___U3CU3E4__this_2)); }
	inline Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<WaveConfig>
struct  List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0, ____items_1)); }
	inline WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* get__items_1() const { return ____items_1; }
	inline WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0_StaticFields, ____emptyArray_5)); }
	inline WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WaveConfigU5BU5D_t2260DDBA3EC12C63EF50DB4329690266FB363F8A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<WaveConfig>
struct  Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC, ___list_0)); }
	inline List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * get_list_0() const { return ___list_0; }
	inline List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC, ___current_3)); }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * get_current_3() const { return ___current_3; }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// EnemySpawner_<spawnAllWaves>d__4
struct  U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586  : public RuntimeObject
{
public:
	// System.Int32 EnemySpawner_<spawnAllWaves>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawner_<spawnAllWaves>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// EnemySpawner EnemySpawner_<spawnAllWaves>d__4::<>4__this
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1_Enumerator<WaveConfig> EnemySpawner_<spawnAllWaves>d__4::<>7__wrap1
	Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586, ___U3CU3E4__this_2)); }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}
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

// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
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


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// WaveConfig
struct  WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.GameObject WaveConfig::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_4;
	// UnityEngine.GameObject WaveConfig::pathPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pathPrefab_5;
	// System.Single WaveConfig::timeBetweenSpawns
	float ___timeBetweenSpawns_6;
	// System.Int32 WaveConfig::numberOfEnemies
	int32_t ___numberOfEnemies_7;
	// System.Single WaveConfig::enemyMoveSpeed
	float ___enemyMoveSpeed_8;

public:
	inline static int32_t get_offset_of_enemyPrefab_4() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___enemyPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_4() const { return ___enemyPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_4() { return &___enemyPrefab_4; }
	inline void set_enemyPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_pathPrefab_5() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___pathPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pathPrefab_5() const { return ___pathPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pathPrefab_5() { return &___pathPrefab_5; }
	inline void set_pathPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pathPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeBetweenSpawns_6() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___timeBetweenSpawns_6)); }
	inline float get_timeBetweenSpawns_6() const { return ___timeBetweenSpawns_6; }
	inline float* get_address_of_timeBetweenSpawns_6() { return &___timeBetweenSpawns_6; }
	inline void set_timeBetweenSpawns_6(float value)
	{
		___timeBetweenSpawns_6 = value;
	}

	inline static int32_t get_offset_of_numberOfEnemies_7() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___numberOfEnemies_7)); }
	inline int32_t get_numberOfEnemies_7() const { return ___numberOfEnemies_7; }
	inline int32_t* get_address_of_numberOfEnemies_7() { return &___numberOfEnemies_7; }
	inline void set_numberOfEnemies_7(int32_t value)
	{
		___numberOfEnemies_7 = value;
	}

	inline static int32_t get_offset_of_enemyMoveSpeed_8() { return static_cast<int32_t>(offsetof(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1, ___enemyMoveSpeed_8)); }
	inline float get_enemyMoveSpeed_8() const { return ___enemyMoveSpeed_8; }
	inline float* get_address_of_enemyMoveSpeed_8() { return &___enemyMoveSpeed_8; }
	inline void set_enemyMoveSpeed_8(float value)
	{
		___enemyMoveSpeed_8 = value;
	}
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// BackgroundScroller
struct  BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BackgroundScroller::ScrollSpeed
	float ___ScrollSpeed_4;
	// UnityEngine.Material BackgroundScroller::myMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___myMaterial_5;
	// UnityEngine.Vector2 BackgroundScroller::offSet
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___offSet_6;

public:
	inline static int32_t get_offset_of_ScrollSpeed_4() { return static_cast<int32_t>(offsetof(BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01, ___ScrollSpeed_4)); }
	inline float get_ScrollSpeed_4() const { return ___ScrollSpeed_4; }
	inline float* get_address_of_ScrollSpeed_4() { return &___ScrollSpeed_4; }
	inline void set_ScrollSpeed_4(float value)
	{
		___ScrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_myMaterial_5() { return static_cast<int32_t>(offsetof(BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01, ___myMaterial_5)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_myMaterial_5() const { return ___myMaterial_5; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_myMaterial_5() { return &___myMaterial_5; }
	inline void set_myMaterial_5(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___myMaterial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myMaterial_5), (void*)value);
	}

	inline static int32_t get_offset_of_offSet_6() { return static_cast<int32_t>(offsetof(BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01, ___offSet_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_offSet_6() const { return ___offSet_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_offSet_6() { return &___offSet_6; }
	inline void set_offSet_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___offSet_6 = value;
	}
};


// Collider
struct  Collider_tB89A1A245C58AA3D7A220E6C6C76BB71A3D80283  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DamageDealer
struct  DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 DamageDealer::damage
	int32_t ___damage_4;

public:
	inline static int32_t get_offset_of_damage_4() { return static_cast<int32_t>(offsetof(DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6, ___damage_4)); }
	inline int32_t get_damage_4() const { return ___damage_4; }
	inline int32_t* get_address_of_damage_4() { return &___damage_4; }
	inline void set_damage_4(int32_t value)
	{
		___damage_4 = value;
	}
};


// Enemy
struct  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Enemy::shotCounter
	float ___shotCounter_4;
	// System.Single Enemy::minTimeBetweenShots
	float ___minTimeBetweenShots_5;
	// System.Single Enemy::maxTimeBetweenShots
	float ___maxTimeBetweenShots_6;
	// UnityEngine.GameObject Enemy::enemyBulletPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyBulletPrefab_7;
	// System.Single Enemy::enemyBulletSpeed
	float ___enemyBulletSpeed_8;

public:
	inline static int32_t get_offset_of_shotCounter_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___shotCounter_4)); }
	inline float get_shotCounter_4() const { return ___shotCounter_4; }
	inline float* get_address_of_shotCounter_4() { return &___shotCounter_4; }
	inline void set_shotCounter_4(float value)
	{
		___shotCounter_4 = value;
	}

	inline static int32_t get_offset_of_minTimeBetweenShots_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___minTimeBetweenShots_5)); }
	inline float get_minTimeBetweenShots_5() const { return ___minTimeBetweenShots_5; }
	inline float* get_address_of_minTimeBetweenShots_5() { return &___minTimeBetweenShots_5; }
	inline void set_minTimeBetweenShots_5(float value)
	{
		___minTimeBetweenShots_5 = value;
	}

	inline static int32_t get_offset_of_maxTimeBetweenShots_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___maxTimeBetweenShots_6)); }
	inline float get_maxTimeBetweenShots_6() const { return ___maxTimeBetweenShots_6; }
	inline float* get_address_of_maxTimeBetweenShots_6() { return &___maxTimeBetweenShots_6; }
	inline void set_maxTimeBetweenShots_6(float value)
	{
		___maxTimeBetweenShots_6 = value;
	}

	inline static int32_t get_offset_of_enemyBulletPrefab_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyBulletPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyBulletPrefab_7() const { return ___enemyBulletPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyBulletPrefab_7() { return &___enemyBulletPrefab_7; }
	inline void set_enemyBulletPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyBulletPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyBulletPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_enemyBulletSpeed_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemyBulletSpeed_8)); }
	inline float get_enemyBulletSpeed_8() const { return ___enemyBulletSpeed_8; }
	inline float* get_address_of_enemyBulletSpeed_8() { return &___enemyBulletSpeed_8; }
	inline void set_enemyBulletSpeed_8(float value)
	{
		___enemyBulletSpeed_8 = value;
	}
};


// EnemyPathing
struct  EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> EnemyPathing::waypoints
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___waypoints_4;
	// WaveConfig EnemyPathing::waveConfig
	WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfig_5;
	// System.Int32 EnemyPathing::scoreValue
	int32_t ___scoreValue_6;
	// UnityEngine.AudioClip EnemyPathing::pointGained
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pointGained_7;
	// System.Single EnemyPathing::pointGainedVolume
	float ___pointGainedVolume_8;
	// System.Int32 EnemyPathing::waypointIndex
	int32_t ___waypointIndex_9;

public:
	inline static int32_t get_offset_of_waypoints_4() { return static_cast<int32_t>(offsetof(EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1, ___waypoints_4)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_waypoints_4() const { return ___waypoints_4; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_waypoints_4() { return &___waypoints_4; }
	inline void set_waypoints_4(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___waypoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoints_4), (void*)value);
	}

	inline static int32_t get_offset_of_waveConfig_5() { return static_cast<int32_t>(offsetof(EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1, ___waveConfig_5)); }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * get_waveConfig_5() const { return ___waveConfig_5; }
	inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 ** get_address_of_waveConfig_5() { return &___waveConfig_5; }
	inline void set_waveConfig_5(WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * value)
	{
		___waveConfig_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveConfig_5), (void*)value);
	}

	inline static int32_t get_offset_of_scoreValue_6() { return static_cast<int32_t>(offsetof(EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1, ___scoreValue_6)); }
	inline int32_t get_scoreValue_6() const { return ___scoreValue_6; }
	inline int32_t* get_address_of_scoreValue_6() { return &___scoreValue_6; }
	inline void set_scoreValue_6(int32_t value)
	{
		___scoreValue_6 = value;
	}

	inline static int32_t get_offset_of_pointGained_7() { return static_cast<int32_t>(offsetof(EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1, ___pointGained_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pointGained_7() const { return ___pointGained_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pointGained_7() { return &___pointGained_7; }
	inline void set_pointGained_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pointGained_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointGained_7), (void*)value);
	}

	inline static int32_t get_offset_of_pointGainedVolume_8() { return static_cast<int32_t>(offsetof(EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1, ___pointGainedVolume_8)); }
	inline float get_pointGainedVolume_8() const { return ___pointGainedVolume_8; }
	inline float* get_address_of_pointGainedVolume_8() { return &___pointGainedVolume_8; }
	inline void set_pointGainedVolume_8(float value)
	{
		___pointGainedVolume_8 = value;
	}

	inline static int32_t get_offset_of_waypointIndex_9() { return static_cast<int32_t>(offsetof(EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1, ___waypointIndex_9)); }
	inline int32_t get_waypointIndex_9() const { return ___waypointIndex_9; }
	inline int32_t* get_address_of_waypointIndex_9() { return &___waypointIndex_9; }
	inline void set_waypointIndex_9(int32_t value)
	{
		___waypointIndex_9 = value;
	}
};


// EnemySpawner
struct  EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<WaveConfig> EnemySpawner::waveConfigList
	List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * ___waveConfigList_4;
	// System.Boolean EnemySpawner::looping
	bool ___looping_5;

public:
	inline static int32_t get_offset_of_waveConfigList_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___waveConfigList_4)); }
	inline List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * get_waveConfigList_4() const { return ___waveConfigList_4; }
	inline List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 ** get_address_of_waveConfigList_4() { return &___waveConfigList_4; }
	inline void set_waveConfigList_4(List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * value)
	{
		___waveConfigList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveConfigList_4), (void*)value);
	}

	inline static int32_t get_offset_of_looping_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___looping_5)); }
	inline bool get_looping_5() const { return ___looping_5; }
	inline bool* get_address_of_looping_5() { return &___looping_5; }
	inline void set_looping_5(bool value)
	{
		___looping_5 = value;
	}
};


// GameSession
struct  GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GameSession::score
	int32_t ___score_4;

public:
	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}
};


// HealthDisplay
struct  HealthDisplay_tDF964EAB678DBFBB1EC61B5554EE24E31F125DB8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text HealthDisplay::HealthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___HealthText_4;
	// Player HealthDisplay::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_5;

public:
	inline static int32_t get_offset_of_HealthText_4() { return static_cast<int32_t>(offsetof(HealthDisplay_tDF964EAB678DBFBB1EC61B5554EE24E31F125DB8, ___HealthText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_HealthText_4() const { return ___HealthText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_HealthText_4() { return &___HealthText_4; }
	inline void set_HealthText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___HealthText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HealthText_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(HealthDisplay_tDF964EAB678DBFBB1EC61B5554EE24E31F125DB8, ___player_5)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_5() const { return ___player_5; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}
};


// Level
struct  Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Level::delayInSeconds
	float ___delayInSeconds_4;

public:
	inline static int32_t get_offset_of_delayInSeconds_4() { return static_cast<int32_t>(offsetof(Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93, ___delayInSeconds_4)); }
	inline float get_delayInSeconds_4() const { return ___delayInSeconds_4; }
	inline float* get_address_of_delayInSeconds_4() { return &___delayInSeconds_4; }
	inline void set_delayInSeconds_4(float value)
	{
		___delayInSeconds_4 = value;
	}
};


// MusicPlayer
struct  MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Player
struct  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Player::health
	int32_t ___health_4;
	// System.Single Player::moveSpeed
	float ___moveSpeed_5;
	// System.Single Player::xMin
	float ___xMin_6;
	// System.Single Player::xMax
	float ___xMax_7;
	// System.Single Player::padding
	float ___padding_8;
	// UnityEngine.AudioClip Player::playerHitSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___playerHitSound_9;
	// System.Single Player::playerHitSoundVolume
	float ___playerHitSoundVolume_10;
	// UnityEngine.AudioClip Player::playerDeathSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___playerDeathSound_11;
	// System.Single Player::playerDeathSoundVolume
	float ___playerDeathSoundVolume_12;
	// UnityEngine.GameObject Player::deathVFX
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathVFX_13;
	// System.Single Player::explosionDuration
	float ___explosionDuration_14;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_xMin_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___xMin_6)); }
	inline float get_xMin_6() const { return ___xMin_6; }
	inline float* get_address_of_xMin_6() { return &___xMin_6; }
	inline void set_xMin_6(float value)
	{
		___xMin_6 = value;
	}

	inline static int32_t get_offset_of_xMax_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___xMax_7)); }
	inline float get_xMax_7() const { return ___xMax_7; }
	inline float* get_address_of_xMax_7() { return &___xMax_7; }
	inline void set_xMax_7(float value)
	{
		___xMax_7 = value;
	}

	inline static int32_t get_offset_of_padding_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___padding_8)); }
	inline float get_padding_8() const { return ___padding_8; }
	inline float* get_address_of_padding_8() { return &___padding_8; }
	inline void set_padding_8(float value)
	{
		___padding_8 = value;
	}

	inline static int32_t get_offset_of_playerHitSound_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerHitSound_9)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_playerHitSound_9() const { return ___playerHitSound_9; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_playerHitSound_9() { return &___playerHitSound_9; }
	inline void set_playerHitSound_9(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___playerHitSound_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerHitSound_9), (void*)value);
	}

	inline static int32_t get_offset_of_playerHitSoundVolume_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerHitSoundVolume_10)); }
	inline float get_playerHitSoundVolume_10() const { return ___playerHitSoundVolume_10; }
	inline float* get_address_of_playerHitSoundVolume_10() { return &___playerHitSoundVolume_10; }
	inline void set_playerHitSoundVolume_10(float value)
	{
		___playerHitSoundVolume_10 = value;
	}

	inline static int32_t get_offset_of_playerDeathSound_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerDeathSound_11)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_playerDeathSound_11() const { return ___playerDeathSound_11; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_playerDeathSound_11() { return &___playerDeathSound_11; }
	inline void set_playerDeathSound_11(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___playerDeathSound_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDeathSound_11), (void*)value);
	}

	inline static int32_t get_offset_of_playerDeathSoundVolume_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___playerDeathSoundVolume_12)); }
	inline float get_playerDeathSoundVolume_12() const { return ___playerDeathSoundVolume_12; }
	inline float* get_address_of_playerDeathSoundVolume_12() { return &___playerDeathSoundVolume_12; }
	inline void set_playerDeathSoundVolume_12(float value)
	{
		___playerDeathSoundVolume_12 = value;
	}

	inline static int32_t get_offset_of_deathVFX_13() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___deathVFX_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathVFX_13() const { return ___deathVFX_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathVFX_13() { return &___deathVFX_13; }
	inline void set_deathVFX_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathVFX_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathVFX_13), (void*)value);
	}

	inline static int32_t get_offset_of_explosionDuration_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___explosionDuration_14)); }
	inline float get_explosionDuration_14() const { return ___explosionDuration_14; }
	inline float* get_address_of_explosionDuration_14() { return &___explosionDuration_14; }
	inline void set_explosionDuration_14(float value)
	{
		___explosionDuration_14 = value;
	}
};


// ScoreDisplay
struct  ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoreDisplay::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;
	// GameSession ScoreDisplay::gameSession
	GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * ___gameSession_5;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameSession_5() { return static_cast<int32_t>(offsetof(ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A, ___gameSession_5)); }
	inline GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * get_gameSession_5() const { return ___gameSession_5; }
	inline GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 ** get_address_of_gameSession_5() { return &___gameSession_5; }
	inline void set_gameSession_5(GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * value)
	{
		___gameSession_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameSession_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// GameSession[]
struct GameSessionU5BU5D_t61574D5AF894B8E93C237EA134E0CF350A34619D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * m_Items[1];

public:
	inline GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MusicPlayer[]
struct MusicPlayerU5BU5D_t1CF213646B46ACDC71B40C4B31C310C1BD4126CA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * m_Items[1];

public:
	inline MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void Enemy::CountDownAndShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_CountDownAndShoot_m3B5BF1E40C790D2C0F1889069D6365B346DFCC3D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::EnemyFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_EnemyFire_m7B7E0FA24F8461965775AA833788669A17FF7161 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Transform> WaveConfig::GetWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * WaveConfig_GetWaypoints_m967B53EF4FA329D74809A4A70DD91090E5599D70 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void EnemyPathing::EnemyMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPathing_EnemyMove_mB5B2B02AA1828B2D5E445F85B308B2491B06E622 (EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Single WaveConfig::GetEnemyMoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfig_GetEnemyMoveSpeed_mD4BC5E513CEE4EA5E998627C083A25947386911D_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___current0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<GameSession>()
inline GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * Object_FindObjectOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mF6570188C76AA8664C062D7C5C72184B61133ACF (const RuntimeMethod* method)
{
	return ((  GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void GameSession::AddToScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSession_AddToScore_m25B41713BA1B9089BD1E3E644D71951C6DBBEE14 (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, int32_t ___scoreValue0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, float ___volume2, const RuntimeMethod* method);
// System.Void EnemySpawner/<Start>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mE944070FA5FC3013B137052B1573AAF6944AD740 (U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void EnemySpawner/<spawnAllEnemiesInWave>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllEnemiesInWaveU3Ed__3__ctor_m12D9F46809664F50CF4FFDBEA7B683FB37586C09 (U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void EnemySpawner/<spawnAllWaves>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllWavesU3Ed__4__ctor_m102AEA26F8B7313C4F1A9F19F503663D9D2C7757 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameSession::SetUpSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSession_SetUpSingleton_m3EBBFD4F49CBAE3FF13F8EE16DF19D53DB43DAA8 (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<GameSession>()
inline GameSessionU5BU5D_t61574D5AF894B8E93C237EA134E0CF350A34619D* Object_FindObjectsOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mB78770BA28598B62C52F073A37CA89FB7FEB94A7 (const RuntimeMethod* method)
{
	return ((  GameSessionU5BU5D_t61574D5AF894B8E93C237EA134E0CF350A34619D* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491 (const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Int32 Player::getHealth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_getHealth_mF33CA3FBA86C6B9E1509C18A6FF9783180F1950B_inline (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void Level/<WaitAndLoadEnd>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadEndU3Ed__1__ctor_mB37CDD78CF9F2FEC896D28CC2C4FCFDFD514B8E0 (U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Level/<WaitAndLoadWinner>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadWinnerU3Ed__2__ctor_m6BF06954D7C5C45A8460A5F2B37209490CA8A4C9 (U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void GameSession::ResetGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSession_ResetGame_m5AAA74149896637E8655D08CFC4F8FA11F92A152 (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Level::WaitAndLoadEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Level_WaitAndLoadEnd_m20AE556777AB8B73E520DC9884BB468D25726C15 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator Level::WaitAndLoadWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Level_WaitAndLoadWinner_m512BC42F9DB64A7DE3A818E23C845A75E2EF44D6 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void MusicPlayer::SetUpSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicPlayer_SetUpSingleton_m19A6DE140ED2A0F7B4E06592123C60FC8CCAA60B (MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<MusicPlayer>()
inline MusicPlayerU5BU5D_t1CF213646B46ACDC71B40C4B31C310C1BD4126CA* Object_FindObjectsOfType_TisMusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D_m2D59EFE3818E965BA586C6CDAB04501FE235056A (const RuntimeMethod* method)
{
	return ((  MusicPlayerU5BU5D_t1CF213646B46ACDC71B40C4B31C310C1BD4126CA* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void Player::SetUpMoveBoundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetUpMoveBoundaries_mACB7B8BB227FC2A4CA535674611703B02F8180A8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DamageDealer>()
inline DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void Player::ProcessHit(DamageDealer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ProcessHit_mCBFF65ACF52F604E30DA7B868C6D57597E5A46EA (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * ___dmg0, const RuntimeMethod* method);
// System.Int32 DamageDealer::GetDamage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A_inline (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method);
// System.Void DamageDealer::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Level>()
inline Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8 (const RuntimeMethod* method)
{
	return ((  Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void Level::LoadGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_LoadGameOver_mD8D2FF13AD824851031F3C9396CFF0467D1BD072 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method);
// System.Int32 GameSession::GetScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSession_GetScore_m261421177B31C07760F0942659EDCC341C24E7FD_inline (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Level::LoadWinnerScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_LoadWinnerScene_mCD19C91C8615746324CF2F93600938A178237CDC (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
inline void List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982 (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator EnemySpawner::spawnAllWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_spawnAllWaves_m4CABE41411A46AEC1E08D280CBD81BCD1090E5C3 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject WaveConfig::GeteEnemyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * WaveConfig_GeteEnemyPrefab_m1B63BDE0D4A79734E7638B2DBA759E127F3BF952_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<EnemyPathing>()
inline EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * GameObject_GetComponent_TisEnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1_m3379968F3580F1A78D508358E60EB9EACD56B94B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void EnemyPathing::SetWaveConfig(WaveConfig)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyPathing_SetWaveConfig_m67D5D60389EE55180CFF87426F564DCD5785DE0B_inline (EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfigToSet0, const RuntimeMethod* method);
// System.Single WaveConfig::GetTimeBetweenSpawns()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfig_GetTimeBetweenSpawns_m19729DCB6B94BCC9D8E9FA275B7FA9E40C32E880_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Int32 WaveConfig::GetNumberOfEnemies()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveConfig_GetNumberOfEnemies_mACD21FB3F34347F81B93262A8B265AB1348A76D2_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method);
// System.Void EnemySpawner/<spawnAllWaves>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllWavesU3Ed__4_U3CU3Em__Finally1_mA0046731003626DF8794A0136EA6C69BA541BAA4 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<WaveConfig>::GetEnumerator()
inline Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC  List_1_GetEnumerator_m2A711D3ADD853DAD96AEAB2C46E19F4824A4A697 (List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC  (*) (List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<WaveConfig>::get_Current()
inline WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * Enumerator_get_Current_m2815D75D58BB4784254C0D15FEB6D38621CADDB1_inline (Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC * __this, const RuntimeMethod* method)
{
	return ((  WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * (*) (Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator EnemySpawner::spawnAllEnemiesInWave(WaveConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_spawnAllEnemiesInWave_mE0628891AD64C4EE8F285118682AAA6F46A2BE0A (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveToSpawn0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<WaveConfig>::MoveNext()
inline bool Enumerator_MoveNext_mA7F5DD47143A8E61B99207E9326B7CCB11551C51 (Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void EnemySpawner/<spawnAllWaves>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllWavesU3Ed__4_System_IDisposable_Dispose_mFF8D38DEE48E6B251E27A1129AFCA1959D00BB81 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<WaveConfig>::Dispose()
inline void Enumerator_Dispose_mAFE6A2D66A676D6E38B6831B5F7C7E5B544EBBBD (Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void BackgroundScroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller_Start_mE4167530D769FE00F53556574705AE761E4D6544 (BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundScroller_Start_mE4167530D769FE00F53556574705AE761E4D6544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMaterial = GetComponent<Renderer>().material;
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_0, /*hidden argument*/NULL);
		__this->set_myMaterial_5(L_1);
		// offSet = new Vector2(0f, ScrollSpeed);
		float L_2 = __this->get_ScrollSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (0.0f), L_2, /*hidden argument*/NULL);
		__this->set_offSet_6(L_3);
		// }
		return;
	}
}
// System.Void BackgroundScroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller_Update_m4DA04F8EB8FE8ED936C1EAA93EFCB904AA8AA457 (BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundScroller_Update_m4DA04F8EB8FE8ED936C1EAA93EFCB904AA8AA457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myMaterial.mainTextureOffset += offSet * Time.deltaTime;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_myMaterial_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = L_0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_offSet_6();
		float L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE(L_1, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackgroundScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller__ctor_m5694164FDC22FFE5A19A3538CC6A0BA7FE328933 (BackgroundScroller_t0A4783DD437DF3FDAF8B2C4B1EAE1074EC074D01 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float ScrollSpeed = 0.2f;
		__this->set_ScrollSpeed_4((0.200000003f));
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
// System.Void Collider::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_OnTriggerEnter2D_m6BCB72ACDD738A4F2B233DA959F63B2C6E7C7414 (Collider_tB89A1A245C58AA3D7A220E6C6C76BB71A3D80283 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___otherObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collider_OnTriggerEnter2D_m6BCB72ACDD738A4F2B233DA959F63B2C6E7C7414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(otherObject.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___otherObject0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Collider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider__ctor_mCF536FAC3638447B60CDA77642B3B7E5380D089D (Collider_tB89A1A245C58AA3D7A220E6C6C76BB71A3D80283 * __this, const RuntimeMethod* method)
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
// System.Int32 DamageDealer::GetDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method)
{
	{
		// return damage;
		int32_t L_0 = __this->get_damage_4();
		return L_0;
	}
}
// System.Void DamageDealer::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DamageDealer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer__ctor_m089537C3DC7DE8C9FE32928F59784268ED3B3F2A (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int damage = 100;
		__this->set_damage_4(((int32_t)100));
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// shotCounter = Random.Range(minTimeBetweenShots, maxTimeBetweenShots);
		float L_0 = __this->get_minTimeBetweenShots_5();
		float L_1 = __this->get_maxTimeBetweenShots_6();
		float L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_0, L_1, /*hidden argument*/NULL);
		__this->set_shotCounter_4(L_2);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// CountDownAndShoot();
		Enemy_CountDownAndShoot_m3B5BF1E40C790D2C0F1889069D6365B346DFCC3D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::CountDownAndShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_CountDownAndShoot_m3B5BF1E40C790D2C0F1889069D6365B346DFCC3D (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// shotCounter -= Time.deltaTime;
		float L_0 = __this->get_shotCounter_4();
		float L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_shotCounter_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if(shotCounter <= 0f)
		float L_2 = __this->get_shotCounter_4();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_003c;
		}
	}
	{
		// EnemyFire();
		Enemy_EnemyFire_m7B7E0FA24F8461965775AA833788669A17FF7161(__this, /*hidden argument*/NULL);
		// shotCounter = Random.Range(minTimeBetweenShots, maxTimeBetweenShots);
		float L_3 = __this->get_minTimeBetweenShots_5();
		float L_4 = __this->get_maxTimeBetweenShots_6();
		float L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_3, L_4, /*hidden argument*/NULL);
		__this->set_shotCounter_4(L_5);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Enemy::EnemyFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_EnemyFire_m7B7E0FA24F8461965775AA833788669A17FF7161 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_EnemyFire_m7B7E0FA24F8461965775AA833788669A17FF7161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject enemyBullet = Instantiate(enemyBulletPrefab, transform.position, Quaternion.identity) as GameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemyBulletPrefab_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// enemyBullet.GetComponent<Rigidbody2D>().velocity = new Vector2(0, -enemyBulletSpeed);
		NullCheck(L_4);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_4, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		float L_6 = __this->get_enemyBulletSpeed_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (0.0f), ((-L_6)), /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float minTimeBetweenShots = 0.2f;
		__this->set_minTimeBetweenShots_5((0.200000003f));
		// [SerializeField] float maxTimeBetweenShots = 3f;
		__this->set_maxTimeBetweenShots_6((3.0f));
		// [SerializeField] float enemyBulletSpeed = 0.3f;
		__this->set_enemyBulletSpeed_8((0.300000012f));
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
// System.Void EnemyPathing::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPathing_Start_mBEB287D3E8C48CFA5AC150FCBA8A0DB214D0F44D (EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyPathing_Start_mBEB287D3E8C48CFA5AC150FCBA8A0DB214D0F44D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// waypoints = waveConfig.GetWaypoints();
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_0 = __this->get_waveConfig_5();
		NullCheck(L_0);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_1 = WaveConfig_GetWaypoints_m967B53EF4FA329D74809A4A70DD91090E5599D70(L_0, /*hidden argument*/NULL);
		__this->set_waypoints_4(L_1);
		// transform.position = waypoints[waypointIndex].transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_3 = __this->get_waypoints_4();
		int32_t L_4 = __this->get_waypointIndex_9();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyPathing::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPathing_Update_m2AEB138F39E6223DE42760837F8457A6C771F7C9 (EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * __this, const RuntimeMethod* method)
{
	{
		// EnemyMove();
		EnemyPathing_EnemyMove_mB5B2B02AA1828B2D5E445F85B308B2491B06E622(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyPathing::EnemyMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPathing_EnemyMove_mB5B2B02AA1828B2D5E445F85B308B2491B06E622 (EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyPathing_EnemyMove_mB5B2B02AA1828B2D5E445F85B308B2491B06E622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (waypointIndex <= waypoints.Count - 1)
		int32_t L_0 = __this->get_waypointIndex_9();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_1 = __this->get_waypoints_4();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_1, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))))
		{
			goto IL_00a0;
		}
	}
	{
		// var targetPosition = waypoints[waypointIndex].transform.position;
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_3 = __this->get_waypoints_4();
		int32_t L_4 = __this->get_waypointIndex_9();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// targetPosition.z = 0f;
		(&V_0)->set_z_4((0.0f));
		// var enemyMovement = waveConfig.GetEnemyMoveSpeed() * Time.deltaTime;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_8 = __this->get_waveConfig_5();
		NullCheck(L_8);
		float L_9 = WaveConfig_GetEnemyMoveSpeed_mD4BC5E513CEE4EA5E998627C083A25947386911D_inline(L_8, /*hidden argument*/NULL);
		float L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
		// transform.position = Vector2.MoveTowards(transform.position, targetPosition, enemyMovement);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_15, /*hidden argument*/NULL);
		float L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = Vector2_MoveTowards_m1EC393CAB6ACD04D7A7856F02169D22FD61CDB89(L_14, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_19, /*hidden argument*/NULL);
		// if (transform.position == targetPosition)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		bool L_23 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00db;
		}
	}
	{
		// waypointIndex++;
		int32_t L_24 = __this->get_waypointIndex_9();
		__this->set_waypointIndex_9(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
		// }
		return;
	}

IL_00a0:
	{
		// FindObjectOfType<GameSession>().AddToScore(scoreValue);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * L_25 = Object_FindObjectOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mF6570188C76AA8664C062D7C5C72184B61133ACF(/*hidden argument*/Object_FindObjectOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mF6570188C76AA8664C062D7C5C72184B61133ACF_RuntimeMethod_var);
		int32_t L_26 = __this->get_scoreValue_6();
		NullCheck(L_25);
		GameSession_AddToScore_m25B41713BA1B9089BD1E3E644D71951C6DBBEE14(L_25, L_26, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint(pointGained, Camera.main.transform.position, pointGainedVolume);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_27 = __this->get_pointGained_7();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_28 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_pointGainedVolume_8();
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_27, L_30, L_31, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_32, /*hidden argument*/NULL);
	}

IL_00db:
	{
		// }
		return;
	}
}
// System.Void EnemyPathing::SetWaveConfig(WaveConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPathing_SetWaveConfig_m67D5D60389EE55180CFF87426F564DCD5785DE0B (EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfigToSet0, const RuntimeMethod* method)
{
	{
		// waveConfig = waveConfigToSet;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_0 = ___waveConfigToSet0;
		__this->set_waveConfig_5(L_0);
		// }
		return;
	}
}
// System.Void EnemyPathing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPathing__ctor_m96F75970CAF795FA53EF4831C86F9C7496C3B968 (EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int scoreValue = 5;
		__this->set_scoreValue_6(5);
		// [SerializeField] [Range(0, 1)] float pointGainedVolume = 0.75f;
		__this->set_pointGainedVolume_8((0.75f));
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
// System.Collections.IEnumerator EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_Start_m397934BCD27904E015FC514FAF7C940CA672E27F (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_Start_m397934BCD27904E015FC514FAF7C940CA672E27F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * L_0 = (U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E *)il2cpp_codegen_object_new(U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E_il2cpp_TypeInfo_var);
		U3CStartU3Ed__2__ctor_mE944070FA5FC3013B137052B1573AAF6944AD740(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator EnemySpawner::spawnAllEnemiesInWave(WaveConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_spawnAllEnemiesInWave_mE0628891AD64C4EE8F285118682AAA6F46A2BE0A (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveToSpawn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_spawnAllEnemiesInWave_mE0628891AD64C4EE8F285118682AAA6F46A2BE0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * L_0 = (U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 *)il2cpp_codegen_object_new(U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84_il2cpp_TypeInfo_var);
		U3CspawnAllEnemiesInWaveU3Ed__3__ctor_m12D9F46809664F50CF4FFDBEA7B683FB37586C09(L_0, 0, /*hidden argument*/NULL);
		U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * L_1 = L_0;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_2 = ___waveToSpawn0;
		NullCheck(L_1);
		L_1->set_waveToSpawn_2(L_2);
		return L_1;
	}
}
// System.Collections.IEnumerator EnemySpawner::spawnAllWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_spawnAllWaves_m4CABE41411A46AEC1E08D280CBD81BCD1090E5C3 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_spawnAllWaves_m4CABE41411A46AEC1E08D280CBD81BCD1090E5C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * L_0 = (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 *)il2cpp_codegen_object_new(U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586_il2cpp_TypeInfo_var);
		U3CspawnAllWavesU3Ed__4__ctor_m102AEA26F8B7313C4F1A9F19F503663D9D2C7757(L_0, 0, /*hidden argument*/NULL);
		U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_mED6FECD7E1057991ED710CD104501453BEEDA871 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
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
// System.Void GameSession::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSession_Awake_m7DA48EED2DD2C071B858C834D8EE6F4BAD3890E6 (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method)
{
	{
		// SetUpSingleton();
		GameSession_SetUpSingleton_m3EBBFD4F49CBAE3FF13F8EE16DF19D53DB43DAA8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameSession::SetUpSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSession_SetUpSingleton_m3EBBFD4F49CBAE3FF13F8EE16DF19D53DB43DAA8 (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSession_SetUpSingleton_m3EBBFD4F49CBAE3FF13F8EE16DF19D53DB43DAA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int numberOfGameSessions = FindObjectsOfType<GameSession>().Length;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameSessionU5BU5D_t61574D5AF894B8E93C237EA134E0CF350A34619D* L_0 = Object_FindObjectsOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mB78770BA28598B62C52F073A37CA89FB7FEB94A7(/*hidden argument*/Object_FindObjectsOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mB78770BA28598B62C52F073A37CA89FB7FEB94A7_RuntimeMethod_var);
		NullCheck(L_0);
		// if (numberOfGameSessions > 1)
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 GameSession::GetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameSession_GetScore_m261421177B31C07760F0942659EDCC341C24E7FD (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method)
{
	{
		// return score;
		int32_t L_0 = __this->get_score_4();
		return L_0;
	}
}
// System.Void GameSession::AddToScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSession_AddToScore_m25B41713BA1B9089BD1E3E644D71951C6DBBEE14 (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, int32_t ___scoreValue0, const RuntimeMethod* method)
{
	{
		// score += scoreValue;
		int32_t L_0 = __this->get_score_4();
		int32_t L_1 = ___scoreValue0;
		__this->set_score_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// }
		return;
	}
}
// System.Void GameSession::ResetGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSession_ResetGame_m5AAA74149896637E8655D08CFC4F8FA11F92A152 (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameSession_ResetGame_m5AAA74149896637E8655D08CFC4F8FA11F92A152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSession__ctor_m7A23EA1283AFD52547E4A98A8B368566F0F3DC9D (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method)
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
// System.Void HealthDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthDisplay_Start_mEB17D54FB168B486E96767626AAF4E21752F040F (HealthDisplay_tDF964EAB678DBFBB1EC61B5554EE24E31F125DB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthDisplay_Start_mEB17D54FB168B486E96767626AAF4E21752F040F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthText = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_HealthText_4(L_0);
		// player = FindObjectOfType<Player>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491(/*hidden argument*/Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var);
		__this->set_player_5(L_1);
		// }
		return;
	}
}
// System.Void HealthDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthDisplay_Update_m352632E07747035D6053D01EACAF7EECE5E6F5E9 (HealthDisplay_tDF964EAB678DBFBB1EC61B5554EE24E31F125DB8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// HealthText.text = player.getHealth().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_HealthText_4();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = __this->get_player_5();
		NullCheck(L_1);
		int32_t L_2 = Player_getHealth_mF33CA3FBA86C6B9E1509C18A6FF9783180F1950B_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void HealthDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthDisplay__ctor_mCAE6A5E5DB1C29BF2340D5BEFEF395929317BF75 (HealthDisplay_tDF964EAB678DBFBB1EC61B5554EE24E31F125DB8 * __this, const RuntimeMethod* method)
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
// System.Collections.IEnumerator Level::WaitAndLoadEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Level_WaitAndLoadEnd_m20AE556777AB8B73E520DC9884BB468D25726C15 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_WaitAndLoadEnd_m20AE556777AB8B73E520DC9884BB468D25726C15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * L_0 = (U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA *)il2cpp_codegen_object_new(U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA_il2cpp_TypeInfo_var);
		U3CWaitAndLoadEndU3Ed__1__ctor_mB37CDD78CF9F2FEC896D28CC2C4FCFDFD514B8E0(L_0, 0, /*hidden argument*/NULL);
		U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Level::WaitAndLoadWinner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Level_WaitAndLoadWinner_m512BC42F9DB64A7DE3A818E23C845A75E2EF44D6 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_WaitAndLoadWinner_m512BC42F9DB64A7DE3A818E23C845A75E2EF44D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * L_0 = (U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 *)il2cpp_codegen_object_new(U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541_il2cpp_TypeInfo_var);
		U3CWaitAndLoadWinnerU3Ed__2__ctor_m6BF06954D7C5C45A8460A5F2B37209490CA8A4C9(L_0, 0, /*hidden argument*/NULL);
		U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Level::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_LoadGame_m37B99D4AF36E778ADFCD54326003A392941A32CB (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_LoadGame_m37B99D4AF36E778ADFCD54326003A392941A32CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * V_0 = NULL;
	{
		// SceneManager.LoadScene("2DcarGame");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAD7EC52251FC3EB973EA15A330DE458E006E53B4, /*hidden argument*/NULL);
		// GameSession gs = FindObjectOfType<GameSession>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * L_0 = Object_FindObjectOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mF6570188C76AA8664C062D7C5C72184B61133ACF(/*hidden argument*/Object_FindObjectOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mF6570188C76AA8664C062D7C5C72184B61133ACF_RuntimeMethod_var);
		V_0 = L_0;
		// if (gs != null)
		GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// gs.ResetGame();
		GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * L_3 = V_0;
		NullCheck(L_3);
		GameSession_ResetGame_m5AAA74149896637E8655D08CFC4F8FA11F92A152(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Level::LoadGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_LoadGameOver_mD8D2FF13AD824851031F3C9396CFF0467D1BD072 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(WaitAndLoadEnd());
		RuntimeObject* L_0 = Level_WaitAndLoadEnd_m20AE556777AB8B73E520DC9884BB468D25726C15(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::LoadWinnerScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_LoadWinnerScene_mCD19C91C8615746324CF2F93600938A178237CDC (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(WaitAndLoadWinner());
		RuntimeObject* L_0 = Level_WaitAndLoadWinner_m512BC42F9DB64A7DE3A818E23C845A75E2EF44D6(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::LoadStartMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_LoadStartMenu_m1FA3148093140D616278E650D0801420CD5CA9F8 (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_LoadStartMenu_m1FA3148093140D616278E650D0801420CD5CA9F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_QuitGame_m49D8506FD999542FDAE47BA04B556B2332A53F5D (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Level_QuitGame_m49D8506FD999542FDAE47BA04B556B2332A53F5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("Quitting Game");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralB4525DEC730EDDA1A14353AAA2E40857BACC6F3A, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Level::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level__ctor_mBBC9E192AD5FC6CC5FA5DFA55E8CA13E182C353A (Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float delayInSeconds = 2f;
		__this->set_delayInSeconds_4((2.0f));
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
// System.Void MusicPlayer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicPlayer_Awake_mA60904394C1725C664514BD13BA55F8CEC17D6F0 (MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * __this, const RuntimeMethod* method)
{
	{
		// SetUpSingleton();
		MusicPlayer_SetUpSingleton_m19A6DE140ED2A0F7B4E06592123C60FC8CCAA60B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicPlayer::SetUpSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicPlayer_SetUpSingleton_m19A6DE140ED2A0F7B4E06592123C60FC8CCAA60B (MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_SetUpSingleton_m19A6DE140ED2A0F7B4E06592123C60FC8CCAA60B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (FindObjectsOfType<MusicPlayer>().Length > 1)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		MusicPlayerU5BU5D_t1CF213646B46ACDC71B40C4B31C310C1BD4126CA* L_0 = Object_FindObjectsOfType_TisMusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D_m2D59EFE3818E965BA586C6CDAB04501FE235056A(/*hidden argument*/Object_FindObjectsOfType_TisMusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D_m2D59EFE3818E965BA586C6CDAB04501FE235056A_RuntimeMethod_var);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicPlayer__ctor_mA83600A144210E8586F4618ED75C614BFE6450FC (MusicPlayer_tED49C79A2679189A904E6BC22CD55275F67D4D7D * __this, const RuntimeMethod* method)
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// SetUpMoveBoundaries();
		Player_SetUpMoveBoundaries_mACB7B8BB227FC2A4CA535674611703B02F8180A8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Move();
		Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 Player::getHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_getHealth_mF33CA3FBA86C6B9E1509C18A6FF9783180F1950B (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// return health;
		int32_t L_0 = __this->get_health_4();
		return L_0;
	}
}
// System.Void Player::SetUpMoveBoundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetUpMoveBoundaries_mACB7B8BB227FC2A4CA535674611703B02F8180A8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	{
		// Camera gameCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		V_0 = L_0;
		// xMin = gameCamera.ViewportToWorldPoint(new Vector3(0, 0, 0)).x+padding;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		float L_5 = __this->get_padding_8();
		__this->set_xMin_6(((float)il2cpp_codegen_add((float)L_4, (float)L_5)));
		// xMax = gameCamera.ViewportToWorldPoint(new Vector3(1, 0, 0)).x-padding;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_6, L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = __this->get_padding_8();
		__this->set_xMax_7(((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)));
		// }
		return;
	}
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Move_mBA49290713053DFE90D02C9B5E38353A71C1E0C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var deltaX = Input.GetAxis("Horizontal") * Time.deltaTime * moveSpeed;
		float L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_2 = __this->get_moveSpeed_5();
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		// var newXPos = transform.position.x + deltaX;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6 = V_0;
		V_1 = ((float)il2cpp_codegen_add((float)L_5, (float)L_6));
		// newXPos = Mathf.Clamp(newXPos, xMin, xMax);
		float L_7 = V_1;
		float L_8 = __this->get_xMin_6();
		float L_9 = __this->get_xMax_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_7, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// this.transform.position = new Vector2(newXPos, -5.75f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_12 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), L_12, (-5.75f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___otherObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnTriggerEnter2D_mAF357F7244427CB9EADB81B5A6C4F0AF481641D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * V_0 = NULL;
	{
		// DamageDealer dmgDealer = otherObject.gameObject.GetComponent<DamageDealer>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___otherObject0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_2 = GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E(L_1, /*hidden argument*/GameObject_GetComponent_TisDamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6_m2C32305EC1E55E718D9BB7321AF27D4231F0664E_RuntimeMethod_var);
		V_0 = L_2;
		// AudioSource.PlayClipAtPoint(playerHitSound, Camera.main.transform.position, playerHitSoundVolume);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get_playerHitSound_9();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_playerHitSoundVolume_10();
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_3, L_6, L_7, /*hidden argument*/NULL);
		// if (!dmgDealer)
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0035;
		}
	}
	{
		// return;
		return;
	}

IL_0035:
	{
		// GameObject explosion = Instantiate(deathVFX, otherObject.transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_deathVFX_13();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_11 = ___otherObject0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_13, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(explosion, explosionDuration);
		float L_16 = __this->get_explosionDuration_14();
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_15, L_16, /*hidden argument*/NULL);
		// ProcessHit(dmgDealer);
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_17 = V_0;
		Player_ProcessHit_mCBFF65ACF52F604E30DA7B868C6D57597E5A46EA(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::ProcessHit(DamageDealer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ProcessHit_mCBFF65ACF52F604E30DA7B868C6D57597E5A46EA (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * ___dmg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_ProcessHit_mCBFF65ACF52F604E30DA7B868C6D57597E5A46EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health -= dmg.GetDamage();
		int32_t L_0 = __this->get_health_4();
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_1 = ___dmg0;
		NullCheck(L_1);
		int32_t L_2 = DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A_inline(L_1, /*hidden argument*/NULL);
		__this->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2)));
		// dmg.Hit();
		DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * L_3 = ___dmg0;
		NullCheck(L_3);
		DamageDealer_Hit_m25098E8BE8713BACB0B71CBCA7638785E013FD2C(L_3, /*hidden argument*/NULL);
		// if(health <= 0)
		int32_t L_4 = __this->get_health_4();
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		// health = 0;
		__this->set_health_4(0);
		// AudioSource.PlayClipAtPoint(playerDeathSound, Camera.main.transform.position, playerDeathSoundVolume);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_playerDeathSound_11();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_playerDeathSoundVolume_12();
		AudioSource_PlayClipAtPoint_m1DB4B29B9FBCF0832AB7855AD2B2B319322B61FC(L_5, L_8, L_9, /*hidden argument*/NULL);
		// GameObject explosion = Instantiate(deathVFX, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_deathVFX_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_10, L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Destroy(explosion, explosionDuration);
		float L_15 = __this->get_explosionDuration_14();
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_14, L_15, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// FindObjectOfType<Level>().LoadGameOver();
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_17 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_17);
		Level_LoadGameOver_mD8D2FF13AD824851031F3C9396CFF0467D1BD072(L_17, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] int health = 100;
		__this->set_health_4(((int32_t)100));
		// [SerializeField] float moveSpeed = 10f;
		__this->set_moveSpeed_5((10.0f));
		// float padding = 0.65f;
		__this->set_padding_8((0.649999976f));
		// [SerializeField] [Range(0, 1)] float playerHitSoundVolume = 0.75f;
		__this->set_playerHitSoundVolume_10((0.75f));
		// [SerializeField] [Range(0, 1)] float playerDeathSoundVolume = 0.75f;
		__this->set_playerDeathSoundVolume_12((0.75f));
		// [SerializeField] float explosionDuration = 1f;
		__this->set_explosionDuration_14((1.0f));
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
// System.Void ScoreDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_Start_m18A9D066FCD5D2688F589FDD814B56EB48182E7F (ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreDisplay_Start_m18A9D066FCD5D2688F589FDD814B56EB48182E7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_scoreText_4(L_0);
		// gameSession = FindObjectOfType<GameSession>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * L_1 = Object_FindObjectOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mF6570188C76AA8664C062D7C5C72184B61133ACF(/*hidden argument*/Object_FindObjectOfType_TisGameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9_mF6570188C76AA8664C062D7C5C72184B61133ACF_RuntimeMethod_var);
		__this->set_gameSession_5(L_1);
		// }
		return;
	}
}
// System.Void ScoreDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_Update_m104674478C444000FAD9F531723CB626CAD7B82F (ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreDisplay_Update_m104674478C444000FAD9F531723CB626CAD7B82F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText.text = gameSession.GetScore().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_4();
		GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * L_1 = __this->get_gameSession_5();
		NullCheck(L_1);
		int32_t L_2 = GameSession_GetScore_m261421177B31C07760F0942659EDCC341C24E7FD_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// if(scoreText.text == "100")
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_scoreText_4();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_4);
		bool L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		// FindObjectOfType<Level>().LoadWinnerScene();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_7 = Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8(/*hidden argument*/Object_FindObjectOfType_TisLevel_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93_m715012CCED83C1A1A1AD32A3A09C651792748CD8_RuntimeMethod_var);
		NullCheck(L_7);
		Level_LoadWinnerScene_mCD19C91C8615746324CF2F93600938A178237CDC(L_7, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void ScoreDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay__ctor_m7BAE440B77B8FCE54475EBC1CDB2E82937E17496 (ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A * __this, const RuntimeMethod* method)
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
// UnityEngine.GameObject WaveConfig::GeteEnemyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * WaveConfig_GeteEnemyPrefab_m1B63BDE0D4A79734E7638B2DBA759E127F3BF952 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// return enemyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemyPrefab_4();
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Transform> WaveConfig::GetWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * WaveConfig_GetWaypoints_m967B53EF4FA329D74809A4A70DD91090E5599D70 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaveConfig_GetWaypoints_m967B53EF4FA329D74809A4A70DD91090E5599D70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var waveWayPoints = new List<Transform>();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F(L_0, /*hidden argument*/List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (Transform child in pathPrefab.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_pathPrefab_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0019:
		{
			// foreach (Transform child in pathPrefab.transform)
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_5, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// waveWayPoints.Add(child);
			List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_6 = V_0;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_2;
			NullCheck(L_6);
			List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982(L_6, L_7, /*hidden argument*/List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		}

IL_002c:
		{
			// foreach (Transform child in pathPrefab.transform)
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (!L_11)
			{
				goto IL_0046;
			}
		}

IL_0040:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		// return waveWayPoints;
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_13 = V_0;
		return L_13;
	}
}
// System.Single WaveConfig::GetTimeBetweenSpawns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaveConfig_GetTimeBetweenSpawns_m19729DCB6B94BCC9D8E9FA275B7FA9E40C32E880 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// return timeBetweenSpawns;
		float L_0 = __this->get_timeBetweenSpawns_6();
		return L_0;
	}
}
// System.Int32 WaveConfig::GetNumberOfEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveConfig_GetNumberOfEnemies_mACD21FB3F34347F81B93262A8B265AB1348A76D2 (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// return numberOfEnemies;
		int32_t L_0 = __this->get_numberOfEnemies_7();
		return L_0;
	}
}
// System.Single WaveConfig::GetEnemyMoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaveConfig_GetEnemyMoveSpeed_mD4BC5E513CEE4EA5E998627C083A25947386911D (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// return enemyMoveSpeed;
		float L_0 = __this->get_enemyMoveSpeed_8();
		return L_0;
	}
}
// System.Void WaveConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveConfig__ctor_mD613D2BF33D5F186EBB6945C1BE31863064896EB (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] float timeBetweenSpawns = 0.5f;
		__this->set_timeBetweenSpawns_6((0.5f));
		// [SerializeField] int numberOfEnemies = 5;
		__this->set_numberOfEnemies_7(5);
		// [SerializeField] float enemyMoveSpeed = 2f;
		__this->set_enemyMoveSpeed_8((2.0f));
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void EnemySpawner_<Start>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_mE944070FA5FC3013B137052B1573AAF6944AD740 (U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemySpawner_<Start>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_mF40183A07894BB9FBE59EF8DF16571FDB3AE0445 (U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemySpawner_<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_mD71364F523333D4D0A7971027874EE88D2FDA84A (U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return StartCoroutine(spawnAllWaves());
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_4 = V_1;
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6 = EnemySpawner_spawnAllWaves_m4CABE41411A46AEC1E08D280CBD81BCD1090E5C3(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_4, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0039:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (looping); //(looping == true)
		EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_looping_5();
		if (L_9)
		{
			goto IL_001e;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EnemySpawner_<Start>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0DCE6C330B04A60C0BEE38973B7C1EC95425F6E0 (U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemySpawner_<Start>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mEAEEB52A0DFBE1A4CA3FB8E7CCC75A7A21D9D054 (U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mEAEEB52A0DFBE1A4CA3FB8E7CCC75A7A21D9D054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_mEAEEB52A0DFBE1A4CA3FB8E7CCC75A7A21D9D054_RuntimeMethod_var);
	}
}
// System.Object EnemySpawner_<Start>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_mADEEFD26DC78C33205C75CE1F422365DE6595AD6 (U3CStartU3Ed__2_t5513924D16BCEF74ED9803271C2839CAA17CD60E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EnemySpawner_<spawnAllEnemiesInWave>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllEnemiesInWaveU3Ed__3__ctor_m12D9F46809664F50CF4FFDBEA7B683FB37586C09 (U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemySpawner_<spawnAllEnemiesInWave>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllEnemiesInWaveU3Ed__3_System_IDisposable_Dispose_mA99BE6618A70805A0BB622F8D511B045ABB12DB2 (U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EnemySpawner_<spawnAllEnemiesInWave>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspawnAllEnemiesInWaveU3Ed__3_MoveNext_m0EB9527B9606712D35FDD169F90B4F04972584BC (U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CspawnAllEnemiesInWaveU3Ed__3_MoveNext_m0EB9527B9606712D35FDD169F90B4F04972584BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int enemyCount = 1; enemyCount <= waveToSpawn.GetNumberOfEnemies(); enemyCount++)
		__this->set_U3CenemyCountU3E5__2_3(1);
		goto IL_0096;
	}

IL_0020:
	{
		// var newEnemy = Instantiate(
		//                 waveToSpawn.GeteEnemyPrefab(),
		//                 waveToSpawn.GetWaypoints()[0].transform.position,
		//                 Quaternion.identity);
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_3 = __this->get_waveToSpawn_2();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = WaveConfig_GeteEnemyPrefab_m1B63BDE0D4A79734E7638B2DBA759E127F3BF952_inline(L_3, /*hidden argument*/NULL);
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_5 = __this->get_waveToSpawn_2();
		NullCheck(L_5);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_6 = WaveConfig_GetWaypoints_m967B53EF4FA329D74809A4A70DD91090E5599D70(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_6, 0, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// newEnemy.GetComponent<EnemyPathing>().SetWaveConfig(waveToSpawn);
		NullCheck(L_11);
		EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * L_12 = GameObject_GetComponent_TisEnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1_m3379968F3580F1A78D508358E60EB9EACD56B94B(L_11, /*hidden argument*/GameObject_GetComponent_TisEnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1_m3379968F3580F1A78D508358E60EB9EACD56B94B_RuntimeMethod_var);
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_13 = __this->get_waveToSpawn_2();
		NullCheck(L_12);
		EnemyPathing_SetWaveConfig_m67D5D60389EE55180CFF87426F564DCD5785DE0B_inline(L_12, L_13, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(waveToSpawn.GetTimeBetweenSpawns());
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_14 = __this->get_waveToSpawn_2();
		NullCheck(L_14);
		float L_15 = WaveConfig_GetTimeBetweenSpawns_m19729DCB6B94BCC9D8E9FA275B7FA9E40C32E880_inline(L_14, /*hidden argument*/NULL);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int enemyCount = 1; enemyCount <= waveToSpawn.GetNumberOfEnemies(); enemyCount++)
		int32_t L_17 = __this->get_U3CenemyCountU3E5__2_3();
		V_1 = L_17;
		int32_t L_18 = V_1;
		__this->set_U3CenemyCountU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
	}

IL_0096:
	{
		// for (int enemyCount = 1; enemyCount <= waveToSpawn.GetNumberOfEnemies(); enemyCount++)
		int32_t L_19 = __this->get_U3CenemyCountU3E5__2_3();
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_20 = __this->get_waveToSpawn_2();
		NullCheck(L_20);
		int32_t L_21 = WaveConfig_GetNumberOfEnemies_mACD21FB3F34347F81B93262A8B265AB1348A76D2_inline(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)L_21)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EnemySpawner_<spawnAllEnemiesInWave>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspawnAllEnemiesInWaveU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC8ED3C471188801B2DDD48DCF0AE5128979B123D (U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemySpawner_<spawnAllEnemiesInWave>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllEnemiesInWaveU3Ed__3_System_Collections_IEnumerator_Reset_m906239505AE614470AD46CB505788778F926F1A9 (U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CspawnAllEnemiesInWaveU3Ed__3_System_Collections_IEnumerator_Reset_m906239505AE614470AD46CB505788778F926F1A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CspawnAllEnemiesInWaveU3Ed__3_System_Collections_IEnumerator_Reset_m906239505AE614470AD46CB505788778F926F1A9_RuntimeMethod_var);
	}
}
// System.Object EnemySpawner_<spawnAllEnemiesInWave>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspawnAllEnemiesInWaveU3Ed__3_System_Collections_IEnumerator_get_Current_m06EDBB7FA3931041A2B2F85740DC077F0B4C388E (U3CspawnAllEnemiesInWaveU3Ed__3_t0C6714752F33A1F0F77843A041960D87FC52CC84 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EnemySpawner_<spawnAllWaves>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllWavesU3Ed__4__ctor_m102AEA26F8B7313C4F1A9F19F503663D9D2C7757 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EnemySpawner_<spawnAllWaves>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllWavesU3Ed__4_System_IDisposable_Dispose_mFF8D38DEE48E6B251E27A1129AFCA1959D00BB81 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CspawnAllWavesU3Ed__4_U3CU3Em__Finally1_mA0046731003626DF8794A0136EA6C69BA541BAA4(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean EnemySpawner_<spawnAllWaves>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspawnAllWavesU3Ed__4_MoveNext_m4A41915968BB23D04C639B0F571892C8C406FF38 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CspawnAllWavesU3Ed__4_MoveNext_m4A41915968BB23D04C639B0F571892C8C406FF38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * V_2 = NULL;
	WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0065;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0097;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach(WaveConfig currentWave in waveConfigList)
			EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_4 = V_2;
			NullCheck(L_4);
			List_1_t4265154C889AB1BC8D3EF55779EB8329112955A0 * L_5 = L_4->get_waveConfigList_4();
			NullCheck(L_5);
			Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC  L_6 = List_1_GetEnumerator_m2A711D3ADD853DAD96AEAB2C46E19F4824A4A697(L_5, /*hidden argument*/List_1_GetEnumerator_m2A711D3ADD853DAD96AEAB2C46E19F4824A4A697_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_006d;
		}

IL_003b:
		{
			// foreach(WaveConfig currentWave in waveConfigList)
			Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_8 = Enumerator_get_Current_m2815D75D58BB4784254C0D15FEB6D38621CADDB1_inline((Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC *)L_7, /*hidden argument*/Enumerator_get_Current_m2815D75D58BB4784254C0D15FEB6D38621CADDB1_RuntimeMethod_var);
			V_3 = L_8;
			// yield return StartCoroutine(spawnAllEnemiesInWave(currentWave));
			EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_9 = V_2;
			EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_10 = V_2;
			WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_11 = V_3;
			NullCheck(L_10);
			RuntimeObject* L_12 = EnemySpawner_spawnAllEnemiesInWave_mE0628891AD64C4EE8F285118682AAA6F46A2BE0A(L_10, L_11, /*hidden argument*/NULL);
			NullCheck(L_9);
			Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_9, L_12, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0097;
		}

IL_0065:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_006d:
		{
			// foreach(WaveConfig currentWave in waveConfigList)
			Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC * L_14 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_15 = Enumerator_MoveNext_mA7F5DD47143A8E61B99207E9326B7CCB11551C51((Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC *)L_14, /*hidden argument*/Enumerator_MoveNext_mA7F5DD47143A8E61B99207E9326B7CCB11551C51_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_003b;
			}
		}

IL_007a:
		{
			U3CspawnAllWavesU3Ed__4_U3CU3Em__Finally1_mA0046731003626DF8794A0136EA6C69BA541BAA4(__this, /*hidden argument*/NULL);
			Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC * L_16 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_16, sizeof(Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC ));
			// }
			V_0 = (bool)0;
			goto IL_0097;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0090;
	}

FAULT_0090:
	{ // begin fault (depth: 1)
		U3CspawnAllWavesU3Ed__4_System_IDisposable_Dispose_mFF8D38DEE48E6B251E27A1129AFCA1959D00BB81(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(144)
	} // end fault
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0097:
	{
		bool L_17 = V_0;
		return L_17;
	}
}
// System.Void EnemySpawner_<spawnAllWaves>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllWavesU3Ed__4_U3CU3Em__Finally1_mA0046731003626DF8794A0136EA6C69BA541BAA4 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CspawnAllWavesU3Ed__4_U3CU3Em__Finally1_mA0046731003626DF8794A0136EA6C69BA541BAA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_mAFE6A2D66A676D6E38B6831B5F7C7E5B544EBBBD((Enumerator_tF71AD1D34CDCF02F9BA13A640A311633915A51DC *)L_0, /*hidden argument*/Enumerator_Dispose_mAFE6A2D66A676D6E38B6831B5F7C7E5B544EBBBD_RuntimeMethod_var);
		return;
	}
}
// System.Object EnemySpawner_<spawnAllWaves>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspawnAllWavesU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m15CC9123F502357B191F810A51FE6A220A6AF4D2 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EnemySpawner_<spawnAllWaves>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnAllWavesU3Ed__4_System_Collections_IEnumerator_Reset_mD6C5F04EFED5C3F5A9196CA95E220E200C989DD4 (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CspawnAllWavesU3Ed__4_System_Collections_IEnumerator_Reset_mD6C5F04EFED5C3F5A9196CA95E220E200C989DD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CspawnAllWavesU3Ed__4_System_Collections_IEnumerator_Reset_mD6C5F04EFED5C3F5A9196CA95E220E200C989DD4_RuntimeMethod_var);
	}
}
// System.Object EnemySpawner_<spawnAllWaves>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CspawnAllWavesU3Ed__4_System_Collections_IEnumerator_get_Current_m3FD0657D9CB67740CDB94CCEAE3CF8E82FCD4E6E (U3CspawnAllWavesU3Ed__4_tFCE4CD9057AA5E3996B605E0995C6899F4F4E586 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Level_<WaitAndLoadEnd>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadEndU3Ed__1__ctor_mB37CDD78CF9F2FEC896D28CC2C4FCFDFD514B8E0 (U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Level_<WaitAndLoadEnd>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadEndU3Ed__1_System_IDisposable_Dispose_m9267870DCBBD9FDADB750EE900B8B9B8E826B37D (U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Level_<WaitAndLoadEnd>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAndLoadEndU3Ed__1_MoveNext_m20C942AD11248596806D6517B8ADF9306B2B21B5 (U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAndLoadEndU3Ed__1_MoveNext_m20C942AD11248596806D6517B8ADF9306B2B21B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delayInSeconds);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delayInSeconds_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene("EndGame");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9368ADA1EE43DEACF0656CC518EEFFD44A4F06EE, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Level_<WaitAndLoadEnd>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAndLoadEndU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD2699BF883E5AB5A8763740293EAFF57E5CDF682 (U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Level_<WaitAndLoadEnd>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadEndU3Ed__1_System_Collections_IEnumerator_Reset_m503E99666A8302BA7879D876250744AB5A47FBE8 (U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAndLoadEndU3Ed__1_System_Collections_IEnumerator_Reset_m503E99666A8302BA7879D876250744AB5A47FBE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWaitAndLoadEndU3Ed__1_System_Collections_IEnumerator_Reset_m503E99666A8302BA7879D876250744AB5A47FBE8_RuntimeMethod_var);
	}
}
// System.Object Level_<WaitAndLoadEnd>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAndLoadEndU3Ed__1_System_Collections_IEnumerator_get_Current_m5846A2BE9B075B85221C1CBDD35FB38477859380 (U3CWaitAndLoadEndU3Ed__1_t000766AE8319159B34C5D1AD60F1E61AF8B510EA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Level_<WaitAndLoadWinner>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadWinnerU3Ed__2__ctor_m6BF06954D7C5C45A8460A5F2B37209490CA8A4C9 (U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Level_<WaitAndLoadWinner>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadWinnerU3Ed__2_System_IDisposable_Dispose_m9BA722750D948472364DC44F834AD43F12B3E9C5 (U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Level_<WaitAndLoadWinner>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAndLoadWinnerU3Ed__2_MoveNext_m644BAA476694F2915F79F711DDBC33F6B14F6AE0 (U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAndLoadWinnerU3Ed__2_MoveNext_m644BAA476694F2915F79F711DDBC33F6B14F6AE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delayInSeconds);
		Level_t1E16C72654E4E38D3256A23ED6EAEEC4D0687D93 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_delayInSeconds_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene("WinnerScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral664B0BA9D0FE8753D6E4330317FC4EC8774FF86F, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Level_<WaitAndLoadWinner>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAndLoadWinnerU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m472ADA290F512D8885487FA9F4796F053D7EFA00 (U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Level_<WaitAndLoadWinner>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadWinnerU3Ed__2_System_Collections_IEnumerator_Reset_mE93A4B0D2E72C2EDF34F6D0161B7606F5C3722E6 (U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitAndLoadWinnerU3Ed__2_System_Collections_IEnumerator_Reset_mE93A4B0D2E72C2EDF34F6D0161B7606F5C3722E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWaitAndLoadWinnerU3Ed__2_System_Collections_IEnumerator_Reset_mE93A4B0D2E72C2EDF34F6D0161B7606F5C3722E6_RuntimeMethod_var);
	}
}
// System.Object Level_<WaitAndLoadWinner>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAndLoadWinnerU3Ed__2_System_Collections_IEnumerator_get_Current_m8186A953721DC74D27C2C260EBB79D74ED31677B (U3CWaitAndLoadWinnerU3Ed__2_tF5BD5EE8B7CC414F3B07D01E8CDCF689D9794541 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfig_GetEnemyMoveSpeed_mD4BC5E513CEE4EA5E998627C083A25947386911D_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// return enemyMoveSpeed;
		float L_0 = __this->get_enemyMoveSpeed_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_getHealth_mF33CA3FBA86C6B9E1509C18A6FF9783180F1950B_inline (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// return health;
		int32_t L_0 = __this->get_health_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_mACE71A6C2E3690BD4B5573A247846EDDE0BF7C9A_inline (DamageDealer_t5AB6A6C000BCD605B28AEAF6B8E46F4EF5ED78D6 * __this, const RuntimeMethod* method)
{
	{
		// return damage;
		int32_t L_0 = __this->get_damage_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSession_GetScore_m261421177B31C07760F0942659EDCC341C24E7FD_inline (GameSession_t01C53B6EB975CC4025A3484995B36C45BBA800C9 * __this, const RuntimeMethod* method)
{
	{
		// return score;
		int32_t L_0 = __this->get_score_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * WaveConfig_GeteEnemyPrefab_m1B63BDE0D4A79734E7638B2DBA759E127F3BF952_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// return enemyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemyPrefab_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyPathing_SetWaveConfig_m67D5D60389EE55180CFF87426F564DCD5785DE0B_inline (EnemyPathing_tE4C6941C49CDA8ADFA4B2DEE870CEDA84C20CBF1 * __this, WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * ___waveConfigToSet0, const RuntimeMethod* method)
{
	{
		// waveConfig = waveConfigToSet;
		WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * L_0 = ___waveConfigToSet0;
		__this->set_waveConfig_5(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfig_GetTimeBetweenSpawns_m19729DCB6B94BCC9D8E9FA275B7FA9E40C32E880_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// return timeBetweenSpawns;
		float L_0 = __this->get_timeBetweenSpawns_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WaveConfig_GetNumberOfEnemies_mACD21FB3F34347F81B93262A8B265AB1348A76D2_inline (WaveConfig_t4820CBD9DE990BD60B5EDBB787AE897A0A3B02E1 * __this, const RuntimeMethod* method)
{
	{
		// return numberOfEnemies;
		int32_t L_0 = __this->get_numberOfEnemies_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
