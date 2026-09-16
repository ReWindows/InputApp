#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 1 member(s).
namespace WindowsUdk::ApplicationModel::OnScreenInput {
class OnScreenInputManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForInputKindsForHost@OnScreenInputManager@OnScreenInput@ApplicationModel@WindowsUdk@@SAPE$AAV1234@PE$AAU?$IVectorView@W4KnownOnScreenInputKind@OnScreenInput@ApplicationModel@WindowsUdk@@@Collections@Foundation@Windows@@W4OnScreenInputHostType@234@@Z
    static ::WindowsUdk::ApplicationModel::OnScreenInput::OnScreenInputManager & * CreateForInputKindsForHost(WindissectOpaque & *, int);
};
} // namespace WindowsUdk::ApplicationModel::OnScreenInput
