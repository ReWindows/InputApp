#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class InputPanelPageSettingsValueChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InputPanelPageSettingsValueChanged@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputPanelPageSettingsValueChanged@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~InputPanelPageSettingsValueChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InputPanelPageSettingsValueChanged@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InputPanelPageSettingsValueChanged@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
