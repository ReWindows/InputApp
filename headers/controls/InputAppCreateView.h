#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class InputAppCreateView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InputAppCreateView@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEBD_N@Z
    void StartActivity(char const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@InputAppCreateView@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEBD_N@Z
    void Stop(char const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputAppCreateView@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~InputAppCreateView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InputAppCreateView@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InputAppCreateView@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
