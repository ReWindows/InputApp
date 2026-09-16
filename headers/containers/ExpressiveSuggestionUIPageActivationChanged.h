#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class ExpressiveSuggestionUIPageActivationChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ExpressiveSuggestionUIPageActivationChanged@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpressiveSuggestionUIPageActivationChanged@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~ExpressiveSuggestionUIPageActivationChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ExpressiveSuggestionUIPageActivationChanged@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ExpressiveSuggestionUIPageActivationChanged@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
