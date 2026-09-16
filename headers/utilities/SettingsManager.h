#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 2 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked {
class SettingsManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultInstance@SettingsManager@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUITextInputSettingsManager@Common@TextInput@345@PE$AAUIPlatformAdapter@78345@PE$AAUITextInputInitializationPreferencesProvider@TouchKeyboardUX@@@Z
    static ::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ITextInputSettingsManager & * CreateDefaultInstance(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::IPlatformAdapter & *, ::TouchKeyboardUX::ITextInputInitializationPreferencesProvider & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultInstance@SettingsManager@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUITextInputSettingsManager@Common@TextInput@345@PE$AAUIPlatformAdapter@78345@PE$AAUITextInputInitializationPreferencesProvider@TouchKeyboardUX@@PE$AAVOnScreenInputManager@OnScreenInput@ApplicationModel@WindowsUdk@@@Z
    static ::WindowsInternal::ComposableShell::Experiences::TextInput::Common::ITextInputSettingsManager & * CreateDefaultInstance(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::IPlatformAdapter & *, ::TouchKeyboardUX::ITextInputInitializationPreferencesProvider & *, ::WindowsUdk::ApplicationModel::OnScreenInput::OnScreenInputManager & *);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked
