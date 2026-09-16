#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 5 member(s).
class SuspensionDeferralTracker {
public:
    class SourceInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncreaseCount@SuspensionDeferralTracker@@QEAAHPE$AAVString@Platform@@H@Z
    int IncreaseCount(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkAppSuspended@SuspensionDeferralTracker@@QEAAXXZ
    void MarkAppSuspended();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkShellPreferencesInitialized@SuspensionDeferralTracker@@QEAAXXZ
    void MarkShellPreferencesInitialized();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SuspensionDeferralTracker@@QEAA@XZ
    SuspensionDeferralTracker();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SuspensionDeferralTracker@@QEAA@XZ
    ~SuspensionDeferralTracker();
};
