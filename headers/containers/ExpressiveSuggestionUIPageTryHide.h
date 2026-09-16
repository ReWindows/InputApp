#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class ExpressiveSuggestionUIPageTryHide {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ExpressiveSuggestionUIPageTryHide@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpressiveSuggestionUIPageTryHide@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~ExpressiveSuggestionUIPageTryHide();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ExpressiveSuggestionUIPageTryHide@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ExpressiveSuggestionUIPageTryHide@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
