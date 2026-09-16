#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 13 member(s).
class MultiViewManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateView@MultiViewManager@@SAXW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@PE$AAVString@Platform@@PE$AAUIViewSpecificAdditionalArgs@34567@@Z
    static void ActivateView(int, ::Platform::String & *, ::WindowsInternal::ComposableShell::Experiences::TextInput::Common::IViewSpecificAdditionalArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddApplicationViewId@MultiViewManager@@SAXW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@I@Z
    static void AddApplicationViewId(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateOtherViews@MultiViewManager@@SAXW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@@Z
    static void DeactivateOtherViews(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateView@MultiViewManager@@SAXW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@PE$AAVString@Platform@@@Z
    static void DeactivateView(int, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewPositionAndSizeManager@MultiViewManager@@SAPE$AAVShellViewPositionAndSizeManager@TextInputUndocked@Experiences@ComposableShell@WindowsInternal@@W4TextInputViewType@Common@TextInput@456@@Z
    static WindissectOpaque & * GetViewPositionAndSizeManager(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationViewIdAdded@MultiViewManager@@SA_NW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@@Z
    static bool IsApplicationViewIdAdded(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewTypeHostingTextBox@MultiViewManager@@SA_NW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@@Z
    static bool IsViewTypeHostingTextBox(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewTypeShown@MultiViewManager@@SA_NW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@@Z
    static bool IsViewTypeShown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyKeyboardSettingsMenuFlyoutButtonStateChanged@MultiViewManager@@SAX_N@Z
    static void NotifyKeyboardSettingsMenuFlyoutButtonStateChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySuggestionsProviderChanged@MultiViewManager@@SAXPE$AAUISuggestionsProvider@SuggestionUIUndocked@Experiences@ComposableShell@WindowsInternal@@@Z
    static void NotifySuggestionsProviderChanged(::WindowsInternal::ComposableShell::Experiences::SuggestionUIUndocked::ISuggestionsProvider & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewActivateStateChanged@MultiViewManager@@SAXW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@@Z
    static void NotifyViewActivateStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterMessageChannel@MultiViewManager@@SAXPE$AAUIViewMessageChannel@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@@Z
    static void RegisterMessageChannel(::WindowsInternal::ComposableShell::Experiences::TextInput::Common::IViewMessageChannel & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCreateView@MultiViewManager@@SAXW4TextInputViewType@Common@TextInput@Experiences@ComposableShell@WindowsInternal@@@Z
    static void RequestCreateView(int);
};
