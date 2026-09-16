#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class InputPanelPageLoad {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InputPanelPageLoad@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputPanelPageLoad@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~InputPanelPageLoad();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InputPanelPageLoad@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InputPanelPageLoad@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
