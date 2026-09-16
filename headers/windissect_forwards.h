#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
namespace Concurrency { namespace details { class _Task_impl_base; } } 
namespace Microsoft { namespace WRL { class Details; } } 
namespace Platform { class Details; } 
class SuspensionDeferralTracker; 
namespace Windows { namespace ApplicationModel { class Package; } } 
namespace Windows { namespace UI { namespace Xaml { class Application; } } } 
namespace Windows { namespace UI { namespace Xaml { class GridLength; } } } 
namespace Windows { namespace UI { namespace Xaml { class Window; } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { class TextInputUndocked; } } } 
namespace XamlTypeInfo { namespace InfoProvider { namespace XamlTypeInfoProvider { class CriticalSection; } } } 
namespace std { class locale; } 
class tson; 
class winrt; 
class ActivityData; class CloseHandle; class CoTaskMemFree; class Destroy; class DictationUtils; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HINSTANCE__; class HSTRING__; class HTIPTEST__; class HWND__; class IActivationFactory; class IClassFactory; class IInspectable; class IUnknown; class LeaveCriticalSection; class MemberInfo; class MultiViewManager; class ReleaseSRWLockExclusive; class ScopedSuspensionDeferralTracker; class ScopedSuspensionDeferralTrackerCleaner; class SuspensionDeferralTracker; class TextInputTraceLogging; class TipReportingInfo; class TypeInfo; class ViewCreationTests; class VoiceTypingTraceLogging; class WindowsDeleteString; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _GenerateTask_0; class _Grp_t; class _Mbstatet; class _RO_REGISTRATION_COOKIE; class _RTL_CRITICAL_SECTION; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _SetUnwrappedAsyncOp; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WAIT; class _TlgReflectorTag_Param0IsProviderType; class __WIL_RTL_FEATURE_USAGE_DATA; class __abi_FTMWeakRefData; class __abi_IUnknown; class __abi___classObjectEntry; class __abi_dtor_helper; class __s_GUID; class __winRT; class _tip_CandidateWindowControlShowTest; class _tip_FloatingSuggestionUIClipboardHistoryShowTest; class _tip_FloatingSuggestionUIEmojiPanelShowTest; class _tip_InputAppLaunchingTest; class _tip_InputAppResumingTest; class _tip_InputAppSuspendingTest; class _tip_InputAppViewCreationTest; class _tip_InputPanelInitializationTest; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class append; class assign; class lambda_1; class thunk; class tson; class type_info; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class winrt; 
namespace Concurrency { class cancellation_token_source; class invalid_operation; class scheduler_interface; class scheduler_ptr; class task; class task_canceled; class task_continuation_context; class task_options; } 
namespace Concurrency { namespace details { class _CancellationTokenRegistration; class _CancellationTokenState; class _ContextCallback; class _ContinuationTaskHandleBase; class _ExceptionHolder; class _GetStaticAmbientSchedulerRef; class _MakeTToUnitFunc; class _SelectorTaskGenerator; class _TaskCreationCallstack; class _TaskProcHandle; class _Task_impl; class _Task_impl_base; class _ThenImplOptions; class _TypeSelectorNoAsync; } } 
namespace HardwareKeyboardUX { class ICandidateWindowShowPolicy; } 
namespace InputApp { namespace InputApp_XamlTypeInfo { class __XamlMetaDataProviderActivationFactory; } } 
namespace Microsoft { namespace WRL { class ComPtr; class Details; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HStringReference; } } } 
namespace Platform { class Agile; class Array; class Box; class Details; class EventSource; class Exception; class Guid; class Object; class String; class StringReference; class WeakReference; class WriteOnlyArray; } 
namespace Platform { namespace Collections { class Details; } } 
namespace TestInfo_ODR_guard { class TestInfo; } 
namespace TextInput { namespace DictationUI { class DictationCommandArgs; class ModernDictationModel; } } 
namespace TextInputLayoutData { class LayoutDataResourceLoader; } 
namespace TouchKeyboardUX { class CloseButtonPressedEventHandler; class IInputPanelModel; class ITextInputInitializationPreferencesProvider; } 
namespace Utility { class DynamicDependencyLoader; class details; } 
namespace Windows { namespace ApplicationModel { class Package; } } 
namespace Windows { namespace ApplicationModel { namespace Core { class CoreApplication; class CoreApplicationView; } } } 
namespace Windows { namespace ApplicationModel { namespace Resources { class ResourceLoader; } } } 
namespace Windows { namespace Foundation { class AsyncActionCompletedHandler; class AsyncOperationCompletedHandler; class EventHandler; class GuidHelper; class IAsyncOperation; class PropertyValue; class TypedEventHandler; class Uri; } } 
namespace Windows { namespace Foundation { namespace Collections { class IKeyValuePair; class IMapChangedEventArgs; class IObservableMap; class IObservableVector; class IVector; class IVectorChangedEventArgs; class MapChangedEventHandler; class VectorChangedEventHandler; } } } 
namespace Windows { namespace Foundation { namespace Metadata { class ApiInformation; } } } 
namespace Windows { namespace System { class DispatcherQueue; class DispatcherQueueHandler; } } 
namespace Windows { namespace UI { class Color; class ColorHelper; } } 
namespace Windows { namespace UI { namespace Colors { class Aqua; } } } 
namespace Windows { namespace UI { namespace Core { class CoreWindow; class VisibilityChangedEventArgs; } } } 
namespace Windows { namespace UI { namespace Input { class PointerVisualizationSettings; } } } 
namespace Windows { namespace UI { namespace ViewManagement { namespace Core { class CoreInputView; class CoreInputViewOcclusionsChangedEventArgs; } } } } 
namespace Windows { namespace UI { namespace Xaml { class Application; class DataContextChangedEventArgs; class DependencyObject; class DependencyProperty; class FrameworkElement; class GridLength; class ResourceDictionary; class RoutedEventHandler; class SuspendingEventHandler; class Window; class WindowSizeChangedEventHandler; } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Automation { class AutomationProperties; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Controls { class TextBlock; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Data { class PropertyChangedEventArgs; class PropertyChangedEventHandler; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Interop { class BindableVectorChangedEventHandler; class IBindableObservableVector; class NotifyCollectionChangedEventArgs; class TypeName; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Markup { class IComponentConnector; class IXamlMember; class IXamlMetadataProvider; class XamlMarkupHelper; class XmlnsDefinition; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Media { class IVisualTreeHelperStatics; class VisualTreeHelper; } } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { class TextInputUndocked; } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { namespace SuggestionUIUndocked { class ISuggestionUIContainerViewModel; class ISuggestionsProvider; } } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { namespace TextInput { namespace Common { class ICommonResourceLoader; class IPlatformAdapter; class ITextFrameworkAdapter; class ITextFrameworkFocusChangedEventArgs; class ITextFrameworkKeyboardChangedEventArgs; class ITextInputSettingsManager; class ITextInputSettingsValueChangedEventArgs; class IViewMessageChannel; class IViewPositionAndSizeManager; class IViewPositionAndSizeManagerAvailableSizeChangedEventArgs; class IViewPositionAndSizeManagerViewActivationChangedEventArgs; class IViewPositionAndSizeManagerViewStateChangedEventArgs; class IViewSpecificAdditionalArgs; class SizePositionInfo; class TextInputAppResourceLoader; } } } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { namespace TextInput { namespace Common { namespace Dictation { class IDictationControlCommandArgs; class IDictationModel2; class IDictationModelCommon; } } } } } } 
namespace WindowsInternal { namespace ComposableShell { namespace Experiences { namespace TextInput { namespace Common { namespace LayoutData { class IKeyboardCategorySet; class IKeyboardData; class IKeyboardDataStore; class IKeyboardSet; class ILayoutDataResourceLoader; } } } } } } 
namespace WindowsUdk { namespace ApplicationModel { class ApplicationView; } } 
namespace WindowsUdk { namespace ApplicationModel { namespace Core { class CoreApplication; } } } 
namespace WindowsUdk { namespace ApplicationModel { namespace OnScreenInput { class OnScreenInputManager; } } } 
namespace WindowsUdk { namespace ApplicationModel { namespace OnScreenInput { namespace KnownOnScreenInputUriSchemes { class Candidates; class Default; class Dictation; class DictationLauncher; class Emoji; class LanguageBar; class Other; } } } } 
namespace XamlBindingInfo { class IXamlBindings; class XamlBindings; } 
namespace XamlTypeInfo { namespace InfoProvider { class XamlUserType; } } 
namespace XamlTypeInfo { namespace InfoProvider { namespace XamlTypeInfoProvider { class CriticalSection; } } } 
namespace std { class _Bt_state_t; class _Buf; class _Char_traits_eq; class _Cmp_collate; class _Cmp_icase; class _Deque_const_iterator; class _Deque_iterator; class _Deque_simple_types; class _Deque_unchecked_iterator; class _Deque_val; class _Facet_base; class _Func_base; class _Func_class; class _Func_impl_no_alloc; class _Hash_find_last_result; class _Iterator_base0; class _List_const_iterator; class _List_node; class _List_simple_types; class _List_unchecked_const_iterator; class _List_unchecked_iterator; class _List_val; class _Loop_vals_t; class _Node_base; class _Node_if; class _Node_rep; class _Root_node; class _Sequence; class _Simple_types; class _String_iterator; class _String_val; class _Tgt_state_t; class _Tree_find_result; class _Tree_id; class _Tree_iterator; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Uhash_compare; class _Value_init_tag; class _Vb_const_iterator; class _Vb_iterator; class _Vb_reference; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class _Wrap_alloc; class allocator; class back_insert_iterator; class bad_alloc; class bad_array_new_length; class bad_cast; class basic_istream; class basic_regex; class basic_streambuf; class basic_string; class char_traits; class collate; class ctype; class default_delete; class deque; class equal_to; class exception; class exception_ptr; class fpos; class function; class hash; class initializer_list; class integral_constant; class invalid_argument; class less; class locale; class logic_error; class map; class match_results; class mutex; class nothrow_t; class nullptr_t; class once_flag; class pair; class regex_iterator; class regex_token_iterator; class regex_traits; class runtime_error; class shared_ptr; class sub_match; class unique_ptr; class vector; class weak_ptr; } 
namespace tip2 { class details; class test_flag; class test_info; class test_requirement; class test_state; class test_watcher; class tip_test; class vector_nothrow; } 
namespace wil { class ActivityBase; class ActivityThreadWatcher; class CallContextInfo; class FailureInfo; class ResultException; class StoredFailureInfo; class com_ptr_t; class err_exception_policy; class err_returncode_policy; class unique_any_t; class unique_winrt_event_token_cx; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class EnabledStateManager; class IFailureCallback; class ResultStatus; class StoredCallContextInfo; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class handle_null_resource_policy; class resource_policy; class shared_object; class unique_storage; } } 
namespace wil { namespace details_abi { class ProcessLocalData; class ProcessLocalStorageData; class ThreadLocalData; } } 
namespace wistd { class integral_constant; } 

