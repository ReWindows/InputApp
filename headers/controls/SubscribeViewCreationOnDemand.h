#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 4 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class SubscribeViewCreationOnDemand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SubscribeViewCreationOnDemand@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEBD@Z
    void StartActivity(char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SubscribeViewCreationOnDemand@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~SubscribeViewCreationOnDemand();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SubscribeViewCreationOnDemand@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SubscribeViewCreationOnDemand@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
