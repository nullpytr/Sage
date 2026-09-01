#include <string_view>
#include <vector>
#include <fstream>
#include <iterator>

#define SAGE_DISABLE_MMAP
#include <sage>

/* See: https://gist.github.com/matthewjberger/0b6760de2ed41436a19235cfbe1b2d31 */
inline std::vector<unsigned char> read_all_bytes(std::string_view const& path)
{
    std::ifstream file { path.data(), std::ios::binary | std::ios::ate };
    file >> std::noskipws;

    auto const file_size = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<unsigned char> out;
    out.reserve(file_size);

    std::copy(
        std::istream_iterator<unsigned char>(file),
        std::istream_iterator<unsigned char>(),
        std::back_inserter(out)
    );

    return out;
}

int main(int const argc, char const* argv[]) {
    auto buf { read_all_bytes("other/progress.sav") };
    Sav save { buf }; // buf could be any std::span compatible buffer
    /* -- */
}