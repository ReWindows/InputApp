#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 2 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::InputApp {
class ExpressiveSuggestionUIPage {
public:
    class ExpressiveSuggestionUIPage_obj1_Bindings;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColdStartPerformanceImprovementEnabled@ExpressiveSuggestionUIPage@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SA_NPE$AAUITextInputSettingsManager@Common@TextInput@456@@Z
    static bool IsColdStartPerformanceImprovementEnabled(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ITextInputSettingsManager & *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastOpenTime@ExpressiveSuggestionUIPage@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@CAXPE$AAUITextInputSettingsManager@Common@TextInput@456@@Z
    static void UpdateLastOpenTime(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ITextInputSettingsManager & *);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::InputApp
