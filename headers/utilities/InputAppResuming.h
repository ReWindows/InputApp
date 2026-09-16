#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class InputAppResuming {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InputAppResuming@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputAppResuming@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~InputAppResuming();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InputAppResuming@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InputAppResuming@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
