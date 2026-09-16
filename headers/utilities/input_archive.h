#pragma once
#include "../windissect_forwards.h"

// Reconstructed from InputApp.dll by Windissect. 26 member(s).
namespace tson {
class input_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@input_archive@tson@@QEAAXXZ
    void finishNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?startNode@input_archive@tson@@QEAAXXZ
    void startNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z
    bool consume_expected_marker(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?push_node@input_archive@tson@@AEAAXXZ
    void push_node();
    // Category: Method | Source: PDB Internal
    // Symbol: ?search@input_archive@tson@@AEAA_NXZ
    bool search();
    // Category: Method | Source: PDB Internal
    // Symbol: ?skip_string@input_archive@tson@@AEAAXW4archive_marker@details@2@_K@Z
    void skip_string(int, uint64_t);
};
} // namespace tson
