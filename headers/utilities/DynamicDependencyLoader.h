#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 2 member(s).
namespace Utility {
class DynamicDependencyLoader {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWinUIPackageLoaded@DynamicDependencyLoader@Utility@@SA_NXZ
    static bool IsWinUIPackageLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLoadWinUIPackage@DynamicDependencyLoader@Utility@@SA_NXZ
    static bool TryLoadWinUIPackage();
};
} // namespace Utility
