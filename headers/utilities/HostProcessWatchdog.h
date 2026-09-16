#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 3 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::InputApp {
class HostProcessWatchdog {
public:
    class ProcessWatchdog;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableWatchdog@HostProcessWatchdog@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void DisableWatchdog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHostProcessWatchDogEnabled@HostProcessWatchdog@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAJXZ
    long EnsureHostProcessWatchDogEnabled();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostProcessWatchdog@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~HostProcessWatchdog();
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::InputApp
