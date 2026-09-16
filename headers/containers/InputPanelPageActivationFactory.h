#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 2 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::InputApp {
class __InputPanelPageActivationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFactory@__InputPanelPageActivationFactory@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAJPEAIPEAU__abi___classObjectEntry@@AEAVGuid@Platform@@PEAPEAU__abi_IUnknown@@@Z
    static long CreateFactory(unsigned int *, __abi___classObjectEntry *, ::Platform::Guid &, __abi_IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetClassName@__InputPanelPageActivationFactory@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@SAPEB_WXZ
    static wchar_t const * GetTargetClassName();
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::InputApp
