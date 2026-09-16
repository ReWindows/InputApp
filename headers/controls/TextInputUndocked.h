#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 9 member(s).
namespace WindowsInternal::ComposableShell::Experiences {
class TextInputUndocked {
public:
    class SettingsManager;
    class TextInputTelemetryLogger;
    class VoiceTypingTelemetryLogger;
    class XamlTypeInfoProviderState;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedCandidateWindow@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVString@Platform@@@Z
    bool NeedCandidateWindow(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedCorrectionCandidateWindow@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVString@Platform@@@Z
    bool NeedCorrectionCandidateWindow(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedToolbar@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVString@Platform@@@Z
    bool NeedToolbar(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringOrdinalEquals@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVString@Platform@@0@Z
    bool StringOrdinalEquals(::Platform::String & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringOrdinalEqualsIgnoreCase@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVString@Platform@@PEB_W@Z
    bool StringOrdinalEqualsIgnoreCase(::Platform::String & *, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringOrdinalEqualsIgnoreCase2@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVString@Platform@@0@Z
    bool StringOrdinalEqualsIgnoreCase2(::Platform::String & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StringOrdinalStartsWithIgnoreCase@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@YA_NPE$AAVString@Platform@@PEB_W@Z
    bool StringOrdinalStartsWithIgnoreCase(::Platform::String & *, wchar_t const *);
};
} // namespace WindowsInternal::ComposableShell::Experiences
