#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 20 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked {
class TextInputTelemetryLogger {
public:
    class CandidateControlPage_SettingsValueChanged;
    class ExpressiveSuggestionUIPageActivationChanged;
    class ExpressiveSuggestionUIPageKeyboardChanged;
    class ExpressiveSuggestionUIPageTryHide;
    class ExpressiveSuggestionUIPageTryShow;
    class ExpressiveSuggestionUIPageViewStateChanged;
    class InputAppCreateView;
    class InputAppLaunch;
    class InputAppOnDemandViewCreationRequested;
    class InputAppPage_OnLoaded;
    class InputAppResuming;
    class InputAppSuspending;
    class InputPanelPageActivationChanged;
    class InputPanelPageLoad;
    class InputPanelPageSettingsValueChanged;
    class InputPanelPageViewStateChanged;
    class LoadAllResources;
    class SubscribeViewCreationOnDemand;
    class TelemetryCommonArgs;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpressiveSuggestionUIPageInitRejected_@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_NI@Z
    void ExpressiveSuggestionUIPageInitRejected_(bool, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidateWindowShowStateString@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAPEB_WW4CandidateWindowShowState@HardwareKeyboardUX@@@Z
    static wchar_t const * GetCandidateWindowShowStateString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputPanelPageUnloaded@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAXXZ
    static void InputPanelPageUnloaded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestionUITitleTextDisplayed@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAXXZ
    static void SuggestionUITitleTextDisplayed();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@UEAA@XZ
    virtual ~TextInputTelemetryLogger();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@AEAA@XZ
    TextInputTelemetryLogger();
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked
