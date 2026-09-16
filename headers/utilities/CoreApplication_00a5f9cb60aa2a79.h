#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 2 member(s).
namespace Windows::ApplicationModel::Core {
class CoreApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exit@CoreApplication@Core@ApplicationModel@Windows@@SAXXZ
    static void Exit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentView@CoreApplication@Core@ApplicationModel@Windows@@SAPE$AAVCoreApplicationView@234@XZ
    static ::Windows::ApplicationModel::Core::CoreApplicationView & * GetCurrentView();
};
} // namespace Windows::ApplicationModel::Core
