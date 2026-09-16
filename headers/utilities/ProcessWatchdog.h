#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 3 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::InputApp::HostProcessWatchdog {
class ProcessWatchdog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformInitialization@ProcessWatchdog@HostProcessWatchdog@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAJKK@Z
    long PerformInitialization(unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessWatchdog@HostProcessWatchdog@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~ProcessWatchdog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_waitCallback@ProcessWatchdog@HostProcessWatchdog@InputApp@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
    static void s_waitCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, unsigned long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::InputApp::HostProcessWatchdog
