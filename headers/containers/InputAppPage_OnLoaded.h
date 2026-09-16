#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 5 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class InputAppPage_OnLoaded {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InputAppPage_OnLoaded@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_W@Z
    void StartActivity(wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputAppPage_OnLoaded@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~InputAppPage_OnLoaded();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InputAppPage_OnLoaded@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InputAppPage_OnLoaded@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
