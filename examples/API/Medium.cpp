#include <print>
#include <sage>

int main(int const argc, char const* argv[]) {
    Sav save { "other/progress.sav" };


    { // Get pointers to fields using hash text or value
        auto* playtime = save.ptr<u32>(hash_value_t { 0xe573f564 });
        auto* life = save.ptr<s32>({"PlayerStatus.MaxLife"});
    }

    { // Get references to fields using hash text or value
        auto& playtime = save.ref<u32>(hash_value_t { 0xe573f564 });
        auto& life = save.ref<s32>({"PlayerStatus.MaxLife"});

        auto& stamina = *save.ptr<s32>({"PlayerStatus.MaxStamina"}); // also works
    }
}
