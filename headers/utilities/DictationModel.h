#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 2 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::Controls {
class DictationModel {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@DictationModel@Controls@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAPE$AAV123456@PE$AAUITextFrameworkAdapter@Common@TextInput@456@PE$AAUITextInputSettingsManager@89456@@Z
    static WindissectOpaque & * GetInstance(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ITextFrameworkAdapter & *, ::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ITextInputSettingsManager & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@DictationModel@Controls@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAPE$AAV123456@PE$AAUITextFrameworkAdapter@Common@TextInput@456@PE$AAUITextInputSettingsManager@89456@PE$AAVDispatcherQueue@System@Windows@@@Z
    static WindissectOpaque & * GetInstance(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ITextFrameworkAdapter & *, ::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ITextInputSettingsManager & *, ::Windows::System::DispatcherQueue & *);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::Controls
