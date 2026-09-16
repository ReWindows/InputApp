#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 6 member(s).
namespace winrt {
class impl {
public:
    class atomic_ref_count;
    class error_info_fallback;
    class factory_count_guard;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEB_WI@Z
    WindissectOpaque * create_hstring_on_heap(wchar_t const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?fallback_RoGetActivationFactory@impl@winrt@@YAHPEAXAEBUguid@2@PEAPEAX@Z
    int fallback_RoGetActivationFactory(void *, WindissectOpaque const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z
    WindissectOpaque * precreate_hstring_on_heap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEB_WI@Z
    WindissectOpaque trim_hresult_message(wchar_t const * const, unsigned int);
};
} // namespace winrt
