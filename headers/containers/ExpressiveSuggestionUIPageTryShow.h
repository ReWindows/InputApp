#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class ExpressiveSuggestionUIPageTryShow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ExpressiveSuggestionUIPageTryShow@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPE$AAVString@Platform@@_N1@Z
    void StartActivity(::Platform::String & *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpressiveSuggestionUIPageTryShow@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~ExpressiveSuggestionUIPageTryShow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ExpressiveSuggestionUIPageTryShow@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ExpressiveSuggestionUIPageTryShow@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
