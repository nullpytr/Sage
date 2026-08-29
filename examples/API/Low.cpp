#include <print>
#include <sage>

int main(int const argc, char const* argv[]) {
    Sav save { "other/progress.sav" };

    auto* hashtable = save.ptr<hash_t>(METADATA_HASHTABLE_START);
    std::println("{}", hashtable[0] == save.ref<hash_t>(METADATA_HASHTABLE_START)); // true
}
