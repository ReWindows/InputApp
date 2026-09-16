#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 9 member(s).
namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger {
class InputAppLaunch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppResourceLoadersInitialized@InputAppLaunch@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void AppResourceLoadersInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultipleViewsPrepared@InputAppLaunch@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void MultipleViewsPrepared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryPageLoadedInDefaultView@InputAppLaunch@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void PrimaryPageLoadedInDefaultView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryViewCreationQueued@InputAppLaunch@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXXZ
    void PrimaryViewCreationQueued();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InputAppLaunch@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAAXPEB_WH_N0@Z
    void StartActivity(wchar_t const *, int, bool, wchar_t const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputAppLaunch@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ
    ~InputAppLaunch();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InputAppLaunch@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InputAppLaunch@TextInputTelemetryLogger@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowsInternal::ComposableShell::Experiences::TextInputUndocked::TextInputTelemetryLogger
